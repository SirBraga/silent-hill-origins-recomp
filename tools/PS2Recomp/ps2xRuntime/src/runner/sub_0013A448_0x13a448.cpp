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

// Function: sub_0013A448
// Address: 0x13a448 - 0x13a538
void sub_0013A448_0x13a448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A448_0x13a448");
#endif

    switch (ctx->pc) {
        case 0x13a480u: goto label_13a480;
        case 0x13a4a0u: goto label_13a4a0;
        case 0x13a4b4u: goto label_13a4b4;
        case 0x13a4bcu: goto label_13a4bc;
        case 0x13a4fcu: goto label_13a4fc;
        default: break;
    }

    ctx->pc = 0x13a448u;

    // 0x13a448: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13a448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13a44c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13a44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13a450: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13a450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13a454: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13a454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a458: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13a458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13a45c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x13a45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x13a460: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x13A460u;
    {
        const bool branch_taken_0x13a460 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A460u;
        // 0x13a464: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a460) {
            ctx->pc = 0x13A518u;
            goto label_13a518;
        }
    }
    ctx->pc = 0x13A468u;
    // 0x13a468: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x13a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x13a46c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13a46cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a470: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x13A470u;
    {
        const bool branch_taken_0x13a470 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x13A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A470u;
        // 0x13a474: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a470) {
            ctx->pc = 0x13A518u;
            goto label_13a518;
        }
    }
    ctx->pc = 0x13A478u;
    // 0x13a478: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x13a478u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13a47c: 0x26510048  addiu       $s1, $s2, 0x48
    ctx->pc = 0x13a47cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
label_13a480:
    // 0x13a480: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13a480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13a484: 0x14450021  bne         $v0, $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x13A484u;
    {
        const bool branch_taken_0x13a484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x13A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A484u;
        // 0x13a488: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a484) {
            ctx->pc = 0x13A50Cu;
            goto label_13a50c;
        }
    }
    ctx->pc = 0x13A48Cu;
    // 0x13a48c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x13a48cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13a490: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A490u;
    {
        const bool branch_taken_0x13a490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a490) {
            ctx->pc = 0x13A4B4u;
            goto label_13a4b4;
        }
    }
    ctx->pc = 0x13A498u;
    // 0x13a498: 0xc0979f6  jal         func_25E7D8
    ctx->pc = 0x13A498u;
    SET_GPR_U32(ctx, 31, 0x13A4A0u);
    ctx->pc = 0x13A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A498u;
    // 0x13a49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7D8u, 0x13A498u, 0x13A4A0u)) {
        return;
    }
    ctx->pc = 0x13A4A0u;
label_13a4a0:
    // 0x13a4a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A4A0u;
    {
        const bool branch_taken_0x13a4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a4a0) {
            ctx->pc = 0x13A4B4u;
            goto label_13a4b4;
        }
    }
    ctx->pc = 0x13A4A8u;
    // 0x13a4a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4ac: 0xc09799a  jal         func_25E668
    ctx->pc = 0x13A4ACu;
    SET_GPR_U32(ctx, 31, 0x13A4B4u);
    ctx->pc = 0x13A4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A4ACu;
    // 0x13a4b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E668u, 0x13A4ACu, 0x13A4B4u)) {
        return;
    }
    ctx->pc = 0x13A4B4u;
label_13a4b4:
    // 0x13a4b4: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x13A4B4u;
    SET_GPR_U32(ctx, 31, 0x13A4BCu);
    ctx->pc = 0x13A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A4B4u;
    // 0x13a4b8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x13A4B4u, 0x13A4BCu)) {
        return;
    }
    ctx->pc = 0x13A4BCu;
label_13a4bc:
    // 0x13a4bc: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x13a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x13a4c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13a4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4c4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x13a4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13a4c8: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x13a4c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13a4cc: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x13a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13a4d0: 0x68640043  ldl         $a0, 0x43($v1)
    ctx->pc = 0x13a4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13a4d4: 0x6c64003c  ldr         $a0, 0x3C($v1)
    ctx->pc = 0x13a4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13a4d8: 0x8c670044  lw          $a3, 0x44($v1)
    ctx->pc = 0x13a4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x13a4dc: 0xb2240007  sdl         $a0, 0x7($s1)
    ctx->pc = 0x13a4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13a4e0: 0xb6240000  sdr         $a0, 0x0($s1)
    ctx->pc = 0x13a4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13a4e4: 0xae270008  sw          $a3, 0x8($s1)
    ctx->pc = 0x13a4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
    // 0x13a4e8: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x13a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x13a4ec: 0x931018  mult        $v0, $a0, $s3
    ctx->pc = 0x13a4ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13a4f0: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x13a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13a4f4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x13A4F4u;
    SET_GPR_U32(ctx, 31, 0x13A4FCu);
    ctx->pc = 0x13A4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A4F4u;
    // 0x13a4f8: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x13A4F4u, 0x13A4FCu)) {
        return;
    }
    ctx->pc = 0x13A4FCu;
label_13a4fc:
    // 0x13a4fc: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x13a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x13a500: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13a500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13a504: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13A504u;
    {
        const bool branch_taken_0x13a504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A504u;
        // 0x13a508: 0xae430044  sw          $v1, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a504) {
            ctx->pc = 0x13A518u;
            goto label_13a518;
        }
    }
    ctx->pc = 0x13A50Cu;
label_13a50c:
    // 0x13a50c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x13a50cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13a510: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x13A510u;
    {
        const bool branch_taken_0x13a510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A510u;
        // 0x13a514: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a510) {
            ctx->pc = 0x13A480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a480;
        }
    }
    ctx->pc = 0x13A518u;
label_13a518:
    // 0x13a518: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13a518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a51c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13a51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a520: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13a520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a524: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x13a524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a52c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A52Cu;
        // 0x13a530: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A534u;
    // 0x13a534: 0x0  nop
    ctx->pc = 0x13a534u;
    // NOP
    ctx->pc = 0x13a538u;
}
