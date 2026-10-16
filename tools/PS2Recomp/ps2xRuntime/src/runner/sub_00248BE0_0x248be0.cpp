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

// Function: sub_00248BE0
// Address: 0x248be0 - 0x249008
void sub_00248BE0_0x248be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248BE0_0x248be0");
#endif

    switch (ctx->pc) {
        case 0x248be0u: goto label_248be0;
        case 0x248be4u: goto label_248be4;
        case 0x248be8u: goto label_248be8;
        case 0x248becu: goto label_248bec;
        case 0x248bf0u: goto label_248bf0;
        case 0x248bf4u: goto label_248bf4;
        case 0x248bf8u: goto label_248bf8;
        case 0x248bfcu: goto label_248bfc;
        case 0x248c00u: goto label_248c00;
        case 0x248c04u: goto label_248c04;
        case 0x248c08u: goto label_248c08;
        case 0x248c0cu: goto label_248c0c;
        case 0x248c10u: goto label_248c10;
        case 0x248c14u: goto label_248c14;
        case 0x248c18u: goto label_248c18;
        case 0x248c1cu: goto label_248c1c;
        case 0x248c20u: goto label_248c20;
        case 0x248c24u: goto label_248c24;
        case 0x248c28u: goto label_248c28;
        case 0x248c2cu: goto label_248c2c;
        case 0x248c30u: goto label_248c30;
        case 0x248c34u: goto label_248c34;
        case 0x248c38u: goto label_248c38;
        case 0x248c3cu: goto label_248c3c;
        case 0x248c40u: goto label_248c40;
        case 0x248c44u: goto label_248c44;
        case 0x248c48u: goto label_248c48;
        case 0x248c4cu: goto label_248c4c;
        case 0x248c50u: goto label_248c50;
        case 0x248c54u: goto label_248c54;
        case 0x248c58u: goto label_248c58;
        case 0x248c5cu: goto label_248c5c;
        case 0x248c60u: goto label_248c60;
        case 0x248c64u: goto label_248c64;
        case 0x248c68u: goto label_248c68;
        case 0x248c6cu: goto label_248c6c;
        case 0x248c70u: goto label_248c70;
        case 0x248c74u: goto label_248c74;
        case 0x248c78u: goto label_248c78;
        case 0x248c7cu: goto label_248c7c;
        case 0x248c80u: goto label_248c80;
        case 0x248c84u: goto label_248c84;
        case 0x248c88u: goto label_248c88;
        case 0x248c8cu: goto label_248c8c;
        case 0x248c90u: goto label_248c90;
        case 0x248c94u: goto label_248c94;
        case 0x248c98u: goto label_248c98;
        case 0x248c9cu: goto label_248c9c;
        case 0x248ca0u: goto label_248ca0;
        case 0x248ca4u: goto label_248ca4;
        case 0x248ca8u: goto label_248ca8;
        case 0x248cacu: goto label_248cac;
        case 0x248cb0u: goto label_248cb0;
        case 0x248cb4u: goto label_248cb4;
        case 0x248cb8u: goto label_248cb8;
        case 0x248cbcu: goto label_248cbc;
        case 0x248cc0u: goto label_248cc0;
        case 0x248cc4u: goto label_248cc4;
        case 0x248cc8u: goto label_248cc8;
        case 0x248cccu: goto label_248ccc;
        case 0x248cd0u: goto label_248cd0;
        case 0x248cd4u: goto label_248cd4;
        case 0x248cd8u: goto label_248cd8;
        case 0x248cdcu: goto label_248cdc;
        case 0x248ce0u: goto label_248ce0;
        case 0x248ce4u: goto label_248ce4;
        case 0x248ce8u: goto label_248ce8;
        case 0x248cecu: goto label_248cec;
        case 0x248cf0u: goto label_248cf0;
        case 0x248cf4u: goto label_248cf4;
        case 0x248cf8u: goto label_248cf8;
        case 0x248cfcu: goto label_248cfc;
        case 0x248d00u: goto label_248d00;
        case 0x248d04u: goto label_248d04;
        case 0x248d08u: goto label_248d08;
        case 0x248d0cu: goto label_248d0c;
        case 0x248d10u: goto label_248d10;
        case 0x248d14u: goto label_248d14;
        case 0x248d18u: goto label_248d18;
        case 0x248d1cu: goto label_248d1c;
        case 0x248d20u: goto label_248d20;
        case 0x248d24u: goto label_248d24;
        case 0x248d28u: goto label_248d28;
        case 0x248d2cu: goto label_248d2c;
        case 0x248d30u: goto label_248d30;
        case 0x248d34u: goto label_248d34;
        case 0x248d38u: goto label_248d38;
        case 0x248d3cu: goto label_248d3c;
        case 0x248d40u: goto label_248d40;
        case 0x248d44u: goto label_248d44;
        case 0x248d48u: goto label_248d48;
        case 0x248d4cu: goto label_248d4c;
        case 0x248d50u: goto label_248d50;
        case 0x248d54u: goto label_248d54;
        case 0x248d58u: goto label_248d58;
        case 0x248d5cu: goto label_248d5c;
        case 0x248d60u: goto label_248d60;
        case 0x248d64u: goto label_248d64;
        case 0x248d68u: goto label_248d68;
        case 0x248d6cu: goto label_248d6c;
        case 0x248d70u: goto label_248d70;
        case 0x248d74u: goto label_248d74;
        case 0x248d78u: goto label_248d78;
        case 0x248d7cu: goto label_248d7c;
        case 0x248d80u: goto label_248d80;
        case 0x248d84u: goto label_248d84;
        case 0x248d88u: goto label_248d88;
        case 0x248d8cu: goto label_248d8c;
        case 0x248d90u: goto label_248d90;
        case 0x248d94u: goto label_248d94;
        case 0x248d98u: goto label_248d98;
        case 0x248d9cu: goto label_248d9c;
        case 0x248da0u: goto label_248da0;
        case 0x248da4u: goto label_248da4;
        case 0x248da8u: goto label_248da8;
        case 0x248dacu: goto label_248dac;
        case 0x248db0u: goto label_248db0;
        case 0x248db4u: goto label_248db4;
        case 0x248db8u: goto label_248db8;
        case 0x248dbcu: goto label_248dbc;
        case 0x248dc0u: goto label_248dc0;
        case 0x248dc4u: goto label_248dc4;
        case 0x248dc8u: goto label_248dc8;
        case 0x248dccu: goto label_248dcc;
        case 0x248dd0u: goto label_248dd0;
        case 0x248dd4u: goto label_248dd4;
        case 0x248dd8u: goto label_248dd8;
        case 0x248ddcu: goto label_248ddc;
        case 0x248de0u: goto label_248de0;
        case 0x248de4u: goto label_248de4;
        case 0x248de8u: goto label_248de8;
        case 0x248decu: goto label_248dec;
        case 0x248df0u: goto label_248df0;
        case 0x248df4u: goto label_248df4;
        case 0x248df8u: goto label_248df8;
        case 0x248dfcu: goto label_248dfc;
        case 0x248e00u: goto label_248e00;
        case 0x248e04u: goto label_248e04;
        case 0x248e08u: goto label_248e08;
        case 0x248e0cu: goto label_248e0c;
        case 0x248e10u: goto label_248e10;
        case 0x248e14u: goto label_248e14;
        case 0x248e18u: goto label_248e18;
        case 0x248e1cu: goto label_248e1c;
        case 0x248e20u: goto label_248e20;
        case 0x248e24u: goto label_248e24;
        case 0x248e28u: goto label_248e28;
        case 0x248e2cu: goto label_248e2c;
        case 0x248e30u: goto label_248e30;
        case 0x248e34u: goto label_248e34;
        case 0x248e38u: goto label_248e38;
        case 0x248e3cu: goto label_248e3c;
        case 0x248e40u: goto label_248e40;
        case 0x248e44u: goto label_248e44;
        case 0x248e48u: goto label_248e48;
        case 0x248e4cu: goto label_248e4c;
        case 0x248e50u: goto label_248e50;
        case 0x248e54u: goto label_248e54;
        case 0x248e58u: goto label_248e58;
        case 0x248e5cu: goto label_248e5c;
        case 0x248e60u: goto label_248e60;
        case 0x248e64u: goto label_248e64;
        case 0x248e68u: goto label_248e68;
        case 0x248e6cu: goto label_248e6c;
        case 0x248e70u: goto label_248e70;
        case 0x248e74u: goto label_248e74;
        case 0x248e78u: goto label_248e78;
        case 0x248e7cu: goto label_248e7c;
        case 0x248e80u: goto label_248e80;
        case 0x248e84u: goto label_248e84;
        case 0x248e88u: goto label_248e88;
        case 0x248e8cu: goto label_248e8c;
        case 0x248e90u: goto label_248e90;
        case 0x248e94u: goto label_248e94;
        case 0x248e98u: goto label_248e98;
        case 0x248e9cu: goto label_248e9c;
        case 0x248ea0u: goto label_248ea0;
        case 0x248ea4u: goto label_248ea4;
        case 0x248ea8u: goto label_248ea8;
        case 0x248eacu: goto label_248eac;
        case 0x248eb0u: goto label_248eb0;
        case 0x248eb4u: goto label_248eb4;
        case 0x248eb8u: goto label_248eb8;
        case 0x248ebcu: goto label_248ebc;
        case 0x248ec0u: goto label_248ec0;
        case 0x248ec4u: goto label_248ec4;
        case 0x248ec8u: goto label_248ec8;
        case 0x248eccu: goto label_248ecc;
        case 0x248ed0u: goto label_248ed0;
        case 0x248ed4u: goto label_248ed4;
        case 0x248ed8u: goto label_248ed8;
        case 0x248edcu: goto label_248edc;
        case 0x248ee0u: goto label_248ee0;
        case 0x248ee4u: goto label_248ee4;
        case 0x248ee8u: goto label_248ee8;
        case 0x248eecu: goto label_248eec;
        case 0x248ef0u: goto label_248ef0;
        case 0x248ef4u: goto label_248ef4;
        case 0x248ef8u: goto label_248ef8;
        case 0x248efcu: goto label_248efc;
        case 0x248f00u: goto label_248f00;
        case 0x248f04u: goto label_248f04;
        case 0x248f08u: goto label_248f08;
        case 0x248f0cu: goto label_248f0c;
        case 0x248f10u: goto label_248f10;
        case 0x248f14u: goto label_248f14;
        case 0x248f18u: goto label_248f18;
        case 0x248f1cu: goto label_248f1c;
        case 0x248f20u: goto label_248f20;
        case 0x248f24u: goto label_248f24;
        case 0x248f28u: goto label_248f28;
        case 0x248f2cu: goto label_248f2c;
        case 0x248f30u: goto label_248f30;
        case 0x248f34u: goto label_248f34;
        case 0x248f38u: goto label_248f38;
        case 0x248f3cu: goto label_248f3c;
        case 0x248f40u: goto label_248f40;
        case 0x248f44u: goto label_248f44;
        case 0x248f48u: goto label_248f48;
        case 0x248f4cu: goto label_248f4c;
        case 0x248f50u: goto label_248f50;
        case 0x248f54u: goto label_248f54;
        case 0x248f58u: goto label_248f58;
        case 0x248f5cu: goto label_248f5c;
        case 0x248f60u: goto label_248f60;
        case 0x248f64u: goto label_248f64;
        case 0x248f68u: goto label_248f68;
        case 0x248f6cu: goto label_248f6c;
        case 0x248f70u: goto label_248f70;
        case 0x248f74u: goto label_248f74;
        case 0x248f78u: goto label_248f78;
        case 0x248f7cu: goto label_248f7c;
        case 0x248f80u: goto label_248f80;
        case 0x248f84u: goto label_248f84;
        case 0x248f88u: goto label_248f88;
        case 0x248f8cu: goto label_248f8c;
        case 0x248f90u: goto label_248f90;
        case 0x248f94u: goto label_248f94;
        case 0x248f98u: goto label_248f98;
        case 0x248f9cu: goto label_248f9c;
        case 0x248fa0u: goto label_248fa0;
        case 0x248fa4u: goto label_248fa4;
        case 0x248fa8u: goto label_248fa8;
        case 0x248facu: goto label_248fac;
        case 0x248fb0u: goto label_248fb0;
        case 0x248fb4u: goto label_248fb4;
        case 0x248fb8u: goto label_248fb8;
        case 0x248fbcu: goto label_248fbc;
        case 0x248fc0u: goto label_248fc0;
        case 0x248fc4u: goto label_248fc4;
        case 0x248fc8u: goto label_248fc8;
        case 0x248fccu: goto label_248fcc;
        case 0x248fd0u: goto label_248fd0;
        case 0x248fd4u: goto label_248fd4;
        case 0x248fd8u: goto label_248fd8;
        case 0x248fdcu: goto label_248fdc;
        case 0x248fe0u: goto label_248fe0;
        case 0x248fe4u: goto label_248fe4;
        case 0x248fe8u: goto label_248fe8;
        case 0x248fecu: goto label_248fec;
        case 0x248ff0u: goto label_248ff0;
        case 0x248ff4u: goto label_248ff4;
        case 0x248ff8u: goto label_248ff8;
        case 0x248ffcu: goto label_248ffc;
        case 0x249000u: goto label_249000;
        case 0x249004u: goto label_249004;
        default: break;
    }

    ctx->pc = 0x248be0u;

