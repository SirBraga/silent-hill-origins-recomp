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

// Function: sub_001D9DB0
// Address: 0x1d9db0 - 0x1d9f88
void sub_001D9DB0_0x1d9db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9DB0_0x1d9db0");
#endif

    switch (ctx->pc) {
        case 0x1d9db0u: goto label_1d9db0;
        case 0x1d9db4u: goto label_1d9db4;
        case 0x1d9db8u: goto label_1d9db8;
        case 0x1d9dbcu: goto label_1d9dbc;
        case 0x1d9dc0u: goto label_1d9dc0;
        case 0x1d9dc4u: goto label_1d9dc4;
        case 0x1d9dc8u: goto label_1d9dc8;
        case 0x1d9dccu: goto label_1d9dcc;
        case 0x1d9dd0u: goto label_1d9dd0;
        case 0x1d9dd4u: goto label_1d9dd4;
        case 0x1d9dd8u: goto label_1d9dd8;
        case 0x1d9ddcu: goto label_1d9ddc;
        case 0x1d9de0u: goto label_1d9de0;
        case 0x1d9de4u: goto label_1d9de4;
        case 0x1d9de8u: goto label_1d9de8;
        case 0x1d9decu: goto label_1d9dec;
        case 0x1d9df0u: goto label_1d9df0;
        case 0x1d9df4u: goto label_1d9df4;
        case 0x1d9df8u: goto label_1d9df8;
        case 0x1d9dfcu: goto label_1d9dfc;
        case 0x1d9e00u: goto label_1d9e00;
        case 0x1d9e04u: goto label_1d9e04;
        case 0x1d9e08u: goto label_1d9e08;
        case 0x1d9e0cu: goto label_1d9e0c;
        case 0x1d9e10u: goto label_1d9e10;
        case 0x1d9e14u: goto label_1d9e14;
        case 0x1d9e18u: goto label_1d9e18;
        case 0x1d9e1cu: goto label_1d9e1c;
        case 0x1d9e20u: goto label_1d9e20;
        case 0x1d9e24u: goto label_1d9e24;
        case 0x1d9e28u: goto label_1d9e28;
        case 0x1d9e2cu: goto label_1d9e2c;
        case 0x1d9e30u: goto label_1d9e30;
        case 0x1d9e34u: goto label_1d9e34;
        case 0x1d9e38u: goto label_1d9e38;
        case 0x1d9e3cu: goto label_1d9e3c;
        case 0x1d9e40u: goto label_1d9e40;
        case 0x1d9e44u: goto label_1d9e44;
        case 0x1d9e48u: goto label_1d9e48;
        case 0x1d9e4cu: goto label_1d9e4c;
        case 0x1d9e50u: goto label_1d9e50;
        case 0x1d9e54u: goto label_1d9e54;
        case 0x1d9e58u: goto label_1d9e58;
        case 0x1d9e5cu: goto label_1d9e5c;
        case 0x1d9e60u: goto label_1d9e60;
        case 0x1d9e64u: goto label_1d9e64;
        case 0x1d9e68u: goto label_1d9e68;
        case 0x1d9e6cu: goto label_1d9e6c;
        case 0x1d9e70u: goto label_1d9e70;
        case 0x1d9e74u: goto label_1d9e74;
        case 0x1d9e78u: goto label_1d9e78;
        case 0x1d9e7cu: goto label_1d9e7c;
        case 0x1d9e80u: goto label_1d9e80;
        case 0x1d9e84u: goto label_1d9e84;
        case 0x1d9e88u: goto label_1d9e88;
        case 0x1d9e8cu: goto label_1d9e8c;
        case 0x1d9e90u: goto label_1d9e90;
        case 0x1d9e94u: goto label_1d9e94;
        case 0x1d9e98u: goto label_1d9e98;
        case 0x1d9e9cu: goto label_1d9e9c;
        case 0x1d9ea0u: goto label_1d9ea0;
        case 0x1d9ea4u: goto label_1d9ea4;
        case 0x1d9ea8u: goto label_1d9ea8;
        case 0x1d9eacu: goto label_1d9eac;
        case 0x1d9eb0u: goto label_1d9eb0;
        case 0x1d9eb4u: goto label_1d9eb4;
        case 0x1d9eb8u: goto label_1d9eb8;
        case 0x1d9ebcu: goto label_1d9ebc;
        case 0x1d9ec0u: goto label_1d9ec0;
        case 0x1d9ec4u: goto label_1d9ec4;
        case 0x1d9ec8u: goto label_1d9ec8;
        case 0x1d9eccu: goto label_1d9ecc;
        case 0x1d9ed0u: goto label_1d9ed0;
        case 0x1d9ed4u: goto label_1d9ed4;
        case 0x1d9ed8u: goto label_1d9ed8;
        case 0x1d9edcu: goto label_1d9edc;
        case 0x1d9ee0u: goto label_1d9ee0;
        case 0x1d9ee4u: goto label_1d9ee4;
        case 0x1d9ee8u: goto label_1d9ee8;
        case 0x1d9eecu: goto label_1d9eec;
        case 0x1d9ef0u: goto label_1d9ef0;
        case 0x1d9ef4u: goto label_1d9ef4;
        case 0x1d9ef8u: goto label_1d9ef8;
        case 0x1d9efcu: goto label_1d9efc;
        case 0x1d9f00u: goto label_1d9f00;
        case 0x1d9f04u: goto label_1d9f04;
        case 0x1d9f08u: goto label_1d9f08;
        case 0x1d9f0cu: goto label_1d9f0c;
        case 0x1d9f10u: goto label_1d9f10;
        case 0x1d9f14u: goto label_1d9f14;
        case 0x1d9f18u: goto label_1d9f18;
        case 0x1d9f1cu: goto label_1d9f1c;
        case 0x1d9f20u: goto label_1d9f20;
        case 0x1d9f24u: goto label_1d9f24;
        case 0x1d9f28u: goto label_1d9f28;
        case 0x1d9f2cu: goto label_1d9f2c;
        case 0x1d9f30u: goto label_1d9f30;
        case 0x1d9f34u: goto label_1d9f34;
        case 0x1d9f38u: goto label_1d9f38;
        case 0x1d9f3cu: goto label_1d9f3c;
        case 0x1d9f40u: goto label_1d9f40;
        case 0x1d9f44u: goto label_1d9f44;
        case 0x1d9f48u: goto label_1d9f48;
        case 0x1d9f4cu: goto label_1d9f4c;
        case 0x1d9f50u: goto label_1d9f50;
        case 0x1d9f54u: goto label_1d9f54;
        case 0x1d9f58u: goto label_1d9f58;
        case 0x1d9f5cu: goto label_1d9f5c;
        case 0x1d9f60u: goto label_1d9f60;
        case 0x1d9f64u: goto label_1d9f64;
        case 0x1d9f68u: goto label_1d9f68;
        case 0x1d9f6cu: goto label_1d9f6c;
        case 0x1d9f70u: goto label_1d9f70;
        case 0x1d9f74u: goto label_1d9f74;
        case 0x1d9f78u: goto label_1d9f78;
        case 0x1d9f7cu: goto label_1d9f7c;
        case 0x1d9f80u: goto label_1d9f80;
        case 0x1d9f84u: goto label_1d9f84;
        default: break;
    }

    ctx->pc = 0x1d9db0u;

