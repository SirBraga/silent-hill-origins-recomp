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

// Function: sub_00168C78
// Address: 0x168c78 - 0x168eb0
void sub_00168C78_0x168c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168C78_0x168c78");
#endif

    switch (ctx->pc) {
        case 0x168c78u: goto label_168c78;
        case 0x168c7cu: goto label_168c7c;
        case 0x168c80u: goto label_168c80;
        case 0x168c84u: goto label_168c84;
        case 0x168c88u: goto label_168c88;
        case 0x168c8cu: goto label_168c8c;
        case 0x168c90u: goto label_168c90;
        case 0x168c94u: goto label_168c94;
        case 0x168c98u: goto label_168c98;
        case 0x168c9cu: goto label_168c9c;
        case 0x168ca0u: goto label_168ca0;
        case 0x168ca4u: goto label_168ca4;
        case 0x168ca8u: goto label_168ca8;
        case 0x168cacu: goto label_168cac;
        case 0x168cb0u: goto label_168cb0;
        case 0x168cb4u: goto label_168cb4;
        case 0x168cb8u: goto label_168cb8;
        case 0x168cbcu: goto label_168cbc;
        case 0x168cc0u: goto label_168cc0;
        case 0x168cc4u: goto label_168cc4;
        case 0x168cc8u: goto label_168cc8;
        case 0x168cccu: goto label_168ccc;
        case 0x168cd0u: goto label_168cd0;
        case 0x168cd4u: goto label_168cd4;
        case 0x168cd8u: goto label_168cd8;
        case 0x168cdcu: goto label_168cdc;
        case 0x168ce0u: goto label_168ce0;
        case 0x168ce4u: goto label_168ce4;
        case 0x168ce8u: goto label_168ce8;
        case 0x168cecu: goto label_168cec;
        case 0x168cf0u: goto label_168cf0;
        case 0x168cf4u: goto label_168cf4;
        case 0x168cf8u: goto label_168cf8;
        case 0x168cfcu: goto label_168cfc;
        case 0x168d00u: goto label_168d00;
        case 0x168d04u: goto label_168d04;
        case 0x168d08u: goto label_168d08;
        case 0x168d0cu: goto label_168d0c;
        case 0x168d10u: goto label_168d10;
        case 0x168d14u: goto label_168d14;
        case 0x168d18u: goto label_168d18;
        case 0x168d1cu: goto label_168d1c;
        case 0x168d20u: goto label_168d20;
        case 0x168d24u: goto label_168d24;
        case 0x168d28u: goto label_168d28;
        case 0x168d2cu: goto label_168d2c;
        case 0x168d30u: goto label_168d30;
        case 0x168d34u: goto label_168d34;
        case 0x168d38u: goto label_168d38;
        case 0x168d3cu: goto label_168d3c;
        case 0x168d40u: goto label_168d40;
        case 0x168d44u: goto label_168d44;
        case 0x168d48u: goto label_168d48;
        case 0x168d4cu: goto label_168d4c;
        case 0x168d50u: goto label_168d50;
        case 0x168d54u: goto label_168d54;
        case 0x168d58u: goto label_168d58;
        case 0x168d5cu: goto label_168d5c;
        case 0x168d60u: goto label_168d60;
        case 0x168d64u: goto label_168d64;
        case 0x168d68u: goto label_168d68;
        case 0x168d6cu: goto label_168d6c;
        case 0x168d70u: goto label_168d70;
        case 0x168d74u: goto label_168d74;
        case 0x168d78u: goto label_168d78;
        case 0x168d7cu: goto label_168d7c;
        case 0x168d80u: goto label_168d80;
        case 0x168d84u: goto label_168d84;
        case 0x168d88u: goto label_168d88;
        case 0x168d8cu: goto label_168d8c;
        case 0x168d90u: goto label_168d90;
        case 0x168d94u: goto label_168d94;
        case 0x168d98u: goto label_168d98;
        case 0x168d9cu: goto label_168d9c;
        case 0x168da0u: goto label_168da0;
        case 0x168da4u: goto label_168da4;
        case 0x168da8u: goto label_168da8;
        case 0x168dacu: goto label_168dac;
        case 0x168db0u: goto label_168db0;
        case 0x168db4u: goto label_168db4;
        case 0x168db8u: goto label_168db8;
        case 0x168dbcu: goto label_168dbc;
        case 0x168dc0u: goto label_168dc0;
        case 0x168dc4u: goto label_168dc4;
        case 0x168dc8u: goto label_168dc8;
        case 0x168dccu: goto label_168dcc;
        case 0x168dd0u: goto label_168dd0;
        case 0x168dd4u: goto label_168dd4;
        case 0x168dd8u: goto label_168dd8;
        case 0x168ddcu: goto label_168ddc;
        case 0x168de0u: goto label_168de0;
        case 0x168de4u: goto label_168de4;
        case 0x168de8u: goto label_168de8;
        case 0x168decu: goto label_168dec;
        case 0x168df0u: goto label_168df0;
        case 0x168df4u: goto label_168df4;
        case 0x168df8u: goto label_168df8;
        case 0x168dfcu: goto label_168dfc;
        case 0x168e00u: goto label_168e00;
        case 0x168e04u: goto label_168e04;
        case 0x168e08u: goto label_168e08;
        case 0x168e0cu: goto label_168e0c;
        case 0x168e10u: goto label_168e10;
        case 0x168e14u: goto label_168e14;
        case 0x168e18u: goto label_168e18;
        case 0x168e1cu: goto label_168e1c;
        case 0x168e20u: goto label_168e20;
        case 0x168e24u: goto label_168e24;
        case 0x168e28u: goto label_168e28;
        case 0x168e2cu: goto label_168e2c;
        case 0x168e30u: goto label_168e30;
        case 0x168e34u: goto label_168e34;
        case 0x168e38u: goto label_168e38;
        case 0x168e3cu: goto label_168e3c;
        case 0x168e40u: goto label_168e40;
        case 0x168e44u: goto label_168e44;
        case 0x168e48u: goto label_168e48;
        case 0x168e4cu: goto label_168e4c;
        case 0x168e50u: goto label_168e50;
        case 0x168e54u: goto label_168e54;
        case 0x168e58u: goto label_168e58;
        case 0x168e5cu: goto label_168e5c;
        case 0x168e60u: goto label_168e60;
        case 0x168e64u: goto label_168e64;
        case 0x168e68u: goto label_168e68;
        case 0x168e6cu: goto label_168e6c;
        case 0x168e70u: goto label_168e70;
        case 0x168e74u: goto label_168e74;
        case 0x168e78u: goto label_168e78;
        case 0x168e7cu: goto label_168e7c;
        case 0x168e80u: goto label_168e80;
        case 0x168e84u: goto label_168e84;
        case 0x168e88u: goto label_168e88;
        case 0x168e8cu: goto label_168e8c;
        case 0x168e90u: goto label_168e90;
        case 0x168e94u: goto label_168e94;
        case 0x168e98u: goto label_168e98;
        case 0x168e9cu: goto label_168e9c;
        case 0x168ea0u: goto label_168ea0;
        case 0x168ea4u: goto label_168ea4;
        case 0x168ea8u: goto label_168ea8;
        case 0x168eacu: goto label_168eac;
        default: break;
    }

    ctx->pc = 0x168c78u;