label_248be0:
    // 0x248be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_248be4:
    // 0x248be4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x248be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_248be8:
    // 0x248be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x248be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_248bec:
    // 0x248bec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x248becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_248bf0:
    // 0x248bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_248bf4:
    // 0x248bf4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x248bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_248bf8:
    // 0x248bf8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_248bfc:
    if (ctx->pc == 0x248BFCu) {
        ctx->pc = 0x248BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BF8u;
        // 0x248bfc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248C00u;
        goto label_248c00;
    }
    ctx->pc = 0x248BF8u;
    {
        const bool branch_taken_0x248bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BF8u;
        // 0x248bfc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248bf8) {
            ctx->pc = 0x248CA4u;
            goto label_248ca4;
        }
    }
    ctx->pc = 0x248C00u;
label_248c00:
    // 0x248c00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x248c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_248c04:
    // 0x248c04: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x248c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_248c08:
    // 0x248c08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_248c0c:
    if (ctx->pc == 0x248C0Cu) {
        ctx->pc = 0x248C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C08u;
        // 0x248c0c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248C10u;
        goto label_248c10;
    }
    ctx->pc = 0x248C08u;
    {
        const bool branch_taken_0x248c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248c08) {
            ctx->pc = 0x248C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248C08u;
            // 0x248c0c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248C1Cu;
            goto label_248c1c;
        }
    }
    ctx->pc = 0x248C10u;