label_1d9db0:
    // 0x1d9db0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1d9db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1d9db4:
    // 0x1d9db4: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1d9db4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_1d9db8:
    // 0x1d9db8: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x1d9db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_1d9dbc:
    // 0x1d9dbc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d9dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d9dc0:
    // 0x1d9dc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d9dc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d9dc4:
    // 0x1d9dc4: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x1d9dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_1d9dc8:
    // 0x1d9dc8: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x1d9dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_1d9dcc:
    // 0x1d9dcc: 0x24c61ab0  addiu       $a2, $a2, 0x1AB0
    ctx->pc = 0x1d9dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6832));
label_1d9dd0:
    // 0x1d9dd0: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x1d9dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_1d9dd4:
    // 0x1d9dd4: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x1d9dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_1d9dd8:
    // 0x1d9dd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ddc:
    // 0x1d9ddc: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x1d9ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_1d9de0:
    // 0x1d9de0: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1d9de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_1d9de4:
    // 0x1d9de4: 0xc07cc10  jal         func_1F3040
label_1d9de8:
    if (ctx->pc == 0x1D9DE8u) {
        ctx->pc = 0x1D9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DE4u;
        // 0x1d9de8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9DECu;
        goto label_1d9dec;
    }
    ctx->pc = 0x1D9DE4u;
    SET_GPR_U32(ctx, 31, 0x1D9DECu);
    ctx->pc = 0x1D9DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DE4u;
    // 0x1d9de8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3040u, 0x1D9DE4u, 0x1D9DECu)) {
        return;
    }
    ctx->pc = 0x1D9DECu;