label_168c78:
    // 0x168c78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x168c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_168c7c:
    // 0x168c7c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x168c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_168c80:
    // 0x168c80: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x168c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_168c84:
    // 0x168c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_168c88:
    // 0x168c88: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x168c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_168c8c:
    // 0x168c8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_168c90:
    // 0x168c90: 0xc04f0bc  jal         func_13C2F0
label_168c94:
    if (ctx->pc == 0x168C94u) {
        ctx->pc = 0x168C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C90u;
        // 0x168c94: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168C98u;
        goto label_168c98;
    }
    ctx->pc = 0x168C90u;
    SET_GPR_U32(ctx, 31, 0x168C98u);
    ctx->pc = 0x168C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168C90u;
    // 0x168c94: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x168C90u, 0x168C98u)) {
        return;
    }
    ctx->pc = 0x168C98u;
label_168c98:
    // 0x168c98: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x168c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_168c9c:
    // 0x168c9c: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x168c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_168ca0:
    // 0x168ca0: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
label_168ca4:
    if (ctx->pc == 0x168CA4u) {
        ctx->pc = 0x168CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CA0u;
        // 0x168ca4: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168CA8u;
        goto label_168ca8;
    }
    ctx->pc = 0x168CA0u;
    {
        const bool branch_taken_0x168ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x168ca0) {
            ctx->pc = 0x168CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168CA0u;
            // 0x168ca4: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168CB4u;
            goto label_168cb4;
        }
    }
    ctx->pc = 0x168CA8u;
