#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00208BB0
// Address: 0x208bb0 - 0x209018
void sub_00208BB0_0x208bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208BB0_0x208bb0");
#endif

    switch (ctx->pc) {
        case 0x208bb0u: goto label_208bb0;
        case 0x208bb4u: goto label_208bb4;
        case 0x208bb8u: goto label_208bb8;
        case 0x208bbcu: goto label_208bbc;
        case 0x208bc0u: goto label_208bc0;
        case 0x208bc4u: goto label_208bc4;
        case 0x208bc8u: goto label_208bc8;
        case 0x208bccu: goto label_208bcc;
        case 0x208bd0u: goto label_208bd0;
        case 0x208bd4u: goto label_208bd4;
        case 0x208bd8u: goto label_208bd8;
        case 0x208bdcu: goto label_208bdc;
        case 0x208be0u: goto label_208be0;
        case 0x208be4u: goto label_208be4;
        case 0x208be8u: goto label_208be8;
        case 0x208becu: goto label_208bec;
        case 0x208bf0u: goto label_208bf0;
        case 0x208bf4u: goto label_208bf4;
        case 0x208bf8u: goto label_208bf8;
        case 0x208bfcu: goto label_208bfc;
        case 0x208c00u: goto label_208c00;
        case 0x208c04u: goto label_208c04;
        case 0x208c08u: goto label_208c08;
        case 0x208c0cu: goto label_208c0c;
        case 0x208c10u: goto label_208c10;
        case 0x208c14u: goto label_208c14;
        case 0x208c18u: goto label_208c18;
        case 0x208c1cu: goto label_208c1c;
        case 0x208c20u: goto label_208c20;
        case 0x208c24u: goto label_208c24;
        case 0x208c28u: goto label_208c28;
        case 0x208c2cu: goto label_208c2c;
        case 0x208c30u: goto label_208c30;
        case 0x208c34u: goto label_208c34;
        case 0x208c38u: goto label_208c38;
        case 0x208c3cu: goto label_208c3c;
        case 0x208c40u: goto label_208c40;
        case 0x208c44u: goto label_208c44;
        case 0x208c48u: goto label_208c48;
        case 0x208c4cu: goto label_208c4c;
        case 0x208c50u: goto label_208c50;
        case 0x208c54u: goto label_208c54;
        case 0x208c58u: goto label_208c58;
        case 0x208c5cu: goto label_208c5c;
        case 0x208c60u: goto label_208c60;
        case 0x208c64u: goto label_208c64;
        case 0x208c68u: goto label_208c68;
        case 0x208c6cu: goto label_208c6c;
        case 0x208c70u: goto label_208c70;
        case 0x208c74u: goto label_208c74;
        case 0x208c78u: goto label_208c78;
        case 0x208c7cu: goto label_208c7c;
        case 0x208c80u: goto label_208c80;
        case 0x208c84u: goto label_208c84;
        case 0x208c88u: goto label_208c88;
        case 0x208c8cu: goto label_208c8c;
        case 0x208c90u: goto label_208c90;
        case 0x208c94u: goto label_208c94;
        case 0x208c98u: goto label_208c98;
        case 0x208c9cu: goto label_208c9c;
        case 0x208ca0u: goto label_208ca0;
        case 0x208ca4u: goto label_208ca4;
        case 0x208ca8u: goto label_208ca8;
        case 0x208cacu: goto label_208cac;
        case 0x208cb0u: goto label_208cb0;
        case 0x208cb4u: goto label_208cb4;
        case 0x208cb8u: goto label_208cb8;
        case 0x208cbcu: goto label_208cbc;
        case 0x208cc0u: goto label_208cc0;
        case 0x208cc4u: goto label_208cc4;
        case 0x208cc8u: goto label_208cc8;
        case 0x208cccu: goto label_208ccc;
        case 0x208cd0u: goto label_208cd0;
        case 0x208cd4u: goto label_208cd4;
        case 0x208cd8u: goto label_208cd8;
        case 0x208cdcu: goto label_208cdc;
        case 0x208ce0u: goto label_208ce0;
        case 0x208ce4u: goto label_208ce4;
        case 0x208ce8u: goto label_208ce8;
        case 0x208cecu: goto label_208cec;
        case 0x208cf0u: goto label_208cf0;
        case 0x208cf4u: goto label_208cf4;
        case 0x208cf8u: goto label_208cf8;
        case 0x208cfcu: goto label_208cfc;
        case 0x208d00u: goto label_208d00;
        case 0x208d04u: goto label_208d04;
        case 0x208d08u: goto label_208d08;
        case 0x208d0cu: goto label_208d0c;
        case 0x208d10u: goto label_208d10;
        case 0x208d14u: goto label_208d14;
        case 0x208d18u: goto label_208d18;
        case 0x208d1cu: goto label_208d1c;
        case 0x208d20u: goto label_208d20;
        case 0x208d24u: goto label_208d24;
        case 0x208d28u: goto label_208d28;
        case 0x208d2cu: goto label_208d2c;
        case 0x208d30u: goto label_208d30;
        case 0x208d34u: goto label_208d34;
        case 0x208d38u: goto label_208d38;
        case 0x208d3cu: goto label_208d3c;
        case 0x208d40u: goto label_208d40;
        case 0x208d44u: goto label_208d44;
        case 0x208d48u: goto label_208d48;
        case 0x208d4cu: goto label_208d4c;
        case 0x208d50u: goto label_208d50;
        case 0x208d54u: goto label_208d54;
        case 0x208d58u: goto label_208d58;
        case 0x208d5cu: goto label_208d5c;
        case 0x208d60u: goto label_208d60;
        case 0x208d64u: goto label_208d64;
        case 0x208d68u: goto label_208d68;
        case 0x208d6cu: goto label_208d6c;
        case 0x208d70u: goto label_208d70;
        case 0x208d74u: goto label_208d74;
        case 0x208d78u: goto label_208d78;
        case 0x208d7cu: goto label_208d7c;
        case 0x208d80u: goto label_208d80;
        case 0x208d84u: goto label_208d84;
        case 0x208d88u: goto label_208d88;
        case 0x208d8cu: goto label_208d8c;
        case 0x208d90u: goto label_208d90;
        case 0x208d94u: goto label_208d94;
        case 0x208d98u: goto label_208d98;
        case 0x208d9cu: goto label_208d9c;
        case 0x208da0u: goto label_208da0;
        case 0x208da4u: goto label_208da4;
        case 0x208da8u: goto label_208da8;
        case 0x208dacu: goto label_208dac;
        case 0x208db0u: goto label_208db0;
        case 0x208db4u: goto label_208db4;
        case 0x208db8u: goto label_208db8;
        case 0x208dbcu: goto label_208dbc;
        case 0x208dc0u: goto label_208dc0;
        case 0x208dc4u: goto label_208dc4;
        case 0x208dc8u: goto label_208dc8;
        case 0x208dccu: goto label_208dcc;
        case 0x208dd0u: goto label_208dd0;
        case 0x208dd4u: goto label_208dd4;
        case 0x208dd8u: goto label_208dd8;
        case 0x208ddcu: goto label_208ddc;
        case 0x208de0u: goto label_208de0;
        case 0x208de4u: goto label_208de4;
        case 0x208de8u: goto label_208de8;
        case 0x208decu: goto label_208dec;
        case 0x208df0u: goto label_208df0;
        case 0x208df4u: goto label_208df4;
        case 0x208df8u: goto label_208df8;
        case 0x208dfcu: goto label_208dfc;
        case 0x208e00u: goto label_208e00;
        case 0x208e04u: goto label_208e04;
        case 0x208e08u: goto label_208e08;
        case 0x208e0cu: goto label_208e0c;
        case 0x208e10u: goto label_208e10;
        case 0x208e14u: goto label_208e14;
        case 0x208e18u: goto label_208e18;
        case 0x208e1cu: goto label_208e1c;
        case 0x208e20u: goto label_208e20;
        case 0x208e24u: goto label_208e24;
        case 0x208e28u: goto label_208e28;
        case 0x208e2cu: goto label_208e2c;
        case 0x208e30u: goto label_208e30;
        case 0x208e34u: goto label_208e34;
        case 0x208e38u: goto label_208e38;
        case 0x208e3cu: goto label_208e3c;
        case 0x208e40u: goto label_208e40;
        case 0x208e44u: goto label_208e44;
        case 0x208e48u: goto label_208e48;
        case 0x208e4cu: goto label_208e4c;
        case 0x208e50u: goto label_208e50;
        case 0x208e54u: goto label_208e54;
        case 0x208e58u: goto label_208e58;
        case 0x208e5cu: goto label_208e5c;
        case 0x208e60u: goto label_208e60;
        case 0x208e64u: goto label_208e64;
        case 0x208e68u: goto label_208e68;
        case 0x208e6cu: goto label_208e6c;
        case 0x208e70u: goto label_208e70;
        case 0x208e74u: goto label_208e74;
        case 0x208e78u: goto label_208e78;
        case 0x208e7cu: goto label_208e7c;
        case 0x208e80u: goto label_208e80;
        case 0x208e84u: goto label_208e84;
        case 0x208e88u: goto label_208e88;
        case 0x208e8cu: goto label_208e8c;
        case 0x208e90u: goto label_208e90;
        case 0x208e94u: goto label_208e94;
        case 0x208e98u: goto label_208e98;
        case 0x208e9cu: goto label_208e9c;
        case 0x208ea0u: goto label_208ea0;
        case 0x208ea4u: goto label_208ea4;
        case 0x208ea8u: goto label_208ea8;
        case 0x208eacu: goto label_208eac;
        case 0x208eb0u: goto label_208eb0;
        case 0x208eb4u: goto label_208eb4;
        case 0x208eb8u: goto label_208eb8;
        case 0x208ebcu: goto label_208ebc;
        case 0x208ec0u: goto label_208ec0;
        case 0x208ec4u: goto label_208ec4;
        case 0x208ec8u: goto label_208ec8;
        case 0x208eccu: goto label_208ecc;
        case 0x208ed0u: goto label_208ed0;
        case 0x208ed4u: goto label_208ed4;
        case 0x208ed8u: goto label_208ed8;
        case 0x208edcu: goto label_208edc;
        case 0x208ee0u: goto label_208ee0;
        case 0x208ee4u: goto label_208ee4;
        case 0x208ee8u: goto label_208ee8;
        case 0x208eecu: goto label_208eec;
        case 0x208ef0u: goto label_208ef0;
        case 0x208ef4u: goto label_208ef4;
        case 0x208ef8u: goto label_208ef8;
        case 0x208efcu: goto label_208efc;
        case 0x208f00u: goto label_208f00;
        case 0x208f04u: goto label_208f04;
        case 0x208f08u: goto label_208f08;
        case 0x208f0cu: goto label_208f0c;
        case 0x208f10u: goto label_208f10;
        case 0x208f14u: goto label_208f14;
        case 0x208f18u: goto label_208f18;
        case 0x208f1cu: goto label_208f1c;
        case 0x208f20u: goto label_208f20;
        case 0x208f24u: goto label_208f24;
        case 0x208f28u: goto label_208f28;
        case 0x208f2cu: goto label_208f2c;
        case 0x208f30u: goto label_208f30;
        case 0x208f34u: goto label_208f34;
        case 0x208f38u: goto label_208f38;
        case 0x208f3cu: goto label_208f3c;
        case 0x208f40u: goto label_208f40;
        case 0x208f44u: goto label_208f44;
        case 0x208f48u: goto label_208f48;
        case 0x208f4cu: goto label_208f4c;
        case 0x208f50u: goto label_208f50;
        case 0x208f54u: goto label_208f54;
        case 0x208f58u: goto label_208f58;
        case 0x208f5cu: goto label_208f5c;
        case 0x208f60u: goto label_208f60;
        case 0x208f64u: goto label_208f64;
        case 0x208f68u: goto label_208f68;
        case 0x208f6cu: goto label_208f6c;
        case 0x208f70u: goto label_208f70;
        case 0x208f74u: goto label_208f74;
        case 0x208f78u: goto label_208f78;
        case 0x208f7cu: goto label_208f7c;
        case 0x208f80u: goto label_208f80;
        case 0x208f84u: goto label_208f84;
        case 0x208f88u: goto label_208f88;
        case 0x208f8cu: goto label_208f8c;
        case 0x208f90u: goto label_208f90;
        case 0x208f94u: goto label_208f94;
        case 0x208f98u: goto label_208f98;
        case 0x208f9cu: goto label_208f9c;
        case 0x208fa0u: goto label_208fa0;
        case 0x208fa4u: goto label_208fa4;
        case 0x208fa8u: goto label_208fa8;
        case 0x208facu: goto label_208fac;
        case 0x208fb0u: goto label_208fb0;
        case 0x208fb4u: goto label_208fb4;
        case 0x208fb8u: goto label_208fb8;
        case 0x208fbcu: goto label_208fbc;
        case 0x208fc0u: goto label_208fc0;
        case 0x208fc4u: goto label_208fc4;
        case 0x208fc8u: goto label_208fc8;
        case 0x208fccu: goto label_208fcc;
        case 0x208fd0u: goto label_208fd0;
        case 0x208fd4u: goto label_208fd4;
        case 0x208fd8u: goto label_208fd8;
        case 0x208fdcu: goto label_208fdc;
        case 0x208fe0u: goto label_208fe0;
        case 0x208fe4u: goto label_208fe4;
        case 0x208fe8u: goto label_208fe8;
        case 0x208fecu: goto label_208fec;
        case 0x208ff0u: goto label_208ff0;
        case 0x208ff4u: goto label_208ff4;
        case 0x208ff8u: goto label_208ff8;
        case 0x208ffcu: goto label_208ffc;
        case 0x209000u: goto label_209000;
        case 0x209004u: goto label_209004;
        case 0x209008u: goto label_209008;
        case 0x20900cu: goto label_20900c;
        case 0x209010u: goto label_209010;
        case 0x209014u: goto label_209014;
        default: break;
    }

    ctx->pc = 0x208bb0u;