label_1d9dec:
    // 0x1d9dec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d9decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d9df0:
    // 0x1d9df0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9df4:
    // 0x1d9df4: 0xc081444  jal         func_205110
label_1d9df8:
    if (ctx->pc == 0x1D9DF8u) {
        ctx->pc = 0x1D9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DF4u;
        // 0x1d9df8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9DFCu;
        goto label_1d9dfc;
    }
    ctx->pc = 0x1D9DF4u;
    SET_GPR_U32(ctx, 31, 0x1D9DFCu);
    ctx->pc = 0x1D9DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DF4u;
    // 0x1d9df8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205110u, 0x1D9DF4u, 0x1D9DFCu)) {
        return;
    }
    ctx->pc = 0x1D9DFCu;
label_1d9dfc:
    // 0x1d9dfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d9dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e00:
    // 0x1d9e00: 0x12400055  beqz        $s2, . + 4 + (0x55 << 2)
label_1d9e04:
    if (ctx->pc == 0x1D9E04u) {
        ctx->pc = 0x1D9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E00u;
        // 0x1d9e04: 0x27b10110  addiu       $s1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E08u;
        goto label_1d9e08;
    }
    ctx->pc = 0x1D9E00u;
    {
        const bool branch_taken_0x1d9e00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E00u;
        // 0x1d9e04: 0x27b10110  addiu       $s1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e00) {
            ctx->pc = 0x1D9F58u;
            goto label_1d9f58;
        }
    }
    ctx->pc = 0x1D9E08u;
label_1d9e08:
    // 0x1d9e08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d9e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e0c:
    // 0x1d9e0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d9e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e10:
    // 0x1d9e10: 0xc0927d2  jal         func_249F48
label_1d9e14:
    if (ctx->pc == 0x1D9E14u) {
        ctx->pc = 0x1D9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E10u;
        // 0x1d9e14: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E18u;
        goto label_1d9e18;
    }
    ctx->pc = 0x1D9E10u;
    SET_GPR_U32(ctx, 31, 0x1D9E18u);
    ctx->pc = 0x1D9E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E10u;
    // 0x1d9e14: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249F48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249F48u, 0x1D9E10u, 0x1D9E18u)) {
        return;
    }
    ctx->pc = 0x1D9E18u;
label_1d9e18:
    // 0x1d9e18: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1d9e18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e1c:
    // 0x1d9e1c: 0x8e099e10  lw          $t1, -0x61F0($s0)
    ctx->pc = 0x1d9e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942224)));