label_248c10:
    // 0x248c10: 0x40f809  jalr        $v0
label_248c14:
    if (ctx->pc == 0x248C14u) {
        ctx->pc = 0x248C18u;
        goto label_248c18;
    }
    ctx->pc = 0x248C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248C18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248C10u, 0x248C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248C18u;
label_248c18:
    // 0x248c18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x248c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_248c1c:
    // 0x248c1c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x248c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_248c20:
    // 0x248c20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x248c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_248c24:
    // 0x248c24: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x248c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_248c28:
    // 0x248c28: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x248c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_248c2c:
    // 0x248c2c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x248c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_248c30:
    // 0x248c30: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_248c34:
    if (ctx->pc == 0x248C34u) {
        ctx->pc = 0x248C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C30u;
        // 0x248c34: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248C38u;
        goto label_248c38;
    }
    ctx->pc = 0x248C30u;
    {
        const bool branch_taken_0x248c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248c30) {
            ctx->pc = 0x248C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248C30u;
            // 0x248c34: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248C70u;
            goto label_248c70;
        }
    }
    ctx->pc = 0x248C38u;
label_248c38:
    // 0x248c38: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x248c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_248c3c:
    // 0x248c3c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_248c40:
    if (ctx->pc == 0x248C40u) {
        ctx->pc = 0x248C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C3Cu;
        // 0x248c40: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248C44u;
        goto label_248c44;
    }
    ctx->pc = 0x248C3Cu;
    {
        const bool branch_taken_0x248c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248c3c) {
            ctx->pc = 0x248C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248C3Cu;
            // 0x248c40: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248C54u;
            goto label_248c54;
        }
    }
    ctx->pc = 0x248C44u;
label_248c44:
    // 0x248c44: 0x40f809  jalr        $v0