label_208bb0:
    // 0x208bb0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x208bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_208bb4:
    // 0x208bb4: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x208bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
label_208bb8:
    // 0x208bb8: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x208bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
label_208bbc:
    // 0x208bbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208bc0:
    // 0x208bc0: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x208bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
label_208bc4:
    // 0x208bc4: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x208bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
label_208bc8:
    // 0x208bc8: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x208bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
label_208bcc:
    // 0x208bcc: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x208bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
label_208bd0:
    // 0x208bd0: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x208bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
label_208bd4:
    // 0x208bd4: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x208bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
label_208bd8:
    // 0x208bd8: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x208bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_208bdc:
    // 0x208bdc: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x208bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
label_208be0:
    // 0x208be0: 0x8e350018  lw          $s5, 0x18($s1)
    ctx->pc = 0x208be0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_208be4:
    // 0x208be4: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x208be4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_208be8:
    // 0x208be8: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_208bec:
    if (ctx->pc == 0x208BECu) {
        ctx->pc = 0x208BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BE8u;
        // 0x208bec: 0x8eb30000  lw          $s3, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BF0u;
        goto label_208bf0;
    }
    ctx->pc = 0x208BE8u;
    {
        const bool branch_taken_0x208be8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x208BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BE8u;
        // 0x208bec: 0x8eb30000  lw          $s3, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208be8) {
            ctx->pc = 0x208C10u;
            goto label_208c10;
        }
    }
    ctx->pc = 0x208BF0u;
