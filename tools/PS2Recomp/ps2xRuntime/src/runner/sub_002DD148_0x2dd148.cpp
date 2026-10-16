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

// Function: sub_002DD148
// Address: 0x2dd148 - 0x2dd1b0
void sub_002DD148_0x2dd148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD148_0x2dd148");
#endif

    switch (ctx->pc) {
        case 0x2dd160u: goto label_2dd160;
        case 0x2dd170u: goto label_2dd170;
        default: break;
    }

    ctx->pc = 0x2dd148u;

    // 0x2dd148: 0x8f869020  lw          $a2, -0x6FE0($gp)
    ctx->pc = 0x2dd148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x2dd14c: 0x27889020  addiu       $t0, $gp, -0x6FE0
    ctx->pc = 0x2dd14cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938656));
    // 0x2dd150: 0x10c80011  beq         $a2, $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DD150u;
    {
        const bool branch_taken_0x2dd150 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x2dd150) {
            ctx->pc = 0x2DD198u;
            goto label_2dd198;
        }
    }
    ctx->pc = 0x2DD158u;
    // 0x2dd158: 0x8cc5fff4  lw          $a1, -0xC($a2)
    ctx->pc = 0x2dd158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967284)));
    // 0x2dd15c: 0x0  nop
    ctx->pc = 0x2dd15cu;
    // NOP
label_2dd160:
    // 0x2dd160: 0x24c7fff0  addiu       $a3, $a2, -0x10
    ctx->pc = 0x2dd160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x2dd164: 0x50a7000a  beql        $a1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2DD164u;
    {
        const bool branch_taken_0x2dd164 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x2dd164) {
            ctx->pc = 0x2DD168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD164u;
            // 0x2dd168: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD190u;
            goto label_2dd190;
        }
    }
    ctx->pc = 0x2DD16Cu;
    // 0x2dd16c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2dd16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2dd170:
    // 0x2dd170: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2dd170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2dd174: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD174u;
    {
        const bool branch_taken_0x2dd174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2dd174) {
            ctx->pc = 0x2DD178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD174u;
            // 0x2dd178: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD184u;
            goto label_2dd184;
        }
    }
    ctx->pc = 0x2DD17Cu;
    // 0x2dd17c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD17Cu;
        // 0x2dd180: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD184u;
label_2dd184:
    // 0x2dd184: 0x54a7fffa  bnel        $a1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DD184u;
    {
        const bool branch_taken_0x2dd184 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x2dd184) {
            ctx->pc = 0x2DD188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD184u;
            // 0x2dd188: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd170;
        }
    }
    ctx->pc = 0x2DD18Cu;
    // 0x2dd18c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2dd18cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2dd190:
    // 0x2dd190: 0x54c8fff3  bnel        $a2, $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2DD190u;
    {
        const bool branch_taken_0x2dd190 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x2dd190) {
            ctx->pc = 0x2DD194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD190u;
            // 0x2dd194: 0x8cc5fff4  lw          $a1, -0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd160;
        }
    }
    ctx->pc = 0x2DD198u;
label_2dd198:
    // 0x2dd198: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD198u;
        // 0x2dd19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD1A0u;
    // 0x2dd1a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2dd1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dd1a4: 0x0  nop
    ctx->pc = 0x2dd1a4u;
    // NOP
    // 0x2dd1a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2dd1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dd1ac: 0x0  nop
    ctx->pc = 0x2dd1acu;
    // NOP
    ctx->pc = 0x2dd1b0u;
}
