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

// Function: sub_001195E8
// Address: 0x1195e8 - 0x119748
void sub_001195E8_0x1195e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001195E8_0x1195e8");
#endif

    switch (ctx->pc) {
        case 0x119620u: goto label_119620;
        default: break;
    }

    ctx->pc = 0x1195e8u;

    // 0x1195e8: 0x8c8301e4  lw          $v1, 0x1E4($a0)
    ctx->pc = 0x1195e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x1195ec: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1195ECu;
    {
        const bool branch_taken_0x1195ec = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1195F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195ECu;
        // 0x1195f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195ec) {
            ctx->pc = 0x119610u;
            goto label_119610;
        }
    }
    ctx->pc = 0x1195F4u;
    // 0x1195f4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1195f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1195f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1195F8u;
    {
        const bool branch_taken_0x1195f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1195f8) {
            ctx->pc = 0x1195FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1195F8u;
            // 0x1195fc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119610u;
            goto label_119610;
        }
    }
    ctx->pc = 0x119600u;
    // 0x119600: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x119600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119604: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119604u;
    {
        const bool branch_taken_0x119604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x119608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119604u;
        // 0x119608: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119604) {
            ctx->pc = 0x119614u;
            goto label_119614;
        }
    }
    ctx->pc = 0x11960Cu;
    // 0x11960c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x11960cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_119610:
    // 0x119610: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x119610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_119614:
    // 0x119614: 0x3e00008  jr          $ra
    ctx->pc = 0x119614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11961Cu;
    // 0x11961c: 0x0  nop
    ctx->pc = 0x11961cu;
    // NOP
label_119620:
    // 0x119620: 0x8c8301e4  lw          $v1, 0x1E4($a0)
    ctx->pc = 0x119620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x119624: 0x4600040  bltz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x119624u;
    {
        const bool branch_taken_0x119624 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x119628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119624u;
        // 0x119628: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119624) {
            ctx->pc = 0x119728u;
            goto label_119728;
        }
    }
    ctx->pc = 0x11962Cu;
    // 0x11962c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11962Cu;
    {
        const bool branch_taken_0x11962c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11962Cu;
        // 0x119630: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11962c) {
            ctx->pc = 0x119648u;
            goto label_119648;
        }
    }
    ctx->pc = 0x119634u;
    // 0x119634: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x119634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119638: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x119638u;
    {
        const bool branch_taken_0x119638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119638u;
        // 0x11963c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119638) {
            ctx->pc = 0x1196B8u;
            goto label_1196b8;
        }
    }
    ctx->pc = 0x119640u;
    // 0x119640: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x119640u;
    {
        const bool branch_taken_0x119640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119640u;
        // 0x119644: 0x8c820280  lw          $v0, 0x280($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119640) {
            ctx->pc = 0x11972Cu;
            goto label_11972c;
        }
    }
    ctx->pc = 0x119648u;
label_119648:
    // 0x119648: 0x54c20038  bnel        $a2, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x119648u;
    {
        const bool branch_taken_0x119648 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x119648) {
            ctx->pc = 0x11964Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119648u;
            // 0x11964c: 0x8c820280  lw          $v0, 0x280($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11972Cu;
            goto label_11972c;
        }
    }
    ctx->pc = 0x119650u;
    // 0x119650: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x119650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x119654: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x119654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x119658: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x119658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11965c: 0xb08200db  sdl         $v0, 0xDB($a0)
    ctx->pc = 0x11965cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119660: 0xb48200d4  sdr         $v0, 0xD4($a0)
    ctx->pc = 0x119660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119664: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x119664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
    // 0x119668: 0x688200db  ldl         $v0, 0xDB($a0)
    ctx->pc = 0x119668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x11966c: 0x6c8200d4  ldr         $v0, 0xD4($a0)
    ctx->pc = 0x11966cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x119670: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x119670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x119674: 0xb08200e7  sdl         $v0, 0xE7($a0)
    ctx->pc = 0x119674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119678: 0xb48200e0  sdr         $v0, 0xE0($a0)
    ctx->pc = 0x119678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11967c: 0xac8300e8  sw          $v1, 0xE8($a0)
    ctx->pc = 0x11967cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 3));
    // 0x119680: 0x688700e7  ldl         $a3, 0xE7($a0)
    ctx->pc = 0x119680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x119684: 0x6c8700e0  ldr         $a3, 0xE0($a0)
    ctx->pc = 0x119684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x119688: 0x8c8200e8  lw          $v0, 0xE8($a0)
    ctx->pc = 0x119688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x11968c: 0xb08700f3  sdl         $a3, 0xF3($a0)
    ctx->pc = 0x11968cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119690: 0xb48700ec  sdr         $a3, 0xEC($a0)
    ctx->pc = 0x119690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119694: 0xac8200f4  sw          $v0, 0xF4($a0)
    ctx->pc = 0x119694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
    // 0x119698: 0x688600f3  ldl         $a2, 0xF3($a0)
    ctx->pc = 0x119698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11969c: 0x6c8600ec  ldr         $a2, 0xEC($a0)
    ctx->pc = 0x11969cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1196a0: 0x8c8700f4  lw          $a3, 0xF4($a0)
    ctx->pc = 0x1196a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x1196a4: 0xb08601c7  sdl         $a2, 0x1C7($a0)
    ctx->pc = 0x1196a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1196a8: 0xb48601c0  sdr         $a2, 0x1C0($a0)
    ctx->pc = 0x1196a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1196ac: 0xac8701c8  sw          $a3, 0x1C8($a0)
    ctx->pc = 0x1196acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 7));
    // 0x1196b0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1196B0u;
    {
        const bool branch_taken_0x1196b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196B0u;
        // 0x1196b4: 0x8c820280  lw          $v0, 0x280($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196b0) {
            ctx->pc = 0x11972Cu;
            goto label_11972c;
        }
    }
    ctx->pc = 0x1196B8u;