label_208bf0:
    // 0x208bf0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x208bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_208bf4:
    // 0x208bf4: 0x40f809  jalr        $v0
label_208bf8:
    if (ctx->pc == 0x208BF8u) {
        ctx->pc = 0x208BFCu;
        goto label_208bfc;
    }
    ctx->pc = 0x208BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208BFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208BF4u, 0x208BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208BFCu;
label_208bfc:
    // 0x208bfc: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
label_208c00:
    if (ctx->pc == 0x208C00u) {
        ctx->pc = 0x208C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BFCu;
        // 0x208c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C04u;
        goto label_208c04;
    }
    ctx->pc = 0x208BFCu;
    {
        const bool branch_taken_0x208bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BFCu;
        // 0x208c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bfc) {
            ctx->pc = 0x208FE8u;
            goto label_208fe8;
        }
    }
    ctx->pc = 0x208C04u;
label_208c04:
    // 0x208c04: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x208c04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208c08:
    // 0x208c08: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x208c08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_208c0c:
    // 0x208c0c: 0x0  nop
    ctx->pc = 0x208c0cu;
    // NOP
label_208c10:
    // 0x208c10: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x208c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_208c14:
    // 0x208c14: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x208c14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_208c18:
    // 0x208c18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x208c18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_208c1c:
    // 0x208c1c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_208c20:
    if (ctx->pc == 0x208C20u) {
        ctx->pc = 0x208C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C1Cu;
        // 0x208c20: 0x2ba00  sll         $s7, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C24u;
        goto label_208c24;
    }
    ctx->pc = 0x208C1Cu;
    {
        const bool branch_taken_0x208c1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x208C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C1Cu;
        // 0x208c20: 0x2ba00  sll         $s7, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c1c) {
            ctx->pc = 0x208C40u;
            goto label_208c40;
        }
    }
    ctx->pc = 0x208C24u;
label_208c24:
    // 0x208c24: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x208c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_208c28:
    // 0x208c28: 0x40f809  jalr        $v0
label_208c2c:
    if (ctx->pc == 0x208C2Cu) {
        ctx->pc = 0x208C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C28u;
        // 0x208c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C30u;
        goto label_208c30;
    }
    ctx->pc = 0x208C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208C30u);
        ctx->pc = 0x208C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C28u;
        // 0x208c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208C28u, 0x208C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208C30u;
label_208c30:
    // 0x208c30: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
label_208c34:
    if (ctx->pc == 0x208C34u) {
        ctx->pc = 0x208C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C30u;
        // 0x208c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C38u;
        goto label_208c38;
    }
    ctx->pc = 0x208C30u;
    {
        const bool branch_taken_0x208c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C30u;
        // 0x208c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c30) {
            ctx->pc = 0x208FE8u;
            goto label_208fe8;
        }
    }
    ctx->pc = 0x208C38u;
label_208c38:
    // 0x208c38: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x208c38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208c3c:
    // 0x208c3c: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x208c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_208c40:
    // 0x208c40: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x208c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_208c44:
    // 0x208c44: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x208c44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_208c48:
    // 0x208c48: 0x2e2b82d  daddu       $s7, $s7, $v0
    ctx->pc = 0x208c48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 2));