label_248c48:
    if (ctx->pc == 0x248C48u) {
        ctx->pc = 0x248C4Cu;
        goto label_248c4c;
    }
    ctx->pc = 0x248C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248C4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248C44u, 0x248C4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248C4Cu;
label_248c4c:
    // 0x248c4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x248c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_248c50:
    // 0x248c50: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x248c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_248c54:
    // 0x248c54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_248c58:
    if (ctx->pc == 0x248C58u) {
        ctx->pc = 0x248C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C54u;
        // 0x248c58: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248C5Cu;
        goto label_248c5c;
    }
    ctx->pc = 0x248C54u;
    {
        const bool branch_taken_0x248c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C54u;
        // 0x248c58: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c54) {
            ctx->pc = 0x248C6Cu;
            goto label_248c6c;
        }
    }
    ctx->pc = 0x248C5Cu;
label_248c5c:
    // 0x248c5c: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x248c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_248c60:
    // 0x248c60: 0x40f809  jalr        $v0
label_248c64:
    if (ctx->pc == 0x248C64u) {
        ctx->pc = 0x248C68u;
        goto label_248c68;
    }
    ctx->pc = 0x248C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248C68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248C60u, 0x248C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248C68u;
label_248c68:
    // 0x248c68: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x248c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_248c6c:
    // 0x248c6c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x248c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_248c70:
    // 0x248c70: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_248c74:
    if (ctx->pc == 0x248C74u) {
        ctx->pc = 0x248C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C70u;
        // 0x248c74: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248C78u;
        goto label_248c78;
    }
    ctx->pc = 0x248C70u;
    {
        const bool branch_taken_0x248c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C70u;
        // 0x248c74: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c70) {
            ctx->pc = 0x248C8Cu;
            goto label_248c8c;
        }
    }
    ctx->pc = 0x248C78u;
label_248c78:
    // 0x248c78: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x248c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_248c7c:
    // 0x248c7c: 0x40f809  jalr        $v0
label_248c80:
    if (ctx->pc == 0x248C80u) {
        ctx->pc = 0x248C84u;
        goto label_248c84;
    }
    ctx->pc = 0x248C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248C84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248C7Cu, 0x248C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248C84u;
label_248c84:
    // 0x248c84: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x248c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_248c88:
    // 0x248c88: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x248c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_248c8c:
    // 0x248c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_248c90:
    // 0x248c90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248c94:
    // 0x248c94: 0xc0c493d  jal         func_3124F4
label_248c98:
    if (ctx->pc == 0x248C98u) {
        ctx->pc = 0x248C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C94u;
        // 0x248c98: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248C9Cu;
        goto label_248c9c;
    }
    ctx->pc = 0x248C94u;
    SET_GPR_U32(ctx, 31, 0x248C9Cu);
    ctx->pc = 0x248C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248C94u;
    // 0x248c98: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x248C94u, 0x248C9Cu)) {
        return;
    }
    ctx->pc = 0x248C9Cu;
label_248c9c:
    // 0x248c9c: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_248ca0:
    if (ctx->pc == 0x248CA0u) {
        ctx->pc = 0x248CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C9Cu;
        // 0x248ca0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248CA4u;
        goto label_248ca4;
    }
    ctx->pc = 0x248C9Cu;
    {
        const bool branch_taken_0x248c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C9Cu;
        // 0x248ca0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c9c) {
            ctx->pc = 0x248FE4u;
            goto label_248fe4;
        }
    }
    ctx->pc = 0x248CA4u;
label_248ca4:
    // 0x248ca4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x248ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_248ca8:
    // 0x248ca8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_248cac:
    if (ctx->pc == 0x248CACu) {
        ctx->pc = 0x248CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CA8u;
        // 0x248cac: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248CB0u;
        goto label_248cb0;
    }
    ctx->pc = 0x248CA8u;
    {
        const bool branch_taken_0x248ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x248CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CA8u;
        // 0x248cac: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ca8) {
            ctx->pc = 0x248CC4u;
            goto label_248cc4;
        }
    }
    ctx->pc = 0x248CB0u;
label_248cb0:
    // 0x248cb0: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x248cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_248cb4:
    // 0x248cb4: 0x40f809  jalr        $v0
label_248cb8:
    if (ctx->pc == 0x248CB8u) {
        ctx->pc = 0x248CBCu;
        goto label_248cbc;
    }
    ctx->pc = 0x248CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248CBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248CB4u, 0x248CBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248CBCu;
label_248cbc:
    // 0x248cbc: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x248cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_248cc0:
    // 0x248cc0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x248cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_248cc4:
    // 0x248cc4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x248cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_248cc8:
    // 0x248cc8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x248cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_248ccc:
    // 0x248ccc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_248cd0:
    if (ctx->pc == 0x248CD0u) {
        ctx->pc = 0x248CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CCCu;
        // 0x248cd0: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248CD4u;
        goto label_248cd4;
    }
    ctx->pc = 0x248CCCu;
    {
        const bool branch_taken_0x248ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248ccc) {
            ctx->pc = 0x248CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248CCCu;
            // 0x248cd0: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248CF4u;
            goto label_248cf4;
        }
    }
    ctx->pc = 0x248CD4u;
label_248cd4:
    // 0x248cd4: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x248cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_248cd8:
    // 0x248cd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_248cdc:
    if (ctx->pc == 0x248CDCu) {
        ctx->pc = 0x248CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CD8u;
        // 0x248cdc: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248CE0u;
        goto label_248ce0;
    }
    ctx->pc = 0x248CD8u;
    {
        const bool branch_taken_0x248cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CD8u;
        // 0x248cdc: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248cd8) {
            ctx->pc = 0x248CF0u;
            goto label_248cf0;
        }
    }
    ctx->pc = 0x248CE0u;
