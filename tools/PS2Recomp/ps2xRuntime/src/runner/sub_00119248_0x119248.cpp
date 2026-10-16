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

// Function: sub_00119248
// Address: 0x119248 - 0x1192e0
void sub_00119248_0x119248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119248_0x119248");
#endif

    switch (ctx->pc) {
        case 0x119288u: goto label_119288;
        default: break;
    }

    ctx->pc = 0x119248u;

    // 0x119248: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11924c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x119250: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x119250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119254: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x119254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x119258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11925c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11925cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119260: 0x262401e8  addiu       $a0, $s1, 0x1E8
    ctx->pc = 0x119260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 488));
    // 0x119264: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x119264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x119268: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x119268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11926c: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x11926cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x119270: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x119270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x119274: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x119274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119278: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x119278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11927c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x11927cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x119280: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x119280u;
    SET_GPR_U32(ctx, 31, 0x119288u);
    ctx->pc = 0x119284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119280u;
    // 0x119284: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x119280u, 0x119288u)) {
        return;
    }
    ctx->pc = 0x119288u;
label_119288:
    // 0x119288: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x119288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11928c: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x11928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x119290: 0xc62001e8  lwc1        $f0, 0x1E8($s1)
    ctx->pc = 0x119290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119294: 0xc62201ec  lwc1        $f2, 0x1EC($s1)
    ctx->pc = 0x119294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119298: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x119298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11929c: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x11929cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1192a0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1192a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1192a4: 0xc62101f0  lwc1        $f1, 0x1F0($s1)
    ctx->pc = 0x1192a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1192a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1192a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1192ac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1192acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1192b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1192b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1192b4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1192b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1192b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1192b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1192bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1192bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1192c0: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x1192c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x1192c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1192c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1192c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1192C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1192CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192C8u;
        // 0x1192cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1192C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1192D0u;
    // 0x1192d0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1192d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1192d4: 0x0  nop
    ctx->pc = 0x1192d4u;
    // NOP
    // 0x1192d8: 0x0  nop
    ctx->pc = 0x1192d8u;
    // NOP
    // 0x1192dc: 0x0  nop
    ctx->pc = 0x1192dcu;
    // NOP
    ctx->pc = 0x1192e0u;
}