label_208c4c:
    // 0x208c4c: 0x66f7fffe  daddiu      $s7, $s7, -0x2
    ctx->pc = 0x208c4cu;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)4294967294);
label_208c50:
    // 0x208c50: 0x2ae20011  slti        $v0, $s7, 0x11
    ctx->pc = 0x208c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)17) ? 1 : 0);
label_208c54:
    // 0x208c54: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
label_208c58:
    if (ctx->pc == 0x208C58u) {
        ctx->pc = 0x208C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C54u;
        // 0x208c58: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C5Cu;
        goto label_208c5c;
    }
    ctx->pc = 0x208C54u;
    {
        const bool branch_taken_0x208c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C54u;
        // 0x208c58: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c54) {
            ctx->pc = 0x208FBCu;
            goto label_208fbc;
        }
    }
    ctx->pc = 0x208C5Cu;
label_208c5c:
    // 0x208c5c: 0x0  nop
    ctx->pc = 0x208c5cu;
    // NOP
label_208c60:
    // 0x208c60: 0x56400009  bnel        $s2, $zero, . + 4 + (0x9 << 2)
label_208c64:
    if (ctx->pc == 0x208C64u) {
        ctx->pc = 0x208C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C60u;
        // 0x208c64: 0x92760000  lbu         $s6, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C68u;
        goto label_208c68;
    }
    ctx->pc = 0x208C60u;
    {
        const bool branch_taken_0x208c60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x208c60) {
            ctx->pc = 0x208C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208C60u;
            // 0x208c64: 0x92760000  lbu         $s6, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208C88u;
            goto label_208c88;
        }
    }
    ctx->pc = 0x208C68u;
label_208c68:
    // 0x208c68: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x208c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_208c6c:
    // 0x208c6c: 0x40f809  jalr        $v0
label_208c70:
    if (ctx->pc == 0x208C70u) {
        ctx->pc = 0x208C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C6Cu;
        // 0x208c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C74u;
        goto label_208c74;
    }
    ctx->pc = 0x208C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208C74u);
        ctx->pc = 0x208C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C6Cu;
        // 0x208c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208C6Cu, 0x208C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208C74u;
label_208c74:
    // 0x208c74: 0x104000dc  beqz        $v0, . + 4 + (0xDC << 2)
label_208c78:
    if (ctx->pc == 0x208C78u) {
        ctx->pc = 0x208C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C74u;
        // 0x208c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C7Cu;
        goto label_208c7c;
    }
    ctx->pc = 0x208C74u;
    {
        const bool branch_taken_0x208c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C74u;
        // 0x208c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c74) {
            ctx->pc = 0x208FE8u;
            goto label_208fe8;
        }
    }
    ctx->pc = 0x208C7Cu;
label_208c7c:
    // 0x208c7c: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x208c7cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208c80:
    // 0x208c80: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x208c80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_208c84:
    // 0x208c84: 0x92760000  lbu         $s6, 0x0($s3)
    ctx->pc = 0x208c84u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_208c88:
    // 0x208c88: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x208c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_208c8c:
    // 0x208c8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x208c8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_208c90:
    // 0x208c90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x208c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208c94:
    // 0x208c94: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x208c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_208c98:
    // 0x208c98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208c9c:
    // 0x208c9c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x208c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_208ca0:
    // 0x208ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_208ca4:
    // 0x208ca4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x208ca4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208ca8:
    // 0x208ca8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x208ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208cac:
    // 0x208cac: 0xac560018  sw          $s6, 0x18($v0)
    ctx->pc = 0x208cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 22));
label_208cb0:
    // 0x208cb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x208cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208cb4:
    // 0x208cb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x208cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_208cb8:
    // 0x208cb8: 0x40f809  jalr        $v0
label_208cbc:
    if (ctx->pc == 0x208CBCu) {
        ctx->pc = 0x208CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CB8u;
        // 0x208cbc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CC0u;
        goto label_208cc0;
    }
    ctx->pc = 0x208CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208CC0u);
        ctx->pc = 0x208CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CB8u;
        // 0x208cbc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208CB8u, 0x208CC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208CC0u;
label_208cc0:
    // 0x208cc0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x208cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_208cc4:
    // 0x208cc4: 0x27b00001  addiu       $s0, $sp, 0x1
    ctx->pc = 0x208cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
label_208cc8:
    // 0x208cc8: 0x56400009  bnel        $s2, $zero, . + 4 + (0x9 << 2)
label_208ccc:
    if (ctx->pc == 0x208CCCu) {
        ctx->pc = 0x208CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CC8u;
        // 0x208ccc: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CD0u;
        goto label_208cd0;
    }
    ctx->pc = 0x208CC8u;
    {
        const bool branch_taken_0x208cc8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x208cc8) {
            ctx->pc = 0x208CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208CC8u;
            // 0x208ccc: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208CF0u;
            goto label_208cf0;
        }
    }
    ctx->pc = 0x208CD0u;
label_208cd0:
    // 0x208cd0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x208cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_208cd4:
    // 0x208cd4: 0x40f809  jalr        $v0
label_208cd8:
    if (ctx->pc == 0x208CD8u) {
        ctx->pc = 0x208CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CD4u;
        // 0x208cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CDCu;
        goto label_208cdc;
    }
    ctx->pc = 0x208CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208CDCu);
        ctx->pc = 0x208CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CD4u;
        // 0x208cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208CD4u, 0x208CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208CDCu;
label_208cdc:
    // 0x208cdc: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
label_208ce0:
    if (ctx->pc == 0x208CE0u) {
        ctx->pc = 0x208CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CDCu;
        // 0x208ce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CE4u;
        goto label_208ce4;
    }
    ctx->pc = 0x208CDCu;
    {
        const bool branch_taken_0x208cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CDCu;
        // 0x208ce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208cdc) {
            ctx->pc = 0x208FE8u;
            goto label_208fe8;
        }
    }
    ctx->pc = 0x208CE4u;
label_208ce4:
    // 0x208ce4: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x208ce4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208ce8:
    // 0x208ce8: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x208ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_208cec:
    // 0x208cec: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x208cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_208cf0:
    // 0x208cf0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x208cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_208cf4:
    // 0x208cf4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x208cf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_208cf8:
    // 0x208cf8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x208cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_208cfc:
    // 0x208cfc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x208cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_208d00:
    // 0x208d00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x208d00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_208d04:
    // 0x208d04: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x208d04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_208d08:
    // 0x208d08: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x208d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