label_248ce0:
    // 0x248ce0: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x248ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_248ce4:
    // 0x248ce4: 0x40f809  jalr        $v0
label_248ce8:
    if (ctx->pc == 0x248CE8u) {
        ctx->pc = 0x248CECu;
        goto label_248cec;
    }
    ctx->pc = 0x248CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248CECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248CE4u, 0x248CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248CECu;
label_248cec:
    // 0x248cec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x248cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_248cf0:
    // 0x248cf0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x248cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_248cf4:
    // 0x248cf4: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x248cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
label_248cf8:
    // 0x248cf8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x248cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_248cfc:
    // 0x248cfc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x248cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_248d00:
    // 0x248d00: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x248d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_248d04:
    // 0x248d04: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x248d04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_248d08:
    // 0x248d08: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x248d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_248d0c:
    // 0x248d0c: 0x248c3  sra         $t1, $v0, 3
    ctx->pc = 0x248d0cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 3));
label_248d10:
    // 0x248d10: 0x124202b  sltu        $a0, $t1, $a0
    ctx->pc = 0x248d10u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_248d14:
    // 0x248d14: 0x108000b2  beqz        $a0, . + 4 + (0xB2 << 2)
label_248d18:
    if (ctx->pc == 0x248D18u) {
        ctx->pc = 0x248D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D14u;
        // 0x248d18: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248D1Cu;
        goto label_248d1c;
    }
    ctx->pc = 0x248D14u;
    {
        const bool branch_taken_0x248d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D14u;
        // 0x248d18: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d14) {
            ctx->pc = 0x248FE0u;
            goto label_248fe0;
        }
    }
    ctx->pc = 0x248D1Cu;
label_248d1c:
    // 0x248d1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_248d20:
    // 0x248d20: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x248d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16784)));
label_248d24:
    // 0x248d24: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x248d24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248d28:
    // 0x248d28: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x248d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_248d2c:
    // 0x248d2c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x248d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_248d30:
    // 0x248d30: 0x921c0  sll         $a0, $t1, 7
    ctx->pc = 0x248d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
label_248d34:
    // 0x248d34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_248d38:
    // 0x248d38: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x248d38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_248d3c:
    // 0x248d3c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x248d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_248d40:
    // 0x248d40: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x248d40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_248d44:
    // 0x248d44: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x248d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_248d48:
    // 0x248d48: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x248d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_248d4c:
    // 0x248d4c: 0x24c40080  addiu       $a0, $a2, 0x80
    ctx->pc = 0x248d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_248d50:
    // 0x248d50: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x248d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_248d54:
    // 0x248d54: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x248d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_248d58:
    // 0x248d58: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_248d5c:
    if (ctx->pc == 0x248D5Cu) {
        ctx->pc = 0x248D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D58u;
        // 0x248d5c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248D60u;
        goto label_248d60;
    }
    ctx->pc = 0x248D58u;
    {
        const bool branch_taken_0x248d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D58u;
        // 0x248d5c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d58) {
            ctx->pc = 0x248DBCu;
            goto label_248dbc;
        }
    }
    ctx->pc = 0x248D60u;
label_248d60:
    // 0x248d60: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x248d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_248d64:
    // 0x248d64: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x248d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_248d68:
    // 0x248d68: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x248d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_248d6c:
    // 0x248d6c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x248d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_248d70:
    // 0x248d70: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x248d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_248d74:
    // 0x248d74: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x248d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_248d78:
    // 0x248d78: 0x686b0017  ldl         $t3, 0x17($v1)
    ctx->pc = 0x248d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_248d7c:
    // 0x248d7c: 0x6c6b0010  ldr         $t3, 0x10($v1)
    ctx->pc = 0x248d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_248d80:
    // 0x248d80: 0x686c001f  ldl         $t4, 0x1F($v1)
    ctx->pc = 0x248d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_248d84:
    // 0x248d84: 0x6c6c0018  ldr         $t4, 0x18($v1)
    ctx->pc = 0x248d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_248d88:
    // 0x248d88: 0xb0c50007  sdl         $a1, 0x7($a2)
    ctx->pc = 0x248d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_248d8c:
    // 0x248d8c: 0xb4c50000  sdr         $a1, 0x0($a2)
    ctx->pc = 0x248d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_248d90:
    // 0x248d90: 0xb0c7000f  sdl         $a3, 0xF($a2)
    ctx->pc = 0x248d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_248d94:
    // 0x248d94: 0xb4c70008  sdr         $a3, 0x8($a2)
    ctx->pc = 0x248d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_248d98:
    // 0x248d98: 0xb0cb0017  sdl         $t3, 0x17($a2)
    ctx->pc = 0x248d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_248d9c:
    // 0x248d9c: 0xb4cb0010  sdr         $t3, 0x10($a2)
    ctx->pc = 0x248d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_248da0:
    // 0x248da0: 0xb0cc001f  sdl         $t4, 0x1F($a2)
    ctx->pc = 0x248da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_248da4:
    // 0x248da4: 0xb4cc0018  sdr         $t4, 0x18($a2)
    ctx->pc = 0x248da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_248da8:
    // 0x248da8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x248da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_248dac:
    // 0x248dac: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
label_248db0:
    if (ctx->pc == 0x248DB0u) {
        ctx->pc = 0x248DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DACu;
        // 0x248db0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248DB4u;
        goto label_248db4;
    }
    ctx->pc = 0x248DACu;
    {
        const bool branch_taken_0x248dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x248DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DACu;
        // 0x248db0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248dac) {
            ctx->pc = 0x248D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248d68;
        }
    }
    ctx->pc = 0x248DB4u;
