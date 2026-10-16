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

// Function: sub_00253210
// Address: 0x253210 - 0x253270
void sub_00253210_0x253210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253210_0x253210");
#endif

    switch (ctx->pc) {
        case 0x253250u: goto label_253250;
        case 0x25325cu: goto label_25325c;
        default: break;
    }

    ctx->pc = 0x253210u;

    // 0x253210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253214: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x253214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253218: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x253218u;
    {
        const bool branch_taken_0x253218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253218u;
        // 0x25321c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253218) {
            ctx->pc = 0x253238u;
            goto label_253238;
        }
    }
    ctx->pc = 0x253220u;
    // 0x253220: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x253220u;
    {
        const bool branch_taken_0x253220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x253220) {
            ctx->pc = 0x253224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253220u;
            // 0x253224: 0x2402012a  addiu       $v0, $zero, 0x12A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253240u;
            goto label_253240;
        }
    }
    ctx->pc = 0x253228u;
    // 0x253228: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x253228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25322c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25322cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x253230: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x253230u;
    {
        const bool branch_taken_0x253230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253230u;
        // 0x253234: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253230) {
            ctx->pc = 0x253260u;
            goto label_253260;
        }
    }
    ctx->pc = 0x253238u;
label_253238:
    // 0x253238: 0x2402012a  addiu       $v0, $zero, 0x12A
    ctx->pc = 0x253238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x25323c: 0x0  nop
    ctx->pc = 0x25323cu;
    // NOP
label_253240:
    // 0x253240: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x253240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x253244: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x253244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x253248: 0xc092848  jal         func_24A120
    ctx->pc = 0x253248u;
    SET_GPR_U32(ctx, 31, 0x253250u);
    ctx->pc = 0x25324Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253248u;
    // 0x25324c: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x253248u, 0x253250u)) {
        return;
    }
    ctx->pc = 0x253250u;
label_253250:
    // 0x253250: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x253250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253254: 0xc09281a  jal         func_24A068
    ctx->pc = 0x253254u;
    SET_GPR_U32(ctx, 31, 0x25325Cu);
    ctx->pc = 0x253258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253254u;
    // 0x253258: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x253254u, 0x25325Cu)) {
        return;
    }
    ctx->pc = 0x25325Cu;
label_25325c:
    // 0x25325c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25325cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253260:
    // 0x253260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x253260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253264: 0x3e00008  jr          $ra
    ctx->pc = 0x253264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253264u;
        // 0x253268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25326Cu;
    // 0x25326c: 0x0  nop
    ctx->pc = 0x25326cu;
    // NOP
    ctx->pc = 0x253270u;
}