label_1d9e20:
    // 0x1d9e20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d9e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e24:
    // 0x1d9e24: 0x8fa80114  lw          $t0, 0x114($sp)
    ctx->pc = 0x1d9e24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_1d9e28:
    // 0x1d9e28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1d9e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e2c:
    // 0x1d9e2c: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x1d9e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_1d9e30:
    // 0x1d9e30: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1d9e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e34:
    // 0x1d9e34: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1d9e34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1d9e38:
    // 0x1d9e38: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1d9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1d9e3c:
    // 0x1d9e3c: 0x40f809  jalr        $v0
label_1d9e40:
    if (ctx->pc == 0x1D9E40u) {
        ctx->pc = 0x1D9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E3Cu;
        // 0x1d9e40: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E44u;
        goto label_1d9e44;
    }
    ctx->pc = 0x1D9E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9E44u);
        ctx->pc = 0x1D9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E3Cu;
        // 0x1d9e40: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E3Cu, 0x1D9E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9E44u;
label_1d9e44:
    // 0x1d9e44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d9e44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e48:
    // 0x1d9e48: 0xc0817e6  jal         func_205F98
label_1d9e4c:
    if (ctx->pc == 0x1D9E4Cu) {
        ctx->pc = 0x1D9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E48u;
        // 0x1d9e4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E50u;
        goto label_1d9e50;
    }
    ctx->pc = 0x1D9E48u;
    SET_GPR_U32(ctx, 31, 0x1D9E50u);
    ctx->pc = 0x1D9E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E48u;
    // 0x1d9e4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F98u, 0x1D9E48u, 0x1D9E50u)) {
        return;
    }
    ctx->pc = 0x1D9E50u;
label_1d9e50:
    // 0x1d9e50: 0xc0808b8  jal         func_2022E0
label_1d9e54:
    if (ctx->pc == 0x1D9E54u) {
        ctx->pc = 0x1D9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E50u;
        // 0x1d9e54: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E58u;
        goto label_1d9e58;
    }
    ctx->pc = 0x1D9E50u;
    SET_GPR_U32(ctx, 31, 0x1D9E58u);
    ctx->pc = 0x1D9E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E50u;
    // 0x1d9e54: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D9E50u, 0x1D9E58u)) {
        return;
    }
    ctx->pc = 0x1D9E58u;
label_1d9e58:
    // 0x1d9e58: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_1d9e5c:
    if (ctx->pc == 0x1D9E5Cu) {
        ctx->pc = 0x1D9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E58u;
        // 0x1d9e5c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E60u;
        goto label_1d9e60;
    }
    ctx->pc = 0x1D9E58u;
    {
        const bool branch_taken_0x1d9e58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E58u;
        // 0x1d9e5c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e58) {
            ctx->pc = 0x1D9EACu;
            goto label_1d9eac;
        }
    }
    ctx->pc = 0x1D9E60u;
label_1d9e60:
    // 0x1d9e60: 0x2450108c  addiu       $s0, $v0, 0x108C
    ctx->pc = 0x1d9e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_1d9e64:
    // 0x1d9e64: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1d9e68:
    // 0x1d9e68: 0x40f809  jalr        $v0
label_1d9e6c:
    if (ctx->pc == 0x1D9E6Cu) {
        ctx->pc = 0x1D9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E68u;
        // 0x1d9e6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E70u;
        goto label_1d9e70;
    }
    ctx->pc = 0x1D9E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9E70u);
        ctx->pc = 0x1D9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E68u;
        // 0x1d9e6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E68u, 0x1D9E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9E70u;
label_1d9e70:
    // 0x1d9e70: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_1d9e74:
    if (ctx->pc == 0x1D9E74u) {
        ctx->pc = 0x1D9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E70u;
        // 0x1d9e74: 0xae800010  sw          $zero, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E78u;
        goto label_1d9e78;
    }
    ctx->pc = 0x1D9E70u;
    {
        const bool branch_taken_0x1d9e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9e70) {
            ctx->pc = 0x1D9E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9E70u;
            // 0x1d9e74: 0xae800010  sw          $zero, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9EB0u;
            goto label_1d9eb0;
        }
    }
    ctx->pc = 0x1D9E78u;
