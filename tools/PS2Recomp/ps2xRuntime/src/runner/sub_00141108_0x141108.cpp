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

// Function: sub_00141108
// Address: 0x141108 - 0x1411d0
void sub_00141108_0x141108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141108_0x141108");
#endif

    switch (ctx->pc) {
        case 0x141140u: goto label_141140;
        case 0x141168u: goto label_141168;
        default: break;
    }

    ctx->pc = 0x141108u;

    // 0x141108: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x141108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x14110c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14110cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141110: 0x1443002d  bne         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x141110u;
    {
        const bool branch_taken_0x141110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x141114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141110u;
        // 0x141114: 0x3c080034  lui         $t0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141110) {
            ctx->pc = 0x1411C8u;
            goto label_1411c8;
        }
    }
    ctx->pc = 0x141118u;
    // 0x141118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14111c: 0x8d028428  lw          $v0, -0x7BD8($t0)
    ctx->pc = 0x14111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294935592)));
    // 0x141120: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x141120u;
    {
        const bool branch_taken_0x141120 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x141124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141120u;
        // 0x141124: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141120) {
            ctx->pc = 0x1411C8u;
            goto label_1411c8;
        }
    }
    ctx->pc = 0x141128u;
    // 0x141128: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x141128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x14112c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x14112cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141130: 0x24464fe0  addiu       $a2, $v0, 0x4FE0
    ctx->pc = 0x141130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
    // 0x141134: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x141134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141138: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x141138u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14113c: 0x0  nop
    ctx->pc = 0x14113cu;
    // NOP
label_141140:
    // 0x141140: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x141140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x141144: 0x5444001a  bnel        $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x141144u;
    {
        const bool branch_taken_0x141144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x141144) {
            ctx->pc = 0x141148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141144u;
            // 0x141148: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1411B0u;
            goto label_1411b0;
        }
    }
    ctx->pc = 0x14114Cu;
    // 0x14114c: 0x8d228428  lw          $v0, -0x7BD8($t1)
    ctx->pc = 0x14114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294935592)));
    // 0x141150: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x141150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x141154: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x141154u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x141158: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x141158u;
    {
        const bool branch_taken_0x141158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141158u;
        // 0x14115c: 0xad228428  sw          $v0, -0x7BD8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294935592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141158) {
            ctx->pc = 0x1411ACu;
            goto label_1411ac;
        }
    }
    ctx->pc = 0x141160u;
    // 0x141160: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x141160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x141164: 0x0  nop
    ctx->pc = 0x141164u;
    // NOP
label_141168:
    // 0x141168: 0x6862001b  ldl         $v0, 0x1B($v1)
    ctx->pc = 0x141168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14116c: 0x6c620014  ldr         $v0, 0x14($v1)
    ctx->pc = 0x14116cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x141170: 0x686c0023  ldl         $t4, 0x23($v1)
    ctx->pc = 0x141170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x141174: 0x6c6c001c  ldr         $t4, 0x1C($v1)
    ctx->pc = 0x141174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x141178: 0x8c6d0024  lw          $t5, 0x24($v1)
    ctx->pc = 0x141178u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x14117c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x14117cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x141180: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x141180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x141184: 0xb06c000f  sdl         $t4, 0xF($v1)
    ctx->pc = 0x141184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x141188: 0xb46c0008  sdr         $t4, 0x8($v1)
    ctx->pc = 0x141188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14118c: 0xac6d0010  sw          $t5, 0x10($v1)
    ctx->pc = 0x14118cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 13));
    // 0x141190: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x141190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x141194: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x141194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x141198: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x141198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x14119c: 0x8d028428  lw          $v0, -0x7BD8($t0)
    ctx->pc = 0x14119cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294935592)));
    // 0x1411a0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1411a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1411a4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1411A4u;
    {
        const bool branch_taken_0x1411a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1411A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411A4u;
        // 0x1411a8: 0x24e70014  addiu       $a3, $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411a4) {
            ctx->pc = 0x141168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141168;
        }
    }
    ctx->pc = 0x1411ACu;
label_1411ac:
    // 0x1411ac: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x1411acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1411b0:
    // 0x1411b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1411b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1411b4: 0x8d028428  lw          $v0, -0x7BD8($t0)
    ctx->pc = 0x1411b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294935592)));
    // 0x1411b8: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x1411b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x1411bc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1411bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1411c0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1411C0u;
    {
        const bool branch_taken_0x1411c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1411C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411C0u;
        // 0x1411c4: 0x24e70014  addiu       $a3, $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411c0) {
            ctx->pc = 0x141140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141140;
        }
    }
    ctx->pc = 0x1411C8u;
label_1411c8:
    // 0x1411c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1411C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1411C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1411D0u;
}
