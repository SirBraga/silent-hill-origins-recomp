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

// Function: sub_0014D308
// Address: 0x14d308 - 0x14d390
void sub_0014D308_0x14d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D308_0x14d308");
#endif

    switch (ctx->pc) {
        case 0x14d334u: goto label_14d334;
        case 0x14d37cu: goto label_14d37c;
        default: break;
    }

    ctx->pc = 0x14d308u;

    // 0x14d308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d30c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x14d30cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x14d310: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14d310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14d314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d318: 0x8ca39168  lw          $v1, -0x6E98($a1)
    ctx->pc = 0x14d318u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339168u));
    // 0x14d31c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x14d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x14d320: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x14d320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x14d324: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D324u;
    {
        const bool branch_taken_0x14d324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D324u;
        // 0x14d328: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d324) {
            ctx->pc = 0x14D33Cu;
            goto label_14d33c;
        }
    }
    ctx->pc = 0x14D32Cu;
    // 0x14d32c: 0xc053254  jal         func_14C950
    ctx->pc = 0x14D32Cu;
    SET_GPR_U32(ctx, 31, 0x14D334u);
    ctx->pc = 0x14D330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D32Cu;
    // 0x14d330: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14C950u, 0x14D32Cu, 0x14D334u)) {
        return;
    }
    ctx->pc = 0x14D334u;
label_14d334:
    // 0x14d334: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14D334u;
    {
        const bool branch_taken_0x14d334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D334u;
        // 0x14d338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d334) {
            ctx->pc = 0x14D370u;
            goto label_14d370;
        }
    }
    ctx->pc = 0x14D33Cu;
label_14d33c:
    // 0x14d33c: 0x6882000f  ldl         $v0, 0xF($a0)
    ctx->pc = 0x14d33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14d340: 0x6c820008  ldr         $v0, 0x8($a0)
    ctx->pc = 0x14d340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14d344: 0x68830017  ldl         $v1, 0x17($a0)
    ctx->pc = 0x14d344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14d348: 0x6c830010  ldr         $v1, 0x10($a0)
    ctx->pc = 0x14d348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14d34c: 0x6885001f  ldl         $a1, 0x1F($a0)
    ctx->pc = 0x14d34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14d350: 0x6c850018  ldr         $a1, 0x18($a0)
    ctx->pc = 0x14d350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x14d354: 0xb082003f  sdl         $v0, 0x3F($a0)
    ctx->pc = 0x14d354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d358: 0xb4820038  sdr         $v0, 0x38($a0)
    ctx->pc = 0x14d358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d35c: 0xb0830047  sdl         $v1, 0x47($a0)
    ctx->pc = 0x14d35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d360: 0xb4830040  sdr         $v1, 0x40($a0)
    ctx->pc = 0x14d360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d364: 0xb085004f  sdl         $a1, 0x4F($a0)
    ctx->pc = 0x14d364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d368: 0xb4850048  sdr         $a1, 0x48($a0)
    ctx->pc = 0x14d368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d36c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x14d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_14d370:
    // 0x14d370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d374: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x14D374u;
    SET_GPR_U32(ctx, 31, 0x14D37Cu);
    ctx->pc = 0x14D378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D374u;
    // 0x14d378: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x14D374u, 0x14D37Cu)) {
        return;
    }
    ctx->pc = 0x14D37Cu;
label_14d37c:
    // 0x14d37c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14d37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d384: 0x3e00008  jr          $ra
    ctx->pc = 0x14D384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D384u;
        // 0x14d388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D38Cu;
    // 0x14d38c: 0x0  nop
    ctx->pc = 0x14d38cu;
    // NOP
    ctx->pc = 0x14d390u;
}
