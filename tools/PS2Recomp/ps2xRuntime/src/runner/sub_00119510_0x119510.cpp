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

// Function: sub_00119510
// Address: 0x119510 - 0x1195e8
void sub_00119510_0x119510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119510_0x119510");
#endif

    switch (ctx->pc) {
        case 0x119558u: goto label_119558;
        case 0x119568u: goto label_119568;
        case 0x11959cu: goto label_11959c;
        case 0x1195acu: goto label_1195ac;
        default: break;
    }

    ctx->pc = 0x119510u;

    // 0x119510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119514: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x119514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x119518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11951c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11951cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119520: 0x8e0301e4  lw          $v1, 0x1E4($s0)
    ctx->pc = 0x119520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x119524: 0x460002a  bltz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x119524u;
    {
        const bool branch_taken_0x119524 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x119528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119524u;
        // 0x119528: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119524) {
            ctx->pc = 0x1195D0u;
            goto label_1195d0;
        }
    }
    ctx->pc = 0x11952Cu;
    // 0x11952c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11952Cu;
    {
        const bool branch_taken_0x11952c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11952c) {
            ctx->pc = 0x119530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11952Cu;
            // 0x119530: 0x8e0402b4  lw          $a0, 0x2B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119548u;
            goto label_119548;
        }
    }
    ctx->pc = 0x119534u;
    // 0x119534: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x119534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119538: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x119538u;
    {
        const bool branch_taken_0x119538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x119538) {
            ctx->pc = 0x11953Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119538u;
            // 0x11953c: 0x8e0402b4  lw          $a0, 0x2B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11958Cu;
            goto label_11958c;
        }
    }
    ctx->pc = 0x119540u;
    // 0x119540: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x119540u;
    {
        const bool branch_taken_0x119540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119540u;
        // 0x119544: 0x8e0202b4  lw          $v0, 0x2B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119540) {
            ctx->pc = 0x1195D4u;
            goto label_1195d4;
        }
    }
    ctx->pc = 0x119548u;
label_119548:
    // 0x119548: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x119548u;
    {
        const bool branch_taken_0x119548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x119548) {
            ctx->pc = 0x11954Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119548u;
            // 0x11954c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119560u;
            goto label_119560;
        }
    }
    ctx->pc = 0x119550u;
    // 0x119550: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x119550u;
    SET_GPR_U32(ctx, 31, 0x119558u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x119550u, 0x119558u)) {
        return;
    }
    ctx->pc = 0x119558u;
label_119558:
    // 0x119558: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x119558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x11955c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x11955cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_119560:
    // 0x119560: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x119560u;
    SET_GPR_U32(ctx, 31, 0x119568u);
    ctx->pc = 0x119564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119560u;
    // 0x119564: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x119560u, 0x119568u)) {
        return;
    }
    ctx->pc = 0x119568u;
label_119568:
    // 0x119568: 0xae0202b4  sw          $v0, 0x2B4($s0)
    ctx->pc = 0x119568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
    // 0x11956c: 0x6a0300f3  ldl         $v1, 0xF3($s0)
    ctx->pc = 0x11956cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x119570: 0x6e0300ec  ldr         $v1, 0xEC($s0)
    ctx->pc = 0x119570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x119574: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x119574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x119578: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x119578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11957c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x11957cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119580: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x119580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x119584: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x119584u;
    {
        const bool branch_taken_0x119584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119584u;
        // 0x119588: 0x8e0202b4  lw          $v0, 0x2B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119584) {
            ctx->pc = 0x1195D4u;
            goto label_1195d4;
        }
    }
    ctx->pc = 0x11958Cu;
label_11958c:
    // 0x11958c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11958Cu;
    {
        const bool branch_taken_0x11958c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11958c) {
            ctx->pc = 0x119590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11958Cu;
            // 0x119590: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1195A4u;
            goto label_1195a4;
        }
    }
    ctx->pc = 0x119594u;
    // 0x119594: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x119594u;
    SET_GPR_U32(ctx, 31, 0x11959Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x119594u, 0x11959Cu)) {
        return;
    }
    ctx->pc = 0x11959Cu;
label_11959c:
    // 0x11959c: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x11959cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x1195a0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1195a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1195a4:
    // 0x1195a4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1195A4u;
    SET_GPR_U32(ctx, 31, 0x1195ACu);
    ctx->pc = 0x1195A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195A4u;
    // 0x1195a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1195A4u, 0x1195ACu)) {
        return;
    }
    ctx->pc = 0x1195ACu;
label_1195ac:
    // 0x1195ac: 0xae0202b4  sw          $v0, 0x2B4($s0)
    ctx->pc = 0x1195acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
    // 0x1195b0: 0xc6000230  lwc1        $f0, 0x230($s0)
    ctx->pc = 0x1195b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1195b4: 0x6a0300f3  ldl         $v1, 0xF3($s0)
    ctx->pc = 0x1195b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1195b8: 0x6e0300ec  ldr         $v1, 0xEC($s0)
    ctx->pc = 0x1195b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1195bc: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x1195bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x1195c0: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1195c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1195c4: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1195c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1195c8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1195c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1195cc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1195ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1195d0:
    // 0x1195d0: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x1195d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_1195d4:
    // 0x1195d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1195d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1195d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1195d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1195dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1195DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1195E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195DCu;
        // 0x1195e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1195DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1195E4u;
    // 0x1195e4: 0x0  nop
    ctx->pc = 0x1195e4u;
    // NOP
    ctx->pc = 0x1195e8u;
}
