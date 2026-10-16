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

// Function: sub_00312208
// Address: 0x312208 - 0x312268
void sub_00312208_0x312208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312208_0x312208");
#endif

    switch (ctx->pc) {
        case 0x312208u: goto label_312208;
        case 0x31220cu: goto label_31220c;
        case 0x312210u: goto label_312210;
        case 0x312214u: goto label_312214;
        case 0x312218u: goto label_312218;
        case 0x31221cu: goto label_31221c;
        case 0x312220u: goto label_312220;
        case 0x312224u: goto label_312224;
        case 0x312228u: goto label_312228;
        case 0x31222cu: goto label_31222c;
        case 0x312230u: goto label_312230;
        case 0x312234u: goto label_312234;
        case 0x312238u: goto label_312238;
        case 0x31223cu: goto label_31223c;
        case 0x312240u: goto label_312240;
        case 0x312244u: goto label_312244;
        case 0x312248u: goto label_312248;
        case 0x31224cu: goto label_31224c;
        case 0x312250u: goto label_312250;
        case 0x312254u: goto label_312254;
        case 0x312258u: goto label_312258;
        case 0x31225cu: goto label_31225c;
        case 0x312260u: goto label_312260;
        case 0x312264u: goto label_312264;
        default: break;
    }

    ctx->pc = 0x312208u;

label_312208:
    // 0x312208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31220c:
    // 0x31220c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x31220cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_312210:
    // 0x312210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_312214:
    // 0x312214: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x312214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_312218:
    // 0x312218: 0x40f809  jalr        $v0
label_31221c:
    if (ctx->pc == 0x31221Cu) {
        ctx->pc = 0x31221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312218u;
        // 0x31221c: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312220u;
        goto label_312220;
    }
    ctx->pc = 0x312218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x312220u);
        ctx->pc = 0x31221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312218u;
        // 0x31221c: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312218u, 0x312220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x312220u;
label_312220:
    // 0x312220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x312220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_312224:
    // 0x312224: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_312228:
    if (ctx->pc == 0x312228u) {
        ctx->pc = 0x312228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312224u;
        // 0x312228: 0x8f838d94  lw          $v1, -0x726C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938004)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31222Cu;
        goto label_31222c;
    }
    ctx->pc = 0x312224u;
    {
        const bool branch_taken_0x312224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x312228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312224u;
        // 0x312228: 0x8f838d94  lw          $v1, -0x726C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312224) {
            ctx->pc = 0x312250u;
            goto label_312250;
        }
    }
    ctx->pc = 0x31222Cu;
label_31222c:
    // 0x31222c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_312230:
    // 0x312230: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_312234:
    if (ctx->pc == 0x312234u) {
        ctx->pc = 0x312238u;
        goto label_312238;
    }
    ctx->pc = 0x312230u;
    {
        const bool branch_taken_0x312230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x312230) {
            ctx->pc = 0x312240u;
            goto label_312240;
        }
    }
    ctx->pc = 0x312238u;
label_312238:
    // 0x312238: 0xc0c84d0  jal         func_321340
label_31223c:
    if (ctx->pc == 0x31223Cu) {
        ctx->pc = 0x31223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312238u;
        // 0x31223c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312240u;
        goto label_312240;
    }
    ctx->pc = 0x312238u;
    SET_GPR_U32(ctx, 31, 0x312240u);
    ctx->pc = 0x31223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312238u;
    // 0x31223c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x312238u, 0x312240u)) {
        return;
    }
    ctx->pc = 0x312240u;
label_312240:
    // 0x312240: 0xc0c8490  jal         func_321240
label_312244:
    if (ctx->pc == 0x312244u) {
        ctx->pc = 0x312248u;
        goto label_312248;
    }
    ctx->pc = 0x312240u;
    SET_GPR_U32(ctx, 31, 0x312248u);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x312240u, 0x312248u)) {
        return;
    }
    ctx->pc = 0x312248u;
label_312248:
    // 0x312248: 0x10000004  b           . + 4 + (0x4 << 2)
label_31224c:
    if (ctx->pc == 0x31224Cu) {
        ctx->pc = 0x31224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312248u;
        // 0x31224c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312250u;
        goto label_312250;
    }
    ctx->pc = 0x312248u;
    {
        const bool branch_taken_0x312248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312248u;
        // 0x31224c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312248) {
            ctx->pc = 0x31225Cu;
            goto label_31225c;
        }
    }
    ctx->pc = 0x312250u;
label_312250:
    // 0x312250: 0xc0c8458  jal         func_321160
label_312254:
    if (ctx->pc == 0x312254u) {
        ctx->pc = 0x312258u;
        goto label_312258;
    }
    ctx->pc = 0x312250u;
    SET_GPR_U32(ctx, 31, 0x312258u);
    ctx->pc = 0x321160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321160u, 0x312250u, 0x312258u)) {
        return;
    }
    ctx->pc = 0x312258u;
label_312258:
    // 0x312258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31225c:
    // 0x31225c: 0x3e00008  jr          $ra
label_312260:
    if (ctx->pc == 0x312260u) {
        ctx->pc = 0x312260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31225Cu;
        // 0x312260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312264u;
        goto label_312264;
    }
    ctx->pc = 0x31225Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31225Cu;
        // 0x312260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31225Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312264u;
label_312264:
    // 0x312264: 0x0  nop
    ctx->pc = 0x312264u;
    // NOP
    ctx->pc = 0x312268u;
}