label_168ca8:
    // 0x168ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168cac:
    // 0x168cac: 0x1000007a  b           . + 4 + (0x7A << 2)
label_168cb0:
    if (ctx->pc == 0x168CB0u) {
        ctx->pc = 0x168CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CACu;
        // 0x168cb0: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168CB4u;
        goto label_168cb4;
    }
    ctx->pc = 0x168CACu;
    {
        const bool branch_taken_0x168cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CACu;
        // 0x168cb0: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cac) {
            ctx->pc = 0x168E98u;
            goto label_168e98;
        }
    }
    ctx->pc = 0x168CB4u;
label_168cb4:
    // 0x168cb4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_168cb8:
    if (ctx->pc == 0x168CB8u) {
        ctx->pc = 0x168CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CB4u;
        // 0x168cb8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168CBCu;
        goto label_168cbc;
    }
    ctx->pc = 0x168CB4u;
    {
        const bool branch_taken_0x168cb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x168CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CB4u;
        // 0x168cb8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cb4) {
            ctx->pc = 0x168CC4u;
            goto label_168cc4;
        }
    }
    ctx->pc = 0x168CBCu;
label_168cbc:
    // 0x168cbc: 0x10000076  b           . + 4 + (0x76 << 2)
label_168cc0:
    if (ctx->pc == 0x168CC0u) {
        ctx->pc = 0x168CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CBCu;
        // 0x168cc0: 0xae0000f0  sw          $zero, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168CC4u;
        goto label_168cc4;
    }
    ctx->pc = 0x168CBCu;
    {
        const bool branch_taken_0x168cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CBCu;
        // 0x168cc0: 0xae0000f0  sw          $zero, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cbc) {
            ctx->pc = 0x168E98u;
            goto label_168e98;
        }
    }
    ctx->pc = 0x168CC4u;
label_168cc4:
    // 0x168cc4: 0x8c4346c8  lw          $v1, 0x46C8($v0)
    ctx->pc = 0x168cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18120)));
label_168cc8:
    // 0x168cc8: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_168ccc:
    if (ctx->pc == 0x168CCCu) {
        ctx->pc = 0x168CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CC8u;
        // 0x168ccc: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168CD0u;
        goto label_168cd0;
    }
    ctx->pc = 0x168CC8u;
    {
        const bool branch_taken_0x168cc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x168cc8) {
            ctx->pc = 0x168CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168CC8u;
            // 0x168ccc: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168CE8u;
            goto label_168ce8;
        }
    }
    ctx->pc = 0x168CD0u;
label_168cd0:
    // 0x168cd0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x168cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_168cd4:
    // 0x168cd4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_168cd8:
    if (ctx->pc == 0x168CD8u) {
        ctx->pc = 0x168CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CD4u;
        // 0x168cd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168CDCu;
        goto label_168cdc;
    }
    ctx->pc = 0x168CD4u;
    {
        const bool branch_taken_0x168cd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x168CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CD4u;
        // 0x168cd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cd4) {
            ctx->pc = 0x168CE0u;
            goto label_168ce0;
        }
    }
    ctx->pc = 0x168CDCu;
label_168cdc:
    // 0x168cdc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x168cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_168ce0:
    // 0x168ce0: 0x1000006d  b           . + 4 + (0x6D << 2)
label_168ce4:
    if (ctx->pc == 0x168CE4u) {
        ctx->pc = 0x168CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CE0u;
        // 0x168ce4: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168CE8u;
        goto label_168ce8;
    }
    ctx->pc = 0x168CE0u;
    {
        const bool branch_taken_0x168ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CE0u;
        // 0x168ce4: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ce0) {
            ctx->pc = 0x168E98u;
            goto label_168e98;
        }
    }
    ctx->pc = 0x168CE8u;
label_168ce8:
    // 0x168ce8: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
label_168cec:
    if (ctx->pc == 0x168CECu) {
        ctx->pc = 0x168CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CE8u;
        // 0x168cec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168CF0u;
        goto label_168cf0;
    }
    ctx->pc = 0x168CE8u;
    {
        const bool branch_taken_0x168ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ce8) {
            ctx->pc = 0x168CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168CE8u;
            // 0x168cec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E9Cu;
            goto label_168e9c;
        }
    }
    ctx->pc = 0x168CF0u;