label_248db4:
    // 0x248db4: 0x1000000f  b           . + 4 + (0xF << 2)
label_248db8:
    if (ctx->pc == 0x248DB8u) {
        ctx->pc = 0x248DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DB4u;
        // 0x248db8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248DBCu;
        goto label_248dbc;
    }
    ctx->pc = 0x248DB4u;
    {
        const bool branch_taken_0x248db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DB4u;
        // 0x248db8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248db4) {
            ctx->pc = 0x248DF4u;
            goto label_248df4;
        }
    }
    ctx->pc = 0x248DBCu;
label_248dbc:
    // 0x248dbc: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x248dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_248dc0:
    // 0x248dc0: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x248dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_248dc4:
    // 0x248dc4: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x248dc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_248dc8:
    // 0x248dc8: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x248dc8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_248dcc:
    // 0x248dcc: 0xdc6b0010  ld          $t3, 0x10($v1)
    ctx->pc = 0x248dccu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_248dd0:
    // 0x248dd0: 0xdc6c0018  ld          $t4, 0x18($v1)
    ctx->pc = 0x248dd0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_248dd4:
    // 0x248dd4: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x248dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
label_248dd8:
    // 0x248dd8: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x248dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
label_248ddc:
    // 0x248ddc: 0xfccb0010  sd          $t3, 0x10($a2)
    ctx->pc = 0x248ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 11));
label_248de0:
    // 0x248de0: 0xfccc0018  sd          $t4, 0x18($a2)
    ctx->pc = 0x248de0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 12));
label_248de4:
    // 0x248de4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x248de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_248de8:
    // 0x248de8: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
label_248dec:
    if (ctx->pc == 0x248DECu) {
        ctx->pc = 0x248DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DE8u;
        // 0x248dec: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248DF0u;
        goto label_248df0;
    }
    ctx->pc = 0x248DE8u;
    {
        const bool branch_taken_0x248de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x248DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DE8u;
        // 0x248dec: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248de8) {
            ctx->pc = 0x248DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248dc4;
        }
    }
    ctx->pc = 0x248DF0u;
label_248df0:
    // 0x248df0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x248df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_248df4:
    // 0x248df4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x248df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248df8:
    // 0x248df8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x248df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_248dfc:
    // 0x248dfc: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x248dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_248e00:
    // 0x248e00: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x248e00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_248e04:
    // 0x248e04: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_248e08:
    if (ctx->pc == 0x248E08u) {
        ctx->pc = 0x248E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E04u;
        // 0x248e08: 0x24c40080  addiu       $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248E0Cu;
        goto label_248e0c;
    }
    ctx->pc = 0x248E04u;
    {
        const bool branch_taken_0x248e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E04u;
        // 0x248e08: 0x24c40080  addiu       $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e04) {
            ctx->pc = 0x248D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248d50;
        }
    }
    ctx->pc = 0x248E0Cu;
label_248e0c:
    // 0x248e0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_248e10:
    // 0x248e10: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x248e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16784)));
label_248e14:
    // 0x248e14: 0x25420fc8  addiu       $v0, $t2, 0xFC8
    ctx->pc = 0x248e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4040));
label_248e18:
    // 0x248e18: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x248e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_248e1c:
    // 0x248e1c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x248e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_248e20:
    // 0x248e20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_248e24:
    // 0x248e24: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x248e24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_248e28:
    // 0x248e28: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x248e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_248e2c:
    // 0x248e2c: 0xe5282b  sltu        $a1, $a3, $a1
    ctx->pc = 0x248e2cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_248e30:
    // 0x248e30: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x248e30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_248e34:
    // 0x248e34: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x248e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_248e38:
    // 0x248e38: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x248e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_248e3c:
    // 0x248e3c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x248e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_248e40:
    // 0x248e40: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_248e44:
    if (ctx->pc == 0x248E44u) {
        ctx->pc = 0x248E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E40u;
        // 0x248e44: 0x24c4000c  addiu       $a0, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248E48u;
        goto label_248e48;
    }
    ctx->pc = 0x248E40u;
    {
        const bool branch_taken_0x248e40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E40u;
        // 0x248e44: 0x24c4000c  addiu       $a0, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e40) {
            ctx->pc = 0x248E7Cu;
            goto label_248e7c;
        }
    }
    ctx->pc = 0x248E48u;
label_248e48:
    // 0x248e48: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x248e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_248e4c:
    // 0x248e4c: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x248e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_248e50:
    // 0x248e50: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x248e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_248e54:
    // 0x248e54: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x248e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_248e58:
    // 0x248e58: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x248e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_248e5c:
    // 0x248e5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x248e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_248e60:
    // 0x248e60: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x248e60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_248e64:
    // 0x248e64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x248e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_248e68:
    // 0x248e68: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x248e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248e6c:
    // 0x248e6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x248e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_248e70:
    // 0x248e70: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x248e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_248e74:
    // 0x248e74: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_248e78:
    if (ctx->pc == 0x248E78u) {
        ctx->pc = 0x248E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E74u;
        // 0x248e78: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248E7Cu;
        goto label_248e7c;
    }
    ctx->pc = 0x248E74u;
    {
        const bool branch_taken_0x248e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E74u;
        // 0x248e78: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e74) {
            ctx->pc = 0x248E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248e48;
        }
    }
    ctx->pc = 0x248E7Cu;