label_208d0c:
    // 0x208d0c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_208d10:
    if (ctx->pc == 0x208D10u) {
        ctx->pc = 0x208D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D0Cu;
        // 0x208d10: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D14u;
        goto label_208d14;
    }
    ctx->pc = 0x208D0Cu;
    {
        const bool branch_taken_0x208d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D0Cu;
        // 0x208d10: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d0c) {
            ctx->pc = 0x208CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208cc8;
        }
    }
    ctx->pc = 0x208D14u;
label_208d14:
    // 0x208d14: 0x66f7ffef  daddiu      $s7, $s7, -0x11
    ctx->pc = 0x208d14u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)4294967279);
label_208d18:
    // 0x208d18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x208d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208d1c:
    // 0x208d1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x208d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_208d20:
    // 0x208d20: 0x93a70001  lbu         $a3, 0x1($sp)
    ctx->pc = 0x208d20u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_208d24:
    // 0x208d24: 0x24660018  addiu       $a2, $v1, 0x18
    ctx->pc = 0x208d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_208d28:
    // 0x208d28: 0xac670018  sw          $a3, 0x18($v1)
    ctx->pc = 0x208d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 7));
label_208d2c:
    // 0x208d2c: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x208d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_208d30:
    // 0x208d30: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x208d30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_208d34:
    // 0x208d34: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x208d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_208d38:
    // 0x208d38: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x208d38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_208d3c:
    // 0x208d3c: 0x93a20004  lbu         $v0, 0x4($sp)
    ctx->pc = 0x208d3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
label_208d40:
    // 0x208d40: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x208d40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_208d44:
    // 0x208d44: 0x93a30005  lbu         $v1, 0x5($sp)
    ctx->pc = 0x208d44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
label_208d48:
    // 0x208d48: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x208d48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
label_208d4c:
    // 0x208d4c: 0x93a20006  lbu         $v0, 0x6($sp)
    ctx->pc = 0x208d4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
label_208d50:
    // 0x208d50: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x208d50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_208d54:
    // 0x208d54: 0x93a30007  lbu         $v1, 0x7($sp)
    ctx->pc = 0x208d54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
label_208d58:
    // 0x208d58: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x208d58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
label_208d5c:
    // 0x208d5c: 0x93a20008  lbu         $v0, 0x8($sp)
    ctx->pc = 0x208d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
label_208d60:
    // 0x208d60: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x208d60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
label_208d64:
    // 0x208d64: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x208d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_208d68:
    // 0x208d68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x208d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208d6c:
    // 0x208d6c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x208d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_208d70:
    // 0x208d70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x208d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208d74:
    // 0x208d74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x208d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_208d78:
    // 0x208d78: 0x60f809  jalr        $v1
label_208d7c:
    if (ctx->pc == 0x208D7Cu) {
        ctx->pc = 0x208D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D78u;
        // 0x208d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D80u;
        goto label_208d80;
    }
    ctx->pc = 0x208D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208D80u);
        ctx->pc = 0x208D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D78u;
        // 0x208d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208D78u, 0x208D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208D80u;
label_208d80:
    // 0x208d80: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x208d80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208d84:
    // 0x208d84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x208d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_208d88:
    // 0x208d88: 0x93a30009  lbu         $v1, 0x9($sp)
    ctx->pc = 0x208d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
label_208d8c:
    // 0x208d8c: 0x24e60018  addiu       $a2, $a3, 0x18
    ctx->pc = 0x208d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_208d90:
    // 0x208d90: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x208d90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_208d94:
    // 0x208d94: 0x93a2000a  lbu         $v0, 0xA($sp)
    ctx->pc = 0x208d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 10)));
label_208d98:
    // 0x208d98: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x208d98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_208d9c:
    // 0x208d9c: 0x93a3000b  lbu         $v1, 0xB($sp)
    ctx->pc = 0x208d9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 11)));
label_208da0:
    // 0x208da0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x208da0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_208da4:
    // 0x208da4: 0x93a2000c  lbu         $v0, 0xC($sp)
    ctx->pc = 0x208da4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
label_208da8:
    // 0x208da8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x208da8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_208dac:
    // 0x208dac: 0x93a3000d  lbu         $v1, 0xD($sp)
    ctx->pc = 0x208dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 13)));
label_208db0:
    // 0x208db0: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x208db0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
label_208db4:
    // 0x208db4: 0x93a2000e  lbu         $v0, 0xE($sp)
    ctx->pc = 0x208db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 14)));
label_208db8:
    // 0x208db8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x208db8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_208dbc:
    // 0x208dbc: 0x93a3000f  lbu         $v1, 0xF($sp)
    ctx->pc = 0x208dbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 15)));
label_208dc0:
    // 0x208dc0: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x208dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
label_208dc4:
    // 0x208dc4: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x208dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_208dc8:
    // 0x208dc8: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x208dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
label_208dcc:
    // 0x208dcc: 0x24060056  addiu       $a2, $zero, 0x56
    ctx->pc = 0x208dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_208dd0:
    // 0x208dd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x208dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208dd4:
    // 0x208dd4: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x208dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_208dd8:
    // 0x208dd8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x208dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208ddc:
    // 0x208ddc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x208ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_208de0:
    // 0x208de0: 0x60f809  jalr        $v1
label_208de4:
    if (ctx->pc == 0x208DE4u) {
        ctx->pc = 0x208DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DE0u;
        // 0x208de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208DE8u;
        goto label_208de8;
    }
    ctx->pc = 0x208DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208DE8u);
        ctx->pc = 0x208DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DE0u;
        // 0x208de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208DE0u, 0x208DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208DE8u;
label_208de8:
    // 0x208de8: 0x2bc20101  slti        $v0, $fp, 0x101
    ctx->pc = 0x208de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)257) ? 1 : 0);