label_168cf0:
    // 0x168cf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x168cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_168cf4:
    // 0x168cf4: 0x54820069  bnel        $a0, $v0, . + 4 + (0x69 << 2)
label_168cf8:
    if (ctx->pc == 0x168CF8u) {
        ctx->pc = 0x168CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CF4u;
        // 0x168cf8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168CFCu;
        goto label_168cfc;
    }
    ctx->pc = 0x168CF4u;
    {
        const bool branch_taken_0x168cf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x168cf4) {
            ctx->pc = 0x168CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168CF4u;
            // 0x168cf8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E9Cu;
            goto label_168e9c;
        }
    }
    ctx->pc = 0x168CFCu;
label_168cfc:
    // 0x168cfc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x168cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_168d00:
    // 0x168d00: 0x50a00066  beql        $a1, $zero, . + 4 + (0x66 << 2)
label_168d04:
    if (ctx->pc == 0x168D04u) {
        ctx->pc = 0x168D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D00u;
        // 0x168d04: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168D08u;
        goto label_168d08;
    }
    ctx->pc = 0x168D00u;
    {
        const bool branch_taken_0x168d00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d00) {
            ctx->pc = 0x168D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168D00u;
            // 0x168d04: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E9Cu;
            goto label_168e9c;
        }
    }
    ctx->pc = 0x168D08u;
label_168d08:
    // 0x168d08: 0x68a2000b  ldl         $v0, 0xB($a1)
    ctx->pc = 0x168d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_168d0c:
    // 0x168d0c: 0x6ca20004  ldr         $v0, 0x4($a1)
    ctx->pc = 0x168d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_168d10:
    // 0x168d10: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x168d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_168d14:
    // 0x168d14: 0xb202005f  sdl         $v0, 0x5F($s0)
    ctx->pc = 0x168d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_168d18:
    // 0x168d18: 0xb6020058  sdr         $v0, 0x58($s0)
    ctx->pc = 0x168d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_168d1c:
    // 0x168d1c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x168d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_168d20:
    // 0x168d20: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x168d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_168d24:
    // 0x168d24: 0x5040005d  beql        $v0, $zero, . + 4 + (0x5D << 2)
label_168d28:
    if (ctx->pc == 0x168D28u) {
        ctx->pc = 0x168D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D24u;
        // 0x168d28: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168D2Cu;
        goto label_168d2c;
    }
    ctx->pc = 0x168D24u;
    {
        const bool branch_taken_0x168d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d24) {
            ctx->pc = 0x168D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168D24u;
            // 0x168d28: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E9Cu;
            goto label_168e9c;
        }
    }
    ctx->pc = 0x168D2Cu;
label_168d2c:
    // 0x168d2c: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x168d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_168d30:
    // 0x168d30: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_168d34:
    if (ctx->pc == 0x168D34u) {
        ctx->pc = 0x168D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D30u;
        // 0x168d34: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168D38u;
        goto label_168d38;
    }
    ctx->pc = 0x168D30u;
    {
        const bool branch_taken_0x168d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D30u;
        // 0x168d34: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d30) {
            ctx->pc = 0x168E98u;
            goto label_168e98;
        }
    }
    ctx->pc = 0x168D38u;
label_168d38:
    // 0x168d38: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x168d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_168d3c:
    // 0x168d3c: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x168d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_168d40:
    // 0x168d40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x168d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_168d44:
    // 0x168d44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x168d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168d48:
    // 0x168d48: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x168d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_168d4c:
    // 0x168d4c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_168d50:
    if (ctx->pc == 0x168D50u) {
        ctx->pc = 0x168D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D4Cu;
        // 0x168d50: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168D54u;
        goto label_168d54;
    }
    ctx->pc = 0x168D4Cu;
    {
        const bool branch_taken_0x168d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x168D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D4Cu;
        // 0x168d50: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d4c) {
            ctx->pc = 0x168D68u;
            goto label_168d68;
        }
    }
    ctx->pc = 0x168D54u;
label_168d54:
    // 0x168d54: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x168d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_168d58:
    // 0x168d58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_168d5c:
    if (ctx->pc == 0x168D5Cu) {
        ctx->pc = 0x168D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D58u;
        // 0x168d5c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168D60u;
        goto label_168d60;
    }
    ctx->pc = 0x168D58u;
    {
        const bool branch_taken_0x168d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D58u;
        // 0x168d5c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d58) {
            ctx->pc = 0x168D6Cu;
            goto label_168d6c;
        }
    }
    ctx->pc = 0x168D60u;