label_1d9e78:
    // 0x1d9e78: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1d9e7c:
    // 0x1d9e7c: 0x40f809  jalr        $v0
label_1d9e80:
    if (ctx->pc == 0x1D9E80u) {
        ctx->pc = 0x1D9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E7Cu;
        // 0x1d9e80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E84u;
        goto label_1d9e84;
    }
    ctx->pc = 0x1D9E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9E84u);
        ctx->pc = 0x1D9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E7Cu;
        // 0x1d9e80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E7Cu, 0x1D9E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9E84u;
label_1d9e84:
    // 0x1d9e84: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1d9e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d9e88:
    // 0x1d9e88: 0xc0808f0  jal         func_2023C0
label_1d9e8c:
    if (ctx->pc == 0x1D9E8Cu) {
        ctx->pc = 0x1D9E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E88u;
        // 0x1d9e8c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E90u;
        goto label_1d9e90;
    }
    ctx->pc = 0x1D9E88u;
    SET_GPR_U32(ctx, 31, 0x1D9E90u);
    ctx->pc = 0x1D9E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E88u;
    // 0x1d9e8c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1D9E88u, 0x1D9E90u)) {
        return;
    }
    ctx->pc = 0x1D9E90u;
label_1d9e90:
    // 0x1d9e90: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x1d9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_1d9e94:
    // 0x1d9e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e98:
    // 0x1d9e98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d9e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d9e9c:
    // 0x1d9e9c: 0x40f809  jalr        $v0
label_1d9ea0:
    if (ctx->pc == 0x1D9EA0u) {
        ctx->pc = 0x1D9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E9Cu;
        // 0x1d9ea0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9EA4u;
        goto label_1d9ea4;
    }
    ctx->pc = 0x1D9E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9EA4u);
        ctx->pc = 0x1D9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E9Cu;
        // 0x1d9ea0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E9Cu, 0x1D9EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9EA4u;
label_1d9ea4:
    // 0x1d9ea4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d9ea8:
    if (ctx->pc == 0x1D9EA8u) {
        ctx->pc = 0x1D9EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EA4u;
        // 0x1d9ea8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9EACu;
        goto label_1d9eac;
    }
    ctx->pc = 0x1D9EA4u;
    {
        const bool branch_taken_0x1d9ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EA4u;
        // 0x1d9ea8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ea4) {
            ctx->pc = 0x1D9EB4u;
            goto label_1d9eb4;
        }
    }
    ctx->pc = 0x1D9EACu;
label_1d9eac:
    // 0x1d9eac: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x1d9eacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_1d9eb0:
    // 0x1d9eb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d9eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d9eb4:
    // 0x1d9eb4: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1d9eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1d9eb8:
    // 0x1d9eb8: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1d9eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_1d9ebc:
    // 0x1d9ebc: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x1d9ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_1d9ec0:
    // 0x1d9ec0: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x1d9ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_1d9ec4:
    // 0x1d9ec4: 0xc0805bc  jal         func_2016F0
label_1d9ec8:
    if (ctx->pc == 0x1D9EC8u) {
        ctx->pc = 0x1D9EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EC4u;
        // 0x1d9ec8: 0xafa0010c  sw          $zero, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9ECCu;
        goto label_1d9ecc;
    }
    ctx->pc = 0x1D9EC4u;
    SET_GPR_U32(ctx, 31, 0x1D9ECCu);
    ctx->pc = 0x1D9EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EC4u;
    // 0x1d9ec8: 0xafa0010c  sw          $zero, 0x10C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2016F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2016F0u, 0x1D9EC4u, 0x1D9ECCu)) {
        return;
    }
    ctx->pc = 0x1D9ECCu;
