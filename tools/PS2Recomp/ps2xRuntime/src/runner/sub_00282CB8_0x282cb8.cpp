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

// Function: sub_00282CB8
// Address: 0x282cb8 - 0x282db8
void sub_00282CB8_0x282cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282CB8_0x282cb8");
#endif

    switch (ctx->pc) {
        case 0x282ce0u: goto label_282ce0;
        case 0x282d10u: goto label_282d10;
        case 0x282d34u: goto label_282d34;
        case 0x282d44u: goto label_282d44;
        case 0x282d54u: goto label_282d54;
        case 0x282d78u: goto label_282d78;
        case 0x282d9cu: goto label_282d9c;
        default: break;
    }

    ctx->pc = 0x282cb8u;

    // 0x282cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282cbc: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x282cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x282cc0: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x282cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x282cc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x282cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x282cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282ccc: 0x24c62f28  addiu       $a2, $a2, 0x2F28
    ctx->pc = 0x282cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12072));
    // 0x282cd0: 0x24e73018  addiu       $a3, $a3, 0x3018
    ctx->pc = 0x282cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12312));
    // 0x282cd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282cd8: 0xc0895e6  jal         func_225798
    ctx->pc = 0x282CD8u;
    SET_GPR_U32(ctx, 31, 0x282CE0u);
    ctx->pc = 0x282CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282CD8u;
    // 0x282cdc: 0x24050116  addiu       $a1, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x282CD8u, 0x282CE0u)) {
        return;
    }
    ctx->pc = 0x282CE0u;
label_282ce0:
    // 0x282ce0: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x282ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x282ce4: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x282ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x282ce8: 0xae02e6e0  sw          $v0, -0x1920($s0)
    ctx->pc = 0x282ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x67E6E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x67E6E0u, _value); } while (0);
    // 0x282cec: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x282cecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x282cf0: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x282cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x282cf4: 0x2610e6e0  addiu       $s0, $s0, -0x1920
    ctx->pc = 0x282cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960864));
    // 0x282cf8: 0x25083150  addiu       $t0, $t0, 0x3150
    ctx->pc = 0x282cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12624));
    // 0x282cfc: 0x24c63118  addiu       $a2, $a2, 0x3118
    ctx->pc = 0x282cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12568));
    // 0x282d00: 0x24e73130  addiu       $a3, $a3, 0x3130
    ctx->pc = 0x282d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12592));
    // 0x282d04: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x282d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x282d08: 0xc09579e  jal         func_255E78
    ctx->pc = 0x282D08u;
    SET_GPR_U32(ctx, 31, 0x282D10u);
    ctx->pc = 0x282D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D08u;
    // 0x282d0c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255E78u, 0x282D08u, 0x282D10u)) {
        return;
    }
    ctx->pc = 0x282D10u;
label_282d10:
    // 0x282d10: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x282d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x282d14: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x282d14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x282d18: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x282d18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x282d1c: 0x24c63370  addiu       $a2, $a2, 0x3370
    ctx->pc = 0x282d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13168));
    // 0x282d20: 0x24e73378  addiu       $a3, $a3, 0x3378
    ctx->pc = 0x282d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13176));
    // 0x282d24: 0x24a528d8  addiu       $a1, $a1, 0x28D8
    ctx->pc = 0x282d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10456));
    // 0x282d28: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x282d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x282d2c: 0xc0957c2  jal         func_255F08
    ctx->pc = 0x282D2Cu;
    SET_GPR_U32(ctx, 31, 0x282D34u);
    ctx->pc = 0x282D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D2Cu;
    // 0x282d30: 0x24040116  addiu       $a0, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F08u, 0x282D2Cu, 0x282D34u)) {
        return;
    }
    ctx->pc = 0x282D34u;
label_282d34:
    // 0x282d34: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x282d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x282d38: 0x24040116  addiu       $a0, $zero, 0x116
    ctx->pc = 0x282d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x282d3c: 0xc0957d0  jal         func_255F40
    ctx->pc = 0x282D3Cu;
    SET_GPR_U32(ctx, 31, 0x282D44u);
    ctx->pc = 0x282D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D3Cu;
    // 0x282d40: 0x24a53170  addiu       $a1, $a1, 0x3170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F40u, 0x282D3Cu, 0x282D44u)) {
        return;
    }
    ctx->pc = 0x282D44u;
label_282d44:
    // 0x282d44: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x282d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x282d48: 0x24040116  addiu       $a0, $zero, 0x116
    ctx->pc = 0x282d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x282d4c: 0xc0957da  jal         func_255F68
    ctx->pc = 0x282D4Cu;
    SET_GPR_U32(ctx, 31, 0x282D54u);
    ctx->pc = 0x282D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D4Cu;
    // 0x282d50: 0x24a53240  addiu       $a1, $a1, 0x3240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F68u, 0x282D4Cu, 0x282D54u)) {
        return;
    }
    ctx->pc = 0x282D54u;
label_282d54:
    // 0x282d54: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x282d54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x282d58: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x282d58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x282d5c: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x282d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x282d60: 0x24c63088  addiu       $a2, $a2, 0x3088
    ctx->pc = 0x282d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12424));
    // 0x282d64: 0x24e730a0  addiu       $a3, $a3, 0x30A0
    ctx->pc = 0x282d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12448));
    // 0x282d68: 0x25083110  addiu       $t0, $t0, 0x3110
    ctx->pc = 0x282d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12560));
    // 0x282d6c: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x282d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x282d70: 0xc095b24  jal         func_256C90
    ctx->pc = 0x282D70u;
    SET_GPR_U32(ctx, 31, 0x282D78u);
    ctx->pc = 0x282D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D70u;
    // 0x282d74: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C90u, 0x282D70u, 0x282D78u)) {
        return;
    }
    ctx->pc = 0x282D78u;
label_282d78:
    // 0x282d78: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x282d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x282d7c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x282d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x282d80: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x282d80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x282d84: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x282d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x282d88: 0x24a52790  addiu       $a1, $a1, 0x2790
    ctx->pc = 0x282d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10128));
    // 0x282d8c: 0x24c62660  addiu       $a2, $a2, 0x2660
    ctx->pc = 0x282d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9824));
    // 0x282d90: 0x24e732e0  addiu       $a3, $a3, 0x32E0
    ctx->pc = 0x282d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13024));
    // 0x282d94: 0xc095b36  jal         func_256CD8
    ctx->pc = 0x282D94u;
    SET_GPR_U32(ctx, 31, 0x282D9Cu);
    ctx->pc = 0x282D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D94u;
    // 0x282d98: 0x24040116  addiu       $a0, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256CD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256CD8u, 0x282D94u, 0x282D9Cu)) {
        return;
    }
    ctx->pc = 0x282D9Cu;
label_282d9c:
    // 0x282d9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x282d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282da8: 0x3e00008  jr          $ra
    ctx->pc = 0x282DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282DA8u;
        // 0x282dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282DB0u;
    // 0x282db0: 0xaf85c00c  sw          $a1, -0x3FF4($gp)
    ctx->pc = 0x282db0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950924), GPR_U32(ctx, 5));
    // 0x282db4: 0x0  nop
    ctx->pc = 0x282db4u;
    // NOP
    ctx->pc = 0x282db8u;
}