label_168d60:
    // 0x168d60: 0xc07fd18  jal         func_1FF460
label_168d64:
    if (ctx->pc == 0x168D64u) {
        ctx->pc = 0x168D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D60u;
        // 0x168d64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168D68u;
        goto label_168d68;
    }
    ctx->pc = 0x168D60u;
    SET_GPR_U32(ctx, 31, 0x168D68u);
    ctx->pc = 0x168D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D60u;
    // 0x168d64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x168D60u, 0x168D68u)) {
        return;
    }
    ctx->pc = 0x168D68u;
label_168d68:
    // 0x168d68: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x168d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_168d6c:
    // 0x168d6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_168d70:
    if (ctx->pc == 0x168D70u) {
        ctx->pc = 0x168D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D6Cu;
        // 0x168d70: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168D74u;
        goto label_168d74;
    }
    ctx->pc = 0x168D6Cu;
    {
        const bool branch_taken_0x168d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D6Cu;
        // 0x168d70: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d6c) {
            ctx->pc = 0x168D98u;
            goto label_168d98;
        }
    }
    ctx->pc = 0x168D74u;
label_168d74:
    // 0x168d74: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x168d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_168d78:
    // 0x168d78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x168d78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_168d7c:
    // 0x168d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x168d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168d80:
    // 0x168d80: 0x0  nop
    ctx->pc = 0x168d80u;
    // NOP
label_168d84:
    // 0x168d84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x168d84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168d88:
    // 0x168d88: 0x0  nop
    ctx->pc = 0x168d88u;
    // NOP
label_168d8c:
    // 0x168d8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_168d90:
    if (ctx->pc == 0x168D90u) {
        ctx->pc = 0x168D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D8Cu;
        // 0x168d90: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168D94u;
        goto label_168d94;
    }
    ctx->pc = 0x168D8Cu;
    {
        const bool branch_taken_0x168d8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x168D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D8Cu;
        // 0x168d90: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d8c) {
            ctx->pc = 0x168D98u;
            goto label_168d98;
        }
    }
    ctx->pc = 0x168D94u;
label_168d94:
    // 0x168d94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x168d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168d98:
    // 0x168d98: 0x1220003f  beqz        $s1, . + 4 + (0x3F << 2)
label_168d9c:
    if (ctx->pc == 0x168D9Cu) {
        ctx->pc = 0x168D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D98u;
        // 0x168d9c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168DA0u;
        goto label_168da0;
    }
    ctx->pc = 0x168D98u;
    {
        const bool branch_taken_0x168d98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D98u;
        // 0x168d9c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d98) {
            ctx->pc = 0x168E98u;
            goto label_168e98;
        }
    }
    ctx->pc = 0x168DA0u;
label_168da0:
    // 0x168da0: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x168da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_168da4:
    // 0x168da4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x168da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168da8:
    // 0x168da8: 0xc093afa  jal         func_24EBE8
label_168dac:
    if (ctx->pc == 0x168DACu) {
        ctx->pc = 0x168DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DA8u;
        // 0x168dac: 0x260700b0  addiu       $a3, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168DB0u;
        goto label_168db0;
    }
    ctx->pc = 0x168DA8u;
    SET_GPR_U32(ctx, 31, 0x168DB0u);
    ctx->pc = 0x168DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168DA8u;
    // 0x168dac: 0x260700b0  addiu       $a3, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x168DA8u, 0x168DB0u)) {
        return;
    }
    ctx->pc = 0x168DB0u;
label_168db0:
    // 0x168db0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x168db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168db4:
    // 0x168db4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x168db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_168db8:
    // 0x168db8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x168db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_168dbc:
    // 0x168dbc: 0x0  nop
    ctx->pc = 0x168dbcu;
    // NOP
label_168dc0:
    // 0x168dc0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x168dc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168dc4:
    // 0x168dc4: 0x0  nop
    ctx->pc = 0x168dc4u;
    // NOP
label_168dc8:
    // 0x168dc8: 0x45020034  bc1fl       . + 4 + (0x34 << 2)