label_208dec:
    // 0x208dec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_208df0:
    if (ctx->pc == 0x208DF0u) {
        ctx->pc = 0x208DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DECu;
        // 0x208df0: 0x2fe102a  slt         $v0, $s7, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208DF4u;
        goto label_208df4;
    }
    ctx->pc = 0x208DECu;
    {
        const bool branch_taken_0x208dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DECu;
        // 0x208df0: 0x2fe102a  slt         $v0, $s7, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208dec) {
            ctx->pc = 0x208E00u;
            goto label_208e00;
        }
    }
    ctx->pc = 0x208DF4u;
label_208df4:
    // 0x208df4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_208df8:
    if (ctx->pc == 0x208DF8u) {
        ctx->pc = 0x208DFCu;
        goto label_208dfc;
    }
    ctx->pc = 0x208DF4u;
    {
        const bool branch_taken_0x208df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208df4) {
            ctx->pc = 0x208E1Cu;
            goto label_208e1c;
        }
    }
    ctx->pc = 0x208DFCu;
label_208dfc:
    // 0x208dfc: 0x0  nop
    ctx->pc = 0x208dfcu;
    // NOP
label_208e00:
    // 0x208e00: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x208e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208e04:
    // 0x208e04: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x208e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_208e08:
    // 0x208e08: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x208e08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_208e0c:
    // 0x208e0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x208e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208e10:
    // 0x208e10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x208e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208e14:
    // 0x208e14: 0x60f809  jalr        $v1
label_208e18:
    if (ctx->pc == 0x208E18u) {
        ctx->pc = 0x208E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E14u;
        // 0x208e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E1Cu;
        goto label_208e1c;
    }
    ctx->pc = 0x208E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208E1Cu);
        ctx->pc = 0x208E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E14u;
        // 0x208e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208E14u, 0x208E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208E1Cu;
label_208e1c:
    // 0x208e1c: 0x1bc00015  blez        $fp, . + 4 + (0x15 << 2)
label_208e20:
    if (ctx->pc == 0x208E20u) {
        ctx->pc = 0x208E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E1Cu;
        // 0x208e20: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E24u;
        goto label_208e24;
    }
    ctx->pc = 0x208E1Cu;
    {
        const bool branch_taken_0x208e1c = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x208E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E1Cu;
        // 0x208e20: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e1c) {
            ctx->pc = 0x208E74u;
            goto label_208e74;
        }
    }
    ctx->pc = 0x208E24u;
label_208e24:
    // 0x208e24: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x208e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_208e28:
    // 0x208e28: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
label_208e2c:
    if (ctx->pc == 0x208E2Cu) {
        ctx->pc = 0x208E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E28u;
        // 0x208e2c: 0x92630000  lbu         $v1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E30u;
        goto label_208e30;
    }
    ctx->pc = 0x208E28u;
    {
        const bool branch_taken_0x208e28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x208e28) {
            ctx->pc = 0x208E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208E28u;
            // 0x208e2c: 0x92630000  lbu         $v1, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208E58u;
            goto label_208e58;
        }
    }
    ctx->pc = 0x208E30u;
label_208e30:
    // 0x208e30: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x208e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_208e34:
    // 0x208e34: 0x40f809  jalr        $v0
label_208e38:
    if (ctx->pc == 0x208E38u) {
        ctx->pc = 0x208E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E34u;
        // 0x208e38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E3Cu;
        goto label_208e3c;
    }
    ctx->pc = 0x208E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208E3Cu);
        ctx->pc = 0x208E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E34u;
        // 0x208e38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208E34u, 0x208E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208E3Cu;
label_208e3c:
    // 0x208e3c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_208e40:
    if (ctx->pc == 0x208E40u) {
        ctx->pc = 0x208E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E3Cu;
        // 0x208e40: 0x8eb30000  lw          $s3, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E44u;
        goto label_208e44;
    }
    ctx->pc = 0x208E3Cu;
    {
        const bool branch_taken_0x208e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208e3c) {
            ctx->pc = 0x208E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208E3Cu;
            // 0x208e40: 0x8eb30000  lw          $s3, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208E50u;
            goto label_208e50;
        }
    }
    ctx->pc = 0x208E44u;
label_208e44:
    // 0x208e44: 0x10000068  b           . + 4 + (0x68 << 2)
label_208e48:
    if (ctx->pc == 0x208E48u) {
        ctx->pc = 0x208E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E44u;
        // 0x208e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E4Cu;
        goto label_208e4c;
    }
    ctx->pc = 0x208E44u;
    {
        const bool branch_taken_0x208e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E44u;
        // 0x208e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e44) {
            ctx->pc = 0x208FE8u;
            goto label_208fe8;
        }
    }
    ctx->pc = 0x208E4Cu;
label_208e4c:
    // 0x208e4c: 0x0  nop
    ctx->pc = 0x208e4cu;
    // NOP
label_208e50:
    // 0x208e50: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x208e50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_208e54:
    // 0x208e54: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x208e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_208e58:
    // 0x208e58: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x208e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_208e5c:
    // 0x208e5c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x208e5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_208e60:
    // 0x208e60: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x208e60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_208e64:
    // 0x208e64: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x208e64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_208e68:
    // 0x208e68: 0x29e102a  slt         $v0, $s4, $fp
    ctx->pc = 0x208e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_208e6c:
    // 0x208e6c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_208e70:
    if (ctx->pc == 0x208E70u) {
        ctx->pc = 0x208E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E6Cu;
        // 0x208e70: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E74u;
        goto label_208e74;
    }
    ctx->pc = 0x208E6Cu;
    {
        const bool branch_taken_0x208e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E6Cu;
        // 0x208e70: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e6c) {
            ctx->pc = 0x208E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208e28;
        }
    }
    ctx->pc = 0x208E74u;
label_208e74:
    // 0x208e74: 0x32c20010  andi        $v0, $s6, 0x10
    ctx->pc = 0x208e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
label_208e78:
    // 0x208e78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_208e7c:
    if (ctx->pc == 0x208E7Cu) {
        ctx->pc = 0x208E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E78u;
        // 0x208e7c: 0x2feb82f  dsubu       $s7, $s7, $fp (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) - GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E80u;
        goto label_208e80;
    }
    ctx->pc = 0x208E78u;
    {
        const bool branch_taken_0x208e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E78u;
        // 0x208e7c: 0x2feb82f  dsubu       $s7, $s7, $fp (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) - GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e78) {
            ctx->pc = 0x208E90u;
            goto label_208e90;
        }
    }
    ctx->pc = 0x208E80u;
