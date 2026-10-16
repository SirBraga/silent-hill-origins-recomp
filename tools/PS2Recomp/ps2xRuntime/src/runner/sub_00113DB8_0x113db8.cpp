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

// Function: sub_00113DB8
// Address: 0x113db8 - 0x113e48
void sub_00113DB8_0x113db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113DB8_0x113db8");
#endif

    switch (ctx->pc) {
        case 0x113dccu: goto label_113dcc;
        case 0x113e18u: goto label_113e18;
        default: break;
    }

    ctx->pc = 0x113db8u;

    // 0x113db8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113dbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x113dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x113dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113dc4: 0xc075d54  jal         func_1D7550
    ctx->pc = 0x113DC4u;
    SET_GPR_U32(ctx, 31, 0x113DCCu);
    ctx->pc = 0x113DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113DC4u;
    // 0x113dc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7550u, 0x113DC4u, 0x113DCCu)) {
        return;
    }
    ctx->pc = 0x113DCCu;
label_113dcc:
    // 0x113dcc: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x113DCCu;
    {
        const bool branch_taken_0x113dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113dcc) {
            ctx->pc = 0x113DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113DCCu;
            // 0x113dd0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113E34u;
            goto label_113e34;
        }
    }
    ctx->pc = 0x113DD4u;
    // 0x113dd4: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x113dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113dd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x113dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113ddc: 0x0  nop
    ctx->pc = 0x113ddcu;
    // NOP
    // 0x113de0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x113de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113de4: 0x0  nop
    ctx->pc = 0x113de4u;
    // NOP
    // 0x113de8: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x113DE8u;
    {
        const bool branch_taken_0x113de8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x113de8) {
            ctx->pc = 0x113DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113DE8u;
            // 0x113dec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113E34u;
            goto label_113e34;
        }
    }
    ctx->pc = 0x113DF0u;
    // 0x113df0: 0xc60000c8  lwc1        $f0, 0xC8($s0)
    ctx->pc = 0x113df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113df4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x113df4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113df8: 0x0  nop
    ctx->pc = 0x113df8u;
    // NOP
    // 0x113dfc: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x113DFCu;
    {
        const bool branch_taken_0x113dfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x113dfc) {
            ctx->pc = 0x113E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113DFCu;
            // 0x113e00: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113E34u;
            goto label_113e34;
        }
    }
    ctx->pc = 0x113E04u;
    // 0x113e04: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x113e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x113e08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113e0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x113e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x113e10: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x113E10u;
    SET_GPR_U32(ctx, 31, 0x113E18u);
    ctx->pc = 0x113E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E10u;
    // 0x113e14: 0x8c4400d8  lw          $a0, 0xD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x113E10u, 0x113E18u)) {
        return;
    }
    ctx->pc = 0x113E18u;
label_113e18:
    // 0x113e18: 0x6a0300d3  ldl         $v1, 0xD3($s0)
    ctx->pc = 0x113e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 211); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x113e1c: 0x6e0300cc  ldr         $v1, 0xCC($s0)
    ctx->pc = 0x113e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 204); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x113e20: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x113e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x113e24: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x113e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113e28: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x113e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113e2c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x113e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x113e30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x113e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_113e34:
    // 0x113e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113e38: 0x3e00008  jr          $ra
    ctx->pc = 0x113E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E38u;
        // 0x113e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113E40u;
    // 0x113e40: 0x0  nop
    ctx->pc = 0x113e40u;
    // NOP
    // 0x113e44: 0x0  nop
    ctx->pc = 0x113e44u;
    // NOP
    ctx->pc = 0x113e48u;
}