label_168dcc:
    if (ctx->pc == 0x168DCCu) {
        ctx->pc = 0x168DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DC8u;
        // 0x168dcc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168DD0u;
        goto label_168dd0;
    }
    ctx->pc = 0x168DC8u;
    {
        const bool branch_taken_0x168dc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168dc8) {
            ctx->pc = 0x168DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168DC8u;
            // 0x168dcc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E9Cu;
            goto label_168e9c;
        }
    }
    ctx->pc = 0x168DD0u;
label_168dd0:
    // 0x168dd0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x168dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_168dd4:
    // 0x168dd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x168dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_168dd8:
    // 0x168dd8: 0x0  nop
    ctx->pc = 0x168dd8u;
    // NOP
label_168ddc:
    // 0x168ddc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x168ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168de0:
    // 0x168de0: 0x0  nop
    ctx->pc = 0x168de0u;
    // NOP
label_168de4:
    // 0x168de4: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_168de8:
    if (ctx->pc == 0x168DE8u) {
        ctx->pc = 0x168DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DE4u;
        // 0x168de8: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168DECu;
        goto label_168dec;
    }
    ctx->pc = 0x168DE4u;
    {
        const bool branch_taken_0x168de4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x168DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DE4u;
        // 0x168de8: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168de4) {
            ctx->pc = 0x168E98u;
            goto label_168e98;
        }
    }
    ctx->pc = 0x168DECu;
label_168dec:
    // 0x168dec: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x168decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168df0:
    // 0x168df0: 0x0  nop
    ctx->pc = 0x168df0u;
    // NOP
label_168df4:
    // 0x168df4: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
label_168df8:
    if (ctx->pc == 0x168DF8u) {
        ctx->pc = 0x168DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DF4u;
        // 0x168df8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168DFCu;
        goto label_168dfc;
    }
    ctx->pc = 0x168DF4u;
    {
        const bool branch_taken_0x168df4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168df4) {
            ctx->pc = 0x168DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168DF4u;
            // 0x168df8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E9Cu;
            goto label_168e9c;
        }
    }
    ctx->pc = 0x168DFCu;
label_168dfc:
    // 0x168dfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x168dfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168e00:
    // 0x168e00: 0x0  nop
    ctx->pc = 0x168e00u;
    // NOP
label_168e04:
    // 0x168e04: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_168e08:
    if (ctx->pc == 0x168E08u) {
        ctx->pc = 0x168E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E04u;
        // 0x168e08: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E0Cu;
        goto label_168e0c;
    }
    ctx->pc = 0x168E04u;
    {
        const bool branch_taken_0x168e04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x168E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E04u;
        // 0x168e08: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e04) {
            ctx->pc = 0x168E98u;
            goto label_168e98;
        }
    }
    ctx->pc = 0x168E0Cu;
label_168e0c:
    // 0x168e0c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x168e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168e10:
    // 0x168e10: 0x0  nop
    ctx->pc = 0x168e10u;
    // NOP
label_168e14:
    // 0x168e14: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
label_168e18:
    if (ctx->pc == 0x168E18u) {
        ctx->pc = 0x168E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E14u;
        // 0x168e18: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E1Cu;
        goto label_168e1c;
    }
    ctx->pc = 0x168E14u;
    {
        const bool branch_taken_0x168e14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168e14) {
            ctx->pc = 0x168E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168E14u;
            // 0x168e18: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E9Cu;
            goto label_168e9c;
        }
    }
    ctx->pc = 0x168E1Cu;
label_168e1c:
    // 0x168e1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x168e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168e20:
    // 0x168e20: 0x0  nop
    ctx->pc = 0x168e20u;
    // NOP
label_168e24:
    // 0x168e24: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_168e28:
    if (ctx->pc == 0x168E28u) {
        ctx->pc = 0x168E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E24u;
        // 0x168e28: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E2Cu;
        goto label_168e2c;
    }
    ctx->pc = 0x168E24u;
    {
        const bool branch_taken_0x168e24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x168E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E24u;
        // 0x168e28: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e24) {
            ctx->pc = 0x168E98u;
            goto label_168e98;
        }
    }
    ctx->pc = 0x168E2Cu;
label_168e2c:
    // 0x168e2c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x168e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_168e30:
    // 0x168e30: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x168e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_168e34:
    // 0x168e34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168e38:
    // 0x168e38: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x168e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_168e3c:
    // 0x168e3c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x168e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_168e40:
    // 0x168e40: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x168e40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_168e44:
    // 0x168e44: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x168e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_168e48:
    // 0x168e48: 0x60f809  jalr        $v1