label_208e80:
    // 0x208e80: 0x26d6fff0  addiu       $s6, $s6, -0x10
    ctx->pc = 0x208e80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967280));
label_208e84:
    // 0x208e84: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x208e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_208e88:
    // 0x208e88: 0x10000003  b           . + 4 + (0x3 << 2)
label_208e8c:
    if (ctx->pc == 0x208E8Cu) {
        ctx->pc = 0x208E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E88u;
        // 0x208e8c: 0x244200c4  addiu       $v0, $v0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E90u;
        goto label_208e90;
    }
    ctx->pc = 0x208E88u;
    {
        const bool branch_taken_0x208e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E88u;
        // 0x208e8c: 0x244200c4  addiu       $v0, $v0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e88) {
            ctx->pc = 0x208E98u;
            goto label_208e98;
        }
    }
    ctx->pc = 0x208E90u;
label_208e90:
    // 0x208e90: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x208e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_208e94:
    // 0x208e94: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x208e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_208e98:
    // 0x208e98: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x208e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_208e9c:
    // 0x208e9c: 0x2ec20004  sltiu       $v0, $s6, 0x4
    ctx->pc = 0x208e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_208ea0:
    // 0x208ea0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_208ea4:
    if (ctx->pc == 0x208EA4u) {
        ctx->pc = 0x208EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EA0u;
        // 0x208ea4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208EA8u;
        goto label_208ea8;
    }
    ctx->pc = 0x208EA0u;
    {
        const bool branch_taken_0x208ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208ea0) {
            ctx->pc = 0x208EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208EA0u;
            // 0x208ea4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208ED0u;
            goto label_208ed0;
        }
    }
    ctx->pc = 0x208EA8u;
label_208ea8:
    // 0x208ea8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x208ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208eac:
    // 0x208eac: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x208eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_208eb0:
    // 0x208eb0: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x208eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_208eb4:
    // 0x208eb4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x208eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208eb8:
    // 0x208eb8: 0xac560018  sw          $s6, 0x18($v0)
    ctx->pc = 0x208eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 22));
label_208ebc:
    // 0x208ebc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x208ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208ec0:
    // 0x208ec0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x208ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208ec4:
    // 0x208ec4: 0x40f809  jalr        $v0
label_208ec8:
    if (ctx->pc == 0x208EC8u) {
        ctx->pc = 0x208EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EC4u;
        // 0x208ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208ECCu;
        goto label_208ecc;
    }
    ctx->pc = 0x208EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208ECCu);
        ctx->pc = 0x208EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EC4u;
        // 0x208ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208EC4u, 0x208ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208ECCu;
label_208ecc:
    // 0x208ecc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x208eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_208ed0:
    // 0x208ed0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_208ed4:
    if (ctx->pc == 0x208ED4u) {
        ctx->pc = 0x208ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208ED0u;
        // 0x208ed4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208ED8u;
        goto label_208ed8;
    }
    ctx->pc = 0x208ED0u;
    {
        const bool branch_taken_0x208ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208ed0) {
            ctx->pc = 0x208ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208ED0u;
            // 0x208ed4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208EE8u;
            goto label_208ee8;
        }
    }
    ctx->pc = 0x208ED8u;
label_208ed8:
    // 0x208ed8: 0xc08700e  jal         func_21C038
label_208edc:
    if (ctx->pc == 0x208EDCu) {
        ctx->pc = 0x208EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208ED8u;
        // 0x208edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208EE0u;
        goto label_208ee0;
    }
    ctx->pc = 0x208ED8u;
    SET_GPR_U32(ctx, 31, 0x208EE0u);
    ctx->pc = 0x208EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208ED8u;
    // 0x208edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21C038u, 0x208ED8u, 0x208EE0u)) {
        return;
    }
    ctx->pc = 0x208EE0u;
label_208ee0:
    // 0x208ee0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x208ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_208ee4:
    // 0x208ee4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x208ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_208ee8:
    // 0x208ee8: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x208ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_208eec:
    // 0x208eec: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x208eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_208ef0:
    // 0x208ef0: 0x6ba8000f  ldl         $t0, 0xF($sp)
    ctx->pc = 0x208ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_208ef4:
    // 0x208ef4: 0x6fa80008  ldr         $t0, 0x8($sp)
    ctx->pc = 0x208ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_208ef8:
    // 0x208ef8: 0x83a90010  lb          $t1, 0x10($sp)
    ctx->pc = 0x208ef8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_208efc:
    // 0x208efc: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x208efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_208f00:
    // 0x208f00: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x208f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_208f04:
    // 0x208f04: 0xb048000f  sdl         $t0, 0xF($v0)
    ctx->pc = 0x208f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_208f08:
    // 0x208f08: 0xb4480008  sdr         $t0, 0x8($v0)
    ctx->pc = 0x208f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_208f0c:
    // 0x208f0c: 0xa0490010  sb          $t1, 0x10($v0)
    ctx->pc = 0x208f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 9));
label_208f10:
    // 0x208f10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x208f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_208f14:
    // 0x208f14: 0x24630011  addiu       $v1, $v1, 0x11
    ctx->pc = 0x208f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17));
label_208f18:
    // 0x208f18: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x208f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_208f1c:
    // 0x208f1c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_208f20:
    if (ctx->pc == 0x208F20u) {
        ctx->pc = 0x208F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F1Cu;
        // 0x208f20: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F24u;
        goto label_208f24;
    }
    ctx->pc = 0x208F1Cu;
    {
        const bool branch_taken_0x208f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F1Cu;
        // 0x208f20: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f1c) {
            ctx->pc = 0x208F80u;
            goto label_208f80;
        }
    }
    ctx->pc = 0x208F24u;
label_208f24:
    // 0x208f24: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x208f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_208f28:
    // 0x208f28: 0x2ae50011  slti        $a1, $s7, 0x11
    ctx->pc = 0x208f28u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)17) ? 1 : 0);