label_1d9ecc:
    // 0x1d9ecc: 0x8ea59e10  lw          $a1, -0x61F0($s5)
    ctx->pc = 0x1d9eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294942224)));
label_1d9ed0:
    // 0x1d9ed0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1d9ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1d9ed4:
    // 0x1d9ed4: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x1d9ed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_1d9ed8:
    // 0x1d9ed8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1d9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1d9edc:
    // 0x1d9edc: 0x40f809  jalr        $v0
label_1d9ee0:
    if (ctx->pc == 0x1D9EE0u) {
        ctx->pc = 0x1D9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EDCu;
        // 0x1d9ee0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9EE4u;
        goto label_1d9ee4;
    }
    ctx->pc = 0x1D9EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9EE4u);
        ctx->pc = 0x1D9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EDCu;
        // 0x1d9ee0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9EDCu, 0x1D9EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9EE4u;
label_1d9ee4:
    // 0x1d9ee4: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1d9ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1d9ee8:
    // 0x1d9ee8: 0xc0808b8  jal         func_2022E0
label_1d9eec:
    if (ctx->pc == 0x1D9EECu) {
        ctx->pc = 0x1D9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EE8u;
        // 0x1d9eec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9EF0u;
        goto label_1d9ef0;
    }
    ctx->pc = 0x1D9EE8u;
    SET_GPR_U32(ctx, 31, 0x1D9EF0u);
    ctx->pc = 0x1D9EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EE8u;
    // 0x1d9eec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D9EE8u, 0x1D9EF0u)) {
        return;
    }
    ctx->pc = 0x1D9EF0u;
label_1d9ef0:
    // 0x1d9ef0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1d9ef4:
    if (ctx->pc == 0x1D9EF4u) {
        ctx->pc = 0x1D9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EF0u;
        // 0x1d9ef4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9EF8u;
        goto label_1d9ef8;
    }
    ctx->pc = 0x1D9EF0u;
    {
        const bool branch_taken_0x1d9ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EF0u;
        // 0x1d9ef4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ef0) {
            ctx->pc = 0x1D9F44u;
            goto label_1d9f44;
        }
    }
    ctx->pc = 0x1D9EF8u;
label_1d9ef8:
    // 0x1d9ef8: 0x2451108c  addiu       $s1, $v0, 0x108C
    ctx->pc = 0x1d9ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_1d9efc:
    // 0x1d9efc: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1d9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1d9f00:
    // 0x1d9f00: 0x40f809  jalr        $v0
label_1d9f04:
    if (ctx->pc == 0x1D9F04u) {
        ctx->pc = 0x1D9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F00u;
        // 0x1d9f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F08u;
        goto label_1d9f08;
    }
    ctx->pc = 0x1D9F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9F08u);
        ctx->pc = 0x1D9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F00u;
        // 0x1d9f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F00u, 0x1D9F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9F08u;
label_1d9f08:
    // 0x1d9f08: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_1d9f0c:
    if (ctx->pc == 0x1D9F0Cu) {
        ctx->pc = 0x1D9F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F08u;
        // 0x1d9f0c: 0xae800014  sw          $zero, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F10u;
        goto label_1d9f10;
    }
    ctx->pc = 0x1D9F08u;
    {
        const bool branch_taken_0x1d9f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9f08) {
            ctx->pc = 0x1D9F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9F08u;
            // 0x1d9f0c: 0xae800014  sw          $zero, 0x14($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9F48u;
            goto label_1d9f48;
        }
    }
    ctx->pc = 0x1D9F10u;
label_1d9f10:
    // 0x1d9f10: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1d9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1d9f14:
    // 0x1d9f14: 0x40f809  jalr        $v0
label_1d9f18:
    if (ctx->pc == 0x1D9F18u) {
        ctx->pc = 0x1D9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F14u;
        // 0x1d9f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F1Cu;
        goto label_1d9f1c;
    }
    ctx->pc = 0x1D9F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9F1Cu);
        ctx->pc = 0x1D9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F14u;
        // 0x1d9f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F14u, 0x1D9F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9F1Cu;