label_1196b8:
    // 0x1196b8: 0x54c2001c  bnel        $a2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1196B8u;
    {
        const bool branch_taken_0x1196b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1196b8) {
            ctx->pc = 0x1196BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1196B8u;
            // 0x1196bc: 0x8c820280  lw          $v0, 0x280($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11972Cu;
            goto label_11972c;
        }
    }
    ctx->pc = 0x1196C0u;
    // 0x1196c0: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x1196c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1196c4: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x1196c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1196c8: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1196c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1196cc: 0xb08600db  sdl         $a2, 0xDB($a0)
    ctx->pc = 0x1196ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1196d0: 0xb48600d4  sdr         $a2, 0xD4($a0)
    ctx->pc = 0x1196d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1196d4: 0xac8700dc  sw          $a3, 0xDC($a0)
    ctx->pc = 0x1196d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 7));
    // 0x1196d8: 0x688600db  ldl         $a2, 0xDB($a0)
    ctx->pc = 0x1196d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1196dc: 0x6c8600d4  ldr         $a2, 0xD4($a0)
    ctx->pc = 0x1196dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1196e0: 0x8c8700dc  lw          $a3, 0xDC($a0)
    ctx->pc = 0x1196e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1196e4: 0xb08600e7  sdl         $a2, 0xE7($a0)
    ctx->pc = 0x1196e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1196e8: 0xb48600e0  sdr         $a2, 0xE0($a0)
    ctx->pc = 0x1196e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1196ec: 0xac8700e8  sw          $a3, 0xE8($a0)
    ctx->pc = 0x1196ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 7));
    // 0x1196f0: 0x688600e7  ldl         $a2, 0xE7($a0)
    ctx->pc = 0x1196f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1196f4: 0x6c8600e0  ldr         $a2, 0xE0($a0)
    ctx->pc = 0x1196f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1196f8: 0x8c8700e8  lw          $a3, 0xE8($a0)
    ctx->pc = 0x1196f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x1196fc: 0xb08600f3  sdl         $a2, 0xF3($a0)
    ctx->pc = 0x1196fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119700: 0xb48600ec  sdr         $a2, 0xEC($a0)
    ctx->pc = 0x119700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119704: 0xac8700f4  sw          $a3, 0xF4($a0)
    ctx->pc = 0x119704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 7));
    // 0x119708: 0x688600f3  ldl         $a2, 0xF3($a0)
    ctx->pc = 0x119708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11970c: 0x6c8600ec  ldr         $a2, 0xEC($a0)
    ctx->pc = 0x11970cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x119710: 0x8c8700f4  lw          $a3, 0xF4($a0)
    ctx->pc = 0x119710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x119714: 0xb08601c7  sdl         $a2, 0x1C7($a0)
    ctx->pc = 0x119714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119718: 0xb48601c0  sdr         $a2, 0x1C0($a0)
    ctx->pc = 0x119718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11971c: 0xac8701c8  sw          $a3, 0x1C8($a0)
    ctx->pc = 0x11971cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 7));
    // 0x119720: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x119720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119724: 0xe4800230  swc1        $f0, 0x230($a0)
    ctx->pc = 0x119724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
label_119728:
    // 0x119728: 0x8c820280  lw          $v0, 0x280($a0)
    ctx->pc = 0x119728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
label_11972c:
    // 0x11972c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11972Cu;
    {
        const bool branch_taken_0x11972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11972Cu;
        // 0x119730: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11972c) {
            ctx->pc = 0x11973Cu;
            goto label_11973c;
        }
    }
    ctx->pc = 0x119734u;
    // 0x119734: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x119734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
    // 0x119738: 0xac820288  sw          $v0, 0x288($a0)
    ctx->pc = 0x119738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 648), GPR_U32(ctx, 2));
label_11973c:
    // 0x11973c: 0x3e00008  jr          $ra
    ctx->pc = 0x11973Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11973Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119744u;
    // 0x119744: 0x0  nop
    ctx->pc = 0x119744u;
    // NOP
    ctx->pc = 0x119748u;
}