label_208f2c:
    // 0x208f2c: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x208f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_208f30:
    // 0x208f30: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x208f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_208f34:
    // 0x208f34: 0x6887000f  ldl         $a3, 0xF($a0)
    ctx->pc = 0x208f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_208f38:
    // 0x208f38: 0x6c870008  ldr         $a3, 0x8($a0)
    ctx->pc = 0x208f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_208f3c:
    // 0x208f3c: 0x68880017  ldl         $t0, 0x17($a0)
    ctx->pc = 0x208f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_208f40:
    // 0x208f40: 0x6c880010  ldr         $t0, 0x10($a0)
    ctx->pc = 0x208f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_208f44:
    // 0x208f44: 0x6889001f  ldl         $t1, 0x1F($a0)
    ctx->pc = 0x208f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_208f48:
    // 0x208f48: 0x6c890018  ldr         $t1, 0x18($a0)
    ctx->pc = 0x208f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_208f4c:
    // 0x208f4c: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x208f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_208f50:
    // 0x208f50: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x208f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_208f54:
    // 0x208f54: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x208f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_208f58:
    // 0x208f58: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x208f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_208f5c:
    // 0x208f5c: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x208f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_208f60:
    // 0x208f60: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x208f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_208f64:
    // 0x208f64: 0xb069001f  sdl         $t1, 0x1F($v1)
    ctx->pc = 0x208f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_208f68:
    // 0x208f68: 0xb4690018  sdr         $t1, 0x18($v1)
    ctx->pc = 0x208f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_208f6c:
    // 0x208f6c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x208f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_208f70:
    // 0x208f70: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
label_208f74:
    if (ctx->pc == 0x208F74u) {
        ctx->pc = 0x208F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F70u;
        // 0x208f74: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F78u;
        goto label_208f78;
    }
    ctx->pc = 0x208F70u;
    {
        const bool branch_taken_0x208f70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x208F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F70u;
        // 0x208f74: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f70) {
            ctx->pc = 0x208F2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208f2c;
        }
    }
    ctx->pc = 0x208F78u;
label_208f78:
    // 0x208f78: 0x1000000e  b           . + 4 + (0xE << 2)
label_208f7c:
    if (ctx->pc == 0x208F7Cu) {
        ctx->pc = 0x208F80u;
        goto label_208f80;
    }
    ctx->pc = 0x208F78u;
    {
        const bool branch_taken_0x208f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208f78) {
            ctx->pc = 0x208FB4u;
            goto label_208fb4;
        }
    }
    ctx->pc = 0x208F80u;
label_208f80:
    // 0x208f80: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x208f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_208f84:
    // 0x208f84: 0x2ae50011  slti        $a1, $s7, 0x11
    ctx->pc = 0x208f84u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)17) ? 1 : 0);
label_208f88:
    // 0x208f88: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x208f88u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_208f8c:
    // 0x208f8c: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x208f8cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_208f90:
    // 0x208f90: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x208f90u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_208f94:
    // 0x208f94: 0xdc890018  ld          $t1, 0x18($a0)
    ctx->pc = 0x208f94u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_208f98:
    // 0x208f98: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x208f98u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
label_208f9c:
    // 0x208f9c: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x208f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
label_208fa0:
    // 0x208fa0: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x208fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
label_208fa4:
    // 0x208fa4: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x208fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
label_208fa8:
    // 0x208fa8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x208fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_208fac:
    // 0x208fac: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
label_208fb0:
    if (ctx->pc == 0x208FB0u) {
        ctx->pc = 0x208FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FACu;
        // 0x208fb0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FB4u;
        goto label_208fb4;
    }
    ctx->pc = 0x208FACu;
    {
        const bool branch_taken_0x208fac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x208FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FACu;
        // 0x208fb0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fac) {
            ctx->pc = 0x208F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208f88;
        }
    }
    ctx->pc = 0x208FB4u;
label_208fb4:
    // 0x208fb4: 0x10a0ff2a  beqz        $a1, . + 4 + (-0xD6 << 2)
label_208fb8:
    if (ctx->pc == 0x208FB8u) {
        ctx->pc = 0x208FBCu;
        goto label_208fbc;
    }
    ctx->pc = 0x208FB4u;
    {
        const bool branch_taken_0x208fb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x208fb4) {
            ctx->pc = 0x208C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208c60;
        }
    }
    ctx->pc = 0x208FBCu;
label_208fbc:
    // 0x208fbc: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_208fc0:
    if (ctx->pc == 0x208FC0u) {
        ctx->pc = 0x208FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FBCu;
        // 0x208fc0: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FC4u;
        goto label_208fc4;
    }
    ctx->pc = 0x208FBCu;
    {
        const bool branch_taken_0x208fbc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FBCu;
        // 0x208fc0: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fbc) {
            ctx->pc = 0x208FDCu;
            goto label_208fdc;
        }
    }
    ctx->pc = 0x208FC4u;
label_208fc4:
    // 0x208fc4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x208fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208fc8:
    // 0x208fc8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x208fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_208fcc:
    // 0x208fcc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x208fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208fd0:
    // 0x208fd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x208fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208fd4:
    // 0x208fd4: 0x60f809  jalr        $v1
label_208fd8:
    if (ctx->pc == 0x208FD8u) {
        ctx->pc = 0x208FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FD4u;
        // 0x208fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FDCu;
        goto label_208fdc;
    }
    ctx->pc = 0x208FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208FDCu);
        ctx->pc = 0x208FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FD4u;
        // 0x208fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208FD4u, 0x208FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208FDCu;
label_208fdc:
    // 0x208fdc: 0xaeb20004  sw          $s2, 0x4($s5)
    ctx->pc = 0x208fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
label_208fe0:
    // 0x208fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208fe4:
    // 0x208fe4: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x208fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
label_208fe8:
    // 0x208fe8: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x208fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_208fec:
    // 0x208fec: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x208fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_208ff0:
    // 0x208ff0: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x208ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_208ff4:
    // 0x208ff4: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x208ff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_208ff8:
    // 0x208ff8: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x208ff8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_208ffc:
    // 0x208ffc: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x208ffcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_209000:
    // 0x209000: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x209000u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_209004:
    // 0x209004: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x209004u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_209008:
    // 0x209008: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x209008u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_20900c:
    // 0x20900c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x20900cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_209010:
    // 0x209010: 0x3e00008  jr          $ra
label_209014:
    if (ctx->pc == 0x209014u) {
        ctx->pc = 0x209014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209010u;
        // 0x209014: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209018u;
        goto label_fallthrough_0x209010;
    }
    ctx->pc = 0x209010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209010u;
        // 0x209014: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x209010:
    ctx->pc = 0x209018u;
}