label_248e7c:
    // 0x248e7c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x248e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_248e80:
    // 0x248e80: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x248e80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_248e84:
    // 0x248e84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x248e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_248e88:
    // 0x248e88: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x248e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_248e8c:
    // 0x248e8c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_248e90:
    if (ctx->pc == 0x248E90u) {
        ctx->pc = 0x248E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E8Cu;
        // 0x248e90: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248E94u;
        goto label_248e94;
    }
    ctx->pc = 0x248E8Cu;
    {
        const bool branch_taken_0x248e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E8Cu;
        // 0x248e90: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e8c) {
            ctx->pc = 0x248F30u;
            goto label_248f30;
        }
    }
    ctx->pc = 0x248E94u;
label_248e94:
    // 0x248e94: 0xe22818  mult        $a1, $a3, $v0
    ctx->pc = 0x248e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_248e98:
    // 0x248e98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x248e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_248e9c:
    // 0x248e9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x248e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_248ea0:
    // 0x248ea0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x248ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_248ea4:
    // 0x248ea4: 0x684b002f  ldl         $t3, 0x2F($v0)
    ctx->pc = 0x248ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_248ea8:
    // 0x248ea8: 0x6c4b0028  ldr         $t3, 0x28($v0)
    ctx->pc = 0x248ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_248eac:
    // 0x248eac: 0x684c0037  ldl         $t4, 0x37($v0)
    ctx->pc = 0x248eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_248eb0:
    // 0x248eb0: 0x6c4c0030  ldr         $t4, 0x30($v0)
    ctx->pc = 0x248eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_248eb4:
    // 0x248eb4: 0x6843003f  ldl         $v1, 0x3F($v0)
    ctx->pc = 0x248eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_248eb8:
    // 0x248eb8: 0x6c430038  ldr         $v1, 0x38($v0)
    ctx->pc = 0x248eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_248ebc:
    // 0x248ebc: 0x68440047  ldl         $a0, 0x47($v0)
    ctx->pc = 0x248ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_248ec0:
    // 0x248ec0: 0x6c440040  ldr         $a0, 0x40($v0)
    ctx->pc = 0x248ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_248ec4:
    // 0x248ec4: 0xb04b0007  sdl         $t3, 0x7($v0)
    ctx->pc = 0x248ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_248ec8:
    // 0x248ec8: 0xb44b0000  sdr         $t3, 0x0($v0)
    ctx->pc = 0x248ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_248ecc:
    // 0x248ecc: 0xb04c000f  sdl         $t4, 0xF($v0)
    ctx->pc = 0x248eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_248ed0:
    // 0x248ed0: 0xb44c0008  sdr         $t4, 0x8($v0)
    ctx->pc = 0x248ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_248ed4:
    // 0x248ed4: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x248ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_248ed8:
    // 0x248ed8: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x248ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_248edc:
    // 0x248edc: 0xb044001f  sdl         $a0, 0x1F($v0)
    ctx->pc = 0x248edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_248ee0:
    // 0x248ee0: 0xb4440018  sdr         $a0, 0x18($v0)
    ctx->pc = 0x248ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_248ee4:
    // 0x248ee4: 0x684b004f  ldl         $t3, 0x4F($v0)
    ctx->pc = 0x248ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_248ee8:
    // 0x248ee8: 0x6c4b0048  ldr         $t3, 0x48($v0)
    ctx->pc = 0x248ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_248eec:
    // 0x248eec: 0xb04b0027  sdl         $t3, 0x27($v0)
    ctx->pc = 0x248eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_248ef0:
    // 0x248ef0: 0xb44b0020  sdr         $t3, 0x20($v0)
    ctx->pc = 0x248ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_248ef4:
    // 0x248ef4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x248ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_248ef8:
    // 0x248ef8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x248ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_248efc:
    // 0x248efc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x248efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_248f00:
    // 0x248f00: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x248f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_248f04:
    // 0x248f04: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x248f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_248f08:
    // 0x248f08: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x248f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_248f0c:
    // 0x248f0c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x248f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_248f10:
    // 0x248f10: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x248f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_248f14:
    // 0x248f14: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x248f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_248f18:
    // 0x248f18: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x248f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_248f1c:
    // 0x248f1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x248f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_248f20:
    // 0x248f20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x248f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_248f24:
    // 0x248f24: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x248f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_248f28:
    // 0x248f28: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_248f2c:
    if (ctx->pc == 0x248F2Cu) {
        ctx->pc = 0x248F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F28u;
        // 0x248f2c: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248F30u;
        goto label_248f30;
    }
    ctx->pc = 0x248F28u;
    {
        const bool branch_taken_0x248f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F28u;
        // 0x248f2c: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f28) {
            ctx->pc = 0x248E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248e98;
        }
    }
    ctx->pc = 0x248F30u;
label_248f30:
    // 0x248f30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x248f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_248f34:
    // 0x248f34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x248f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_248f38:
    // 0x248f38: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_248f3c:
    if (ctx->pc == 0x248F3Cu) {
        ctx->pc = 0x248F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F38u;
        // 0x248f3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248F40u;
        goto label_248f40;
    }
    ctx->pc = 0x248F38u;
    {
        const bool branch_taken_0x248f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F38u;
        // 0x248f3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f38) {
            ctx->pc = 0x248FE0u;
            goto label_248fe0;
        }
    }
    ctx->pc = 0x248F40u;
label_248f40:
    // 0x248f40: 0x240b0028  addiu       $t3, $zero, 0x28
    ctx->pc = 0x248f40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_248f44:
    // 0x248f44: 0x240a0028  addiu       $t2, $zero, 0x28
    ctx->pc = 0x248f44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_248f48:
    // 0x248f48: 0xeb1818  mult        $v1, $a3, $t3
    ctx->pc = 0x248f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_248f4c:
    // 0x248f4c: 0x0  nop
    ctx->pc = 0x248f4cu;
    // NOP