label_168e4c:
    if (ctx->pc == 0x168E4Cu) {
        ctx->pc = 0x168E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E48u;
        // 0x168e4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E50u;
        goto label_168e50;
    }
    ctx->pc = 0x168E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x168E50u);
        ctx->pc = 0x168E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E48u;
        // 0x168e4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168E48u, 0x168E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x168E50u;
label_168e50:
    // 0x168e50: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x168e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_168e54:
    // 0x168e54: 0x8e421a70  lw          $v0, 0x1A70($s2)
    ctx->pc = 0x168e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
label_168e58:
    // 0x168e58: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_168e5c:
    if (ctx->pc == 0x168E5Cu) {
        ctx->pc = 0x168E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E58u;
        // 0x168e5c: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E60u;
        goto label_168e60;
    }
    ctx->pc = 0x168E58u;
    {
        const bool branch_taken_0x168e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x168E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E58u;
        // 0x168e5c: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e58) {
            ctx->pc = 0x168E78u;
            goto label_168e78;
        }
    }
    ctx->pc = 0x168E60u;
label_168e60:
    // 0x168e60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x168e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_168e64:
    // 0x168e64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_168e68:
    if (ctx->pc == 0x168E68u) {
        ctx->pc = 0x168E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E64u;
        // 0x168e68: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E6Cu;
        goto label_168e6c;
    }
    ctx->pc = 0x168E64u;
    {
        const bool branch_taken_0x168e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E64u;
        // 0x168e68: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e64) {
            ctx->pc = 0x168E78u;
            goto label_168e78;
        }
    }
    ctx->pc = 0x168E6Cu;
label_168e6c:
    // 0x168e6c: 0xc07fd18  jal         func_1FF460
label_168e70:
    if (ctx->pc == 0x168E70u) {
        ctx->pc = 0x168E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E6Cu;
        // 0x168e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E74u;
        goto label_168e74;
    }
    ctx->pc = 0x168E6Cu;
    SET_GPR_U32(ctx, 31, 0x168E74u);
    ctx->pc = 0x168E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E6Cu;
    // 0x168e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x168E6Cu, 0x168E74u)) {
        return;
    }
    ctx->pc = 0x168E74u;
label_168e74:
    // 0x168e74: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x168e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_168e78:
    // 0x168e78: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x168e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_168e7c:
    // 0x168e7c: 0x244541b0  addiu       $a1, $v0, 0x41B0
    ctx->pc = 0x168e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16816));
label_168e80:
    // 0x168e80: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_168e84:
    if (ctx->pc == 0x168E84u) {
        ctx->pc = 0x168E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E80u;
        // 0x168e84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E88u;
        goto label_168e88;
    }
    ctx->pc = 0x168E80u;
    {
        const bool branch_taken_0x168e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E80u;
        // 0x168e84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e80) {
            ctx->pc = 0x168E8Cu;
            goto label_168e8c;
        }
    }
    ctx->pc = 0x168E88u;
label_168e88:
    // 0x168e88: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x168e88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_168e8c:
    // 0x168e8c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x168e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_168e90:
    // 0x168e90: 0xc05a47c  jal         func_1691F0
label_168e94:
    if (ctx->pc == 0x168E94u) {
        ctx->pc = 0x168E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E90u;
        // 0x168e94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E98u;
        goto label_168e98;
    }
    ctx->pc = 0x168E90u;
    SET_GPR_U32(ctx, 31, 0x168E98u);
    ctx->pc = 0x168E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E90u;
    // 0x168e94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x168E90u, 0x168E98u)) {
        return;
    }
    ctx->pc = 0x168E98u;
label_168e98:
    // 0x168e98: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x168e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_168e9c:
    // 0x168e9c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x168e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_168ea0:
    // 0x168ea0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x168ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_168ea4:
    // 0x168ea4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x168ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_168ea8:
    // 0x168ea8: 0x3e00008  jr          $ra
label_168eac:
    if (ctx->pc == 0x168EACu) {
        ctx->pc = 0x168EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EA8u;
        // 0x168eac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168EB0u;
        goto label_fallthrough_0x168ea8;
    }
    ctx->pc = 0x168EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EA8u;
        // 0x168eac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x168ea8:
    ctx->pc = 0x168EB0u;
}
