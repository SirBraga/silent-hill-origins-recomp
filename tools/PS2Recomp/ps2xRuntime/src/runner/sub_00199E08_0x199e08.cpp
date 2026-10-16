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

// Function: sub_00199E08
// Address: 0x199e08 - 0x199ee8
void sub_00199E08_0x199e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199E08_0x199e08");
#endif

    switch (ctx->pc) {
        case 0x199e2cu: goto label_199e2c;
        case 0x199e34u: goto label_199e34;
        case 0x199e54u: goto label_199e54;
        case 0x199e64u: goto label_199e64;
        case 0x199e84u: goto label_199e84;
        case 0x199ea4u: goto label_199ea4;
        case 0x199ec4u: goto label_199ec4;
        default: break;
    }

    ctx->pc = 0x199e08u;

    // 0x199e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199e0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x199e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199e10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199e14: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x199e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x199e18: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x199E18u;
    {
        const bool branch_taken_0x199e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E18u;
        // 0x199e1c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e18) {
            ctx->pc = 0x199ED8u;
            goto label_199ed8;
        }
    }
    ctx->pc = 0x199E20u;
    // 0x199e20: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x199e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x199e24: 0xc08994a  jal         func_226528
    ctx->pc = 0x199E24u;
    SET_GPR_U32(ctx, 31, 0x199E2Cu);
    ctx->pc = 0x199E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E24u;
    // 0x199e28: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x199E24u, 0x199E2Cu)) {
        return;
    }
    ctx->pc = 0x199E2Cu;
label_199e2c:
    // 0x199e2c: 0xc076646  jal         func_1D9918
    ctx->pc = 0x199E2Cu;
    SET_GPR_U32(ctx, 31, 0x199E34u);
    ctx->pc = 0x199E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E2Cu;
    // 0x199e30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9918u, 0x199E2Cu, 0x199E34u)) {
        return;
    }
    ctx->pc = 0x199E34u;
label_199e34:
    // 0x199e34: 0x6a030037  ldl         $v1, 0x37($s0)
    ctx->pc = 0x199e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x199e38: 0x6e030030  ldr         $v1, 0x30($s0)
    ctx->pc = 0x199e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x199e3c: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x199e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x199e40: 0xb0430047  sdl         $v1, 0x47($v0)
    ctx->pc = 0x199e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199e44: 0xb4430040  sdr         $v1, 0x40($v0)
    ctx->pc = 0x199e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199e48: 0xac440048  sw          $a0, 0x48($v0)
    ctx->pc = 0x199e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 4));
    // 0x199e4c: 0xc076646  jal         func_1D9918
    ctx->pc = 0x199E4Cu;
    SET_GPR_U32(ctx, 31, 0x199E54u);
    ctx->pc = 0x1D9918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9918u, 0x199E4Cu, 0x199E54u)) {
        return;
    }
    ctx->pc = 0x199E54u;
label_199e54:
    // 0x199e54: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x199e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x199e58: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x199e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x199e5c: 0xc076646  jal         func_1D9918
    ctx->pc = 0x199E5Cu;
    SET_GPR_U32(ctx, 31, 0x199E64u);
    ctx->pc = 0x199E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E5Cu;
    // 0x199e60: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9918u, 0x199E5Cu, 0x199E64u)) {
        return;
    }
    ctx->pc = 0x199E64u;
label_199e64:
    // 0x199e64: 0x6a030017  ldl         $v1, 0x17($s0)
    ctx->pc = 0x199e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x199e68: 0x6e030010  ldr         $v1, 0x10($s0)
    ctx->pc = 0x199e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x199e6c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x199e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x199e70: 0xb043005f  sdl         $v1, 0x5F($v0)
    ctx->pc = 0x199e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199e74: 0xb4430058  sdr         $v1, 0x58($v0)
    ctx->pc = 0x199e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199e78: 0xac440060  sw          $a0, 0x60($v0)
    ctx->pc = 0x199e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 4));
    // 0x199e7c: 0xc076646  jal         func_1D9918
    ctx->pc = 0x199E7Cu;
    SET_GPR_U32(ctx, 31, 0x199E84u);
    ctx->pc = 0x1D9918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9918u, 0x199E7Cu, 0x199E84u)) {
        return;
    }
    ctx->pc = 0x199E84u;
label_199e84:
    // 0x199e84: 0x6a030027  ldl         $v1, 0x27($s0)
    ctx->pc = 0x199e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x199e88: 0x6e030020  ldr         $v1, 0x20($s0)
    ctx->pc = 0x199e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x199e8c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x199e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x199e90: 0xb043006b  sdl         $v1, 0x6B($v0)
    ctx->pc = 0x199e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199e94: 0xb4430064  sdr         $v1, 0x64($v0)
    ctx->pc = 0x199e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199e98: 0xac44006c  sw          $a0, 0x6C($v0)
    ctx->pc = 0x199e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 4));
    // 0x199e9c: 0xc076646  jal         func_1D9918
    ctx->pc = 0x199E9Cu;
    SET_GPR_U32(ctx, 31, 0x199EA4u);
    ctx->pc = 0x1D9918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9918u, 0x199E9Cu, 0x199EA4u)) {
        return;
    }
    ctx->pc = 0x199EA4u;
label_199ea4:
    // 0x199ea4: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x199ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x199ea8: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x199ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x199eac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x199eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x199eb0: 0xb0430077  sdl         $v1, 0x77($v0)
    ctx->pc = 0x199eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199eb4: 0xb4430070  sdr         $v1, 0x70($v0)
    ctx->pc = 0x199eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199eb8: 0xac440078  sw          $a0, 0x78($v0)
    ctx->pc = 0x199eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 4));
    // 0x199ebc: 0xc076646  jal         func_1D9918
    ctx->pc = 0x199EBCu;
    SET_GPR_U32(ctx, 31, 0x199EC4u);
    ctx->pc = 0x1D9918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9918u, 0x199EBCu, 0x199EC4u)) {
        return;
    }
    ctx->pc = 0x199EC4u;
label_199ec4:
    // 0x199ec4: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x199ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x199ec8: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x199ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x199ecc: 0xac430088  sw          $v1, 0x88($v0)
    ctx->pc = 0x199eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
    // 0x199ed0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199ed4: 0x0  nop
    ctx->pc = 0x199ed4u;
    // NOP
label_199ed8:
    // 0x199ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199edc: 0x3e00008  jr          $ra
    ctx->pc = 0x199EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EDCu;
        // 0x199ee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199EE4u;
    // 0x199ee4: 0x0  nop
    ctx->pc = 0x199ee4u;
    // NOP
    ctx->pc = 0x199ee8u;
}