label_248f50:
    // 0x248f50: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x248f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_248f54:
    // 0x248f54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x248f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248f58:
    // 0x248f58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x248f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_248f5c:
    // 0x248f5c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x248f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_248f60:
    // 0x248f60: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_248f64:
    if (ctx->pc == 0x248F64u) {
        ctx->pc = 0x248F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F60u;
        // 0x248f64: 0x24e80001  addiu       $t0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248F68u;
        goto label_248f68;
    }
    ctx->pc = 0x248F60u;
    {
        const bool branch_taken_0x248f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F60u;
        // 0x248f64: 0x24e80001  addiu       $t0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f60) {
            ctx->pc = 0x248FC8u;
            goto label_248fc8;
        }
    }
    ctx->pc = 0x248F68u;
label_248f68:
    // 0x248f68: 0xea2818  mult        $a1, $a3, $t2
    ctx->pc = 0x248f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_248f6c:
    // 0x248f6c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x248f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_248f70:
    // 0x248f70: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x248f70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_248f74:
    // 0x248f74: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x248f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_248f78:
    // 0x248f78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x248f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_248f7c:
    // 0x248f7c: 0x0  nop
    ctx->pc = 0x248f7cu;
    // NOP
label_248f80:
    // 0x248f80: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x248f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_248f84:
    // 0x248f84: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x248f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_248f88:
    // 0x248f88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x248f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_248f8c:
    // 0x248f8c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x248f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_248f90:
    // 0x248f90: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_248f94:
    if (ctx->pc == 0x248F94u) {
        ctx->pc = 0x248F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F90u;
        // 0x248f94: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248F98u;
        goto label_248f98;
    }
    ctx->pc = 0x248F90u;
    {
        const bool branch_taken_0x248f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248f90) {
            ctx->pc = 0x248F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248F90u;
            // 0x248f94: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248FB0u;
            goto label_248fb0;
        }
    }
    ctx->pc = 0x248F98u;
label_248f98:
    // 0x248f98: 0x14690003  bne         $v1, $t1, . + 4 + (0x3 << 2)
label_248f9c:
    if (ctx->pc == 0x248F9Cu) {
        ctx->pc = 0x248F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F98u;
        // 0x248f9c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248FA0u;
        goto label_248fa0;
    }
    ctx->pc = 0x248F98u;
    {
        const bool branch_taken_0x248f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x248F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F98u;
        // 0x248f9c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f98) {
            ctx->pc = 0x248FA8u;
            goto label_248fa8;
        }
    }
    ctx->pc = 0x248FA0u;
label_248fa0:
    // 0x248fa0: 0x10000002  b           . + 4 + (0x2 << 2)
label_248fa4:
    if (ctx->pc == 0x248FA4u) {
        ctx->pc = 0x248FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FA0u;
        // 0x248fa4: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248FA8u;
        goto label_248fa8;
    }
    ctx->pc = 0x248FA0u;
    {
        const bool branch_taken_0x248fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FA0u;
        // 0x248fa4: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248fa0) {
            ctx->pc = 0x248FACu;
            goto label_248fac;
        }
    }
    ctx->pc = 0x248FA8u;
label_248fa8:
    // 0x248fa8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x248fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_248fac:
    // 0x248fac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x248facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_248fb0:
    // 0x248fb0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x248fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_248fb4:
    // 0x248fb4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x248fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_248fb8:
    // 0x248fb8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x248fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_248fbc:
    // 0x248fbc: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x248fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_248fc0:
    // 0x248fc0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_248fc4:
    if (ctx->pc == 0x248FC4u) {
        ctx->pc = 0x248FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FC0u;
        // 0x248fc4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248FC8u;
        goto label_248fc8;
    }
    ctx->pc = 0x248FC0u;
    {
        const bool branch_taken_0x248fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248fc0) {
            ctx->pc = 0x248FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248FC0u;
            // 0x248fc4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248f80;
        }
    }
    ctx->pc = 0x248FC8u;
label_248fc8:
    // 0x248fc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x248fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_248fcc:
    // 0x248fcc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x248fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_248fd0:
    // 0x248fd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x248fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_248fd4:
    // 0x248fd4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x248fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_248fd8:
    // 0x248fd8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_248fdc:
    if (ctx->pc == 0x248FDCu) {
        ctx->pc = 0x248FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FD8u;
        // 0x248fdc: 0xeb1818  mult        $v1, $a3, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x248FE0u;
        goto label_248fe0;
    }
    ctx->pc = 0x248FD8u;
    {
        const bool branch_taken_0x248fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FD8u;
        // 0x248fdc: 0xeb1818  mult        $v1, $a3, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248fd8) {
            ctx->pc = 0x248F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248f50;
        }
    }
    ctx->pc = 0x248FE0u;
label_248fe0:
    // 0x248fe0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x248fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_248fe4:
    // 0x248fe4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x248fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_248fe8:
    // 0x248fe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x248fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_248fec:
    // 0x248fec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x248fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_248ff0:
    // 0x248ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_248ff4:
    // 0x248ff4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x248ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_248ff8:
    // 0x248ff8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x248ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_248ffc:
    // 0x248ffc: 0x3e00008  jr          $ra
label_249000:
    if (ctx->pc == 0x249000u) {
        ctx->pc = 0x249000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FFCu;
        // 0x249000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249004u;
        goto label_249004;
    }
    ctx->pc = 0x248FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FFCu;
        // 0x249000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249004u;
label_249004:
    // 0x249004: 0x0  nop
    ctx->pc = 0x249004u;
    // NOP
    ctx->pc = 0x249008u;
}
