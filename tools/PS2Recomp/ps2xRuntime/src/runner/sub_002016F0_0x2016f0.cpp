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

// Function: sub_002016F0
// Address: 0x2016f0 - 0x201770
void sub_002016F0_0x2016f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002016F0_0x2016f0");
#endif

    switch (ctx->pc) {
        case 0x20170cu: goto label_20170c;
        case 0x20175cu: goto label_20175c;
        default: break;
    }

    ctx->pc = 0x2016f0u;

    // 0x2016f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2016f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2016f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2016f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2016f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2016f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2016fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x201700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201704: 0xc0805e6  jal         func_201798
    ctx->pc = 0x201704u;
    SET_GPR_U32(ctx, 31, 0x20170Cu);
    ctx->pc = 0x201708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201704u;
    // 0x201708: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201798u, 0x201704u, 0x20170Cu)) {
        return;
    }
    ctx->pc = 0x20170Cu;
label_20170c:
    // 0x20170c: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x20170cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x201710: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x201710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x201714: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x201714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x201718: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x201718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x20171c: 0xb202002f  sdl         $v0, 0x2F($s0)
    ctx->pc = 0x20171cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201720: 0xb6020028  sdr         $v0, 0x28($s0)
    ctx->pc = 0x201720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201724: 0xb2030037  sdl         $v1, 0x37($s0)
    ctx->pc = 0x201724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201728: 0xb6030030  sdr         $v1, 0x30($s0)
    ctx->pc = 0x201728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20172c: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x20172cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x201730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201734: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x201734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x201738: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x201738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x20173c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x20173cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x201740: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x201740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x201744: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x201744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x201748: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x201748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20174c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x201750: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x201750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x201754: 0xc0805dc  jal         func_201770
    ctx->pc = 0x201754u;
    SET_GPR_U32(ctx, 31, 0x20175Cu);
    ctx->pc = 0x201758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201754u;
    // 0x201758: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201770u, 0x201754u, 0x20175Cu)) {
        return;
    }
    ctx->pc = 0x20175Cu;
label_20175c:
    // 0x20175c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20175cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201768: 0x3e00008  jr          $ra
    ctx->pc = 0x201768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201768u;
        // 0x20176c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201770u;
}
