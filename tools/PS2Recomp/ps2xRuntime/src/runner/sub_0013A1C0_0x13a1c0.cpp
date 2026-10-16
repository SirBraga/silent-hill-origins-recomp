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

// Function: sub_0013A1C0
// Address: 0x13a1c0 - 0x13a238
void sub_0013A1C0_0x13a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A1C0_0x13a1c0");
#endif

    switch (ctx->pc) {
        case 0x13a1d4u: goto label_13a1d4;
        case 0x13a1e0u: goto label_13a1e0;
        case 0x13a1ecu: goto label_13a1ec;
        case 0x13a1f8u: goto label_13a1f8;
        case 0x13a204u: goto label_13a204;
        case 0x13a210u: goto label_13a210;
        case 0x13a21cu: goto label_13a21c;
        case 0x13a228u: goto label_13a228;
        default: break;
    }

    ctx->pc = 0x13a1c0u;

    // 0x13a1c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13a1c4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a1c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a1cc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13A1CCu;
    SET_GPR_U32(ctx, 31, 0x13A1D4u);
    ctx->pc = 0x13A1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A1CCu;
    // 0x13a1d0: 0x24844758  addiu       $a0, $a0, 0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13A1CCu, 0x13A1D4u)) {
        return;
    }
    ctx->pc = 0x13A1D4u;
label_13a1d4:
    // 0x13a1d4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a1d8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13A1D8u;
    SET_GPR_U32(ctx, 31, 0x13A1E0u);
    ctx->pc = 0x13A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A1D8u;
    // 0x13a1dc: 0x24844760  addiu       $a0, $a0, 0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13A1D8u, 0x13A1E0u)) {
        return;
    }
    ctx->pc = 0x13A1E0u;
label_13a1e0:
    // 0x13a1e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a1e4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13A1E4u;
    SET_GPR_U32(ctx, 31, 0x13A1ECu);
    ctx->pc = 0x13A1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A1E4u;
    // 0x13a1e8: 0x24844768  addiu       $a0, $a0, 0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13A1E4u, 0x13A1ECu)) {
        return;
    }
    ctx->pc = 0x13A1ECu;
label_13a1ec:
    // 0x13a1ec: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a1f0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13A1F0u;
    SET_GPR_U32(ctx, 31, 0x13A1F8u);
    ctx->pc = 0x13A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A1F0u;
    // 0x13a1f4: 0x24844770  addiu       $a0, $a0, 0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13A1F0u, 0x13A1F8u)) {
        return;
    }
    ctx->pc = 0x13A1F8u;
label_13a1f8:
    // 0x13a1f8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a1fc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13A1FCu;
    SET_GPR_U32(ctx, 31, 0x13A204u);
    ctx->pc = 0x13A200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A1FCu;
    // 0x13a200: 0x24844778  addiu       $a0, $a0, 0x4778 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13A1FCu, 0x13A204u)) {
        return;
    }
    ctx->pc = 0x13A204u;
label_13a204:
    // 0x13a204: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a208: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13A208u;
    SET_GPR_U32(ctx, 31, 0x13A210u);
    ctx->pc = 0x13A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A208u;
    // 0x13a20c: 0x24844780  addiu       $a0, $a0, 0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13A208u, 0x13A210u)) {
        return;
    }
    ctx->pc = 0x13A210u;
label_13a210:
    // 0x13a210: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a214: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13A214u;
    SET_GPR_U32(ctx, 31, 0x13A21Cu);
    ctx->pc = 0x13A218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A214u;
    // 0x13a218: 0x24844788  addiu       $a0, $a0, 0x4788 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13A214u, 0x13A21Cu)) {
        return;
    }
    ctx->pc = 0x13A21Cu;
label_13a21c:
    // 0x13a21c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a220: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13A220u;
    SET_GPR_U32(ctx, 31, 0x13A228u);
    ctx->pc = 0x13A224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A220u;
    // 0x13a224: 0x24844790  addiu       $a0, $a0, 0x4790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13A220u, 0x13A228u)) {
        return;
    }
    ctx->pc = 0x13A228u;
label_13a228:
    // 0x13a228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a22c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A22Cu;
        // 0x13a230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A234u;
    // 0x13a234: 0x0  nop
    ctx->pc = 0x13a234u;
    // NOP
    ctx->pc = 0x13a238u;
}