label_1d9f1c:
    // 0x1d9f1c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1d9f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d9f20:
    // 0x1d9f20: 0xc0808f0  jal         func_2023C0
label_1d9f24:
    if (ctx->pc == 0x1D9F24u) {
        ctx->pc = 0x1D9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F20u;
        // 0x1d9f24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F28u;
        goto label_1d9f28;
    }
    ctx->pc = 0x1D9F20u;
    SET_GPR_U32(ctx, 31, 0x1D9F28u);
    ctx->pc = 0x1D9F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9F20u;
    // 0x1d9f24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1D9F20u, 0x1D9F28u)) {
        return;
    }
    ctx->pc = 0x1D9F28u;
label_1d9f28:
    // 0x1d9f28: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x1d9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_1d9f2c:
    // 0x1d9f2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9f30:
    // 0x1d9f30: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d9f34:
    // 0x1d9f34: 0x40f809  jalr        $v0
label_1d9f38:
    if (ctx->pc == 0x1D9F38u) {
        ctx->pc = 0x1D9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F34u;
        // 0x1d9f38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F3Cu;
        goto label_1d9f3c;
    }
    ctx->pc = 0x1D9F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9F3Cu);
        ctx->pc = 0x1D9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F34u;
        // 0x1d9f38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F34u, 0x1D9F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9F3Cu;
label_1d9f3c:
    // 0x1d9f3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d9f40:
    if (ctx->pc == 0x1D9F40u) {
        ctx->pc = 0x1D9F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F3Cu;
        // 0x1d9f40: 0x8fa20114  lw          $v0, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F44u;
        goto label_1d9f44;
    }
    ctx->pc = 0x1D9F3Cu;
    {
        const bool branch_taken_0x1d9f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F3Cu;
        // 0x1d9f40: 0x8fa20114  lw          $v0, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f3c) {
            ctx->pc = 0x1D9F4Cu;
            goto label_1d9f4c;
        }
    }
    ctx->pc = 0x1D9F44u;
label_1d9f44:
    // 0x1d9f44: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x1d9f44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
label_1d9f48:
    // 0x1d9f48: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x1d9f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_1d9f4c:
    // 0x1d9f4c: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x1d9f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
label_1d9f50:
    // 0x1d9f50: 0x8ea39e10  lw          $v1, -0x61F0($s5)
    ctx->pc = 0x1d9f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294942224)));
label_1d9f54:
    // 0x1d9f54: 0xae830038  sw          $v1, 0x38($s4)
    ctx->pc = 0x1d9f54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 3));
label_1d9f58:
    // 0x1d9f58: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1d9f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d9f5c:
    // 0x1d9f5c: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x1d9f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1d9f60:
    // 0x1d9f60: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x1d9f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1d9f64:
    // 0x1d9f64: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x1d9f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1d9f68:
    // 0x1d9f68: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x1d9f68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1d9f6c:
    // 0x1d9f6c: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x1d9f6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1d9f70:
    // 0x1d9f70: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x1d9f70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1d9f74:
    // 0x1d9f74: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1d9f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_1d9f78:
    // 0x1d9f78: 0x3e00008  jr          $ra
label_1d9f7c:
    if (ctx->pc == 0x1D9F7Cu) {
        ctx->pc = 0x1D9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F78u;
        // 0x1d9f7c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F80u;
        goto label_1d9f80;
    }
    ctx->pc = 0x1D9F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F78u;
        // 0x1d9f7c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9F80u;
label_1d9f80:
    // 0x1d9f80: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1d9f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1d9f84:
    // 0x1d9f84: 0x0  nop
    ctx->pc = 0x1d9f84u;
    // NOP
    ctx->pc = 0x1d9f88u;
}
