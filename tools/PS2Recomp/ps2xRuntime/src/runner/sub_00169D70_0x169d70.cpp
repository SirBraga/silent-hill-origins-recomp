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

// Function: sub_00169D70
// Address: 0x169d70 - 0x169de0
void sub_00169D70_0x169d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169D70_0x169d70");
#endif

    switch (ctx->pc) {
        case 0x169d84u: goto label_169d84;
        case 0x169da4u: goto label_169da4;
        case 0x169dacu: goto label_169dac;
        case 0x169db4u: goto label_169db4;
        default: break;
    }

    ctx->pc = 0x169d70u;

    // 0x169d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169d74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x169d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x169d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169d7c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x169D7Cu;
    SET_GPR_U32(ctx, 31, 0x169D84u);
    ctx->pc = 0x169D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D7Cu;
    // 0x169d80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x169D7Cu, 0x169D84u)) {
        return;
    }
    ctx->pc = 0x169D84u;
label_169d84:
    // 0x169d84: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x169d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x169d88: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x169d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x169d8c: 0x24634490  addiu       $v1, $v1, 0x4490
    ctx->pc = 0x169d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17552));
    // 0x169d90: 0x24424448  addiu       $v0, $v0, 0x4448
    ctx->pc = 0x169d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17480));
    // 0x169d94: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x169d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x169d98: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x169d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x169d9c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x169D9Cu;
    SET_GPR_U32(ctx, 31, 0x169DA4u);
    ctx->pc = 0x169DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D9Cu;
    // 0x169da0: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x169D9Cu, 0x169DA4u)) {
        return;
    }
    ctx->pc = 0x169DA4u;
label_169da4:
    // 0x169da4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x169DA4u;
    SET_GPR_U32(ctx, 31, 0x169DACu);
    ctx->pc = 0x169DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169DA4u;
    // 0x169da8: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x169DA4u, 0x169DACu)) {
        return;
    }
    ctx->pc = 0x169DACu;
label_169dac:
    // 0x169dac: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x169DACu;
    SET_GPR_U32(ctx, 31, 0x169DB4u);
    ctx->pc = 0x169DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169DACu;
    // 0x169db0: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x169DACu, 0x169DB4u)) {
        return;
    }
    ctx->pc = 0x169DB4u;
label_169db4:
    // 0x169db4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x169db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169db8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169dbc: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x169dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x169dc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169dc4: 0xae040068  sw          $a0, 0x68($s0)
    ctx->pc = 0x169dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 4));
    // 0x169dc8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x169dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x169dcc: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x169dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x169dd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x169dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x169DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DD8u;
        // 0x169ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169DE0u;
}
