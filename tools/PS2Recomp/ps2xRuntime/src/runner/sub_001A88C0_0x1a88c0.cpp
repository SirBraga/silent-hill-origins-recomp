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

// Function: sub_001A88C0
// Address: 0x1a88c0 - 0x1a8968
void sub_001A88C0_0x1a88c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A88C0_0x1a88c0");
#endif

    switch (ctx->pc) {
        case 0x1a895cu: goto label_1a895c;
        default: break;
    }

    ctx->pc = 0x1a88c0u;

    // 0x1a88c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a88c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a88c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a88c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a88c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a88cc: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x1a88ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1a88d0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a88d4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A88D4u;
    {
        const bool branch_taken_0x1a88d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88D4u;
        // 0x1a88d8: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88d4) {
            ctx->pc = 0x1A895Cu;
            goto label_1a895c;
        }
    }
    ctx->pc = 0x1A88DCu;
    // 0x1a88dc: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x1a88dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a88e0: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x1a88e0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a88e4: 0x0  nop
    ctx->pc = 0x1a88e4u;
    // NOP
    // 0x1a88e8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1a88e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1a88ec: 0xc4630040  lwc1        $f3, 0x40($v1)
    ctx->pc = 0x1a88ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a88f0: 0x44882800  mtc1        $t0, $f5
    ctx->pc = 0x1a88f0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a88f4: 0x0  nop
    ctx->pc = 0x1a88f4u;
    // NOP
    // 0x1a88f8: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1a88f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1a88fc: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x1a88fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8900: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1a8900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1a8904: 0xc4620048  lwc1        $f2, 0x48($v1)
    ctx->pc = 0x1a8904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a8908: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a8908u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a890c: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x1a890cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x1a8910: 0x24848200  addiu       $a0, $a0, -0x7E00
    ctx->pc = 0x1a8910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935040));
    // 0x1a8914: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a8914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a8918: 0xac66001c  sw          $a2, 0x1C($v1)
    ctx->pc = 0x1a8918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
    // 0x1a891c: 0x0  nop
    ctx->pc = 0x1a891cu;
    // NOP
    // 0x1a8920: 0x0  nop
    ctx->pc = 0x1a8920u;
    // NOP
    // 0x1a8924: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x1a8924u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[4]);
    // 0x1a8928: 0xa4670014  sh          $a3, 0x14($v1)
    ctx->pc = 0x1a8928u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a892c: 0xa4680016  sh          $t0, 0x16($v1)
    ctx->pc = 0x1a892cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 8));
    // 0x1a8930: 0x0  nop
    ctx->pc = 0x1a8930u;
    // NOP
    // 0x1a8934: 0x0  nop
    ctx->pc = 0x1a8934u;
    // NOP
    // 0x1a8938: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x1a8938u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[5]);
    // 0x1a893c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a893cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a8940: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1a8940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a8944: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1a8944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a8948: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1a8948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a894c: 0xb0620027  sdl         $v0, 0x27($v1)
    ctx->pc = 0x1a894cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8950: 0xb4620020  sdr         $v0, 0x20($v1)
    ctx->pc = 0x1a8950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8954: 0xc06a300  jal         func_1A8C00
    ctx->pc = 0x1A8954u;
    SET_GPR_U32(ctx, 31, 0x1A895Cu);
    ctx->pc = 0x1A8958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8954u;
    // 0x1a8958: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A8C00u, 0x1A8954u, 0x1A895Cu)) {
        return;
    }
    ctx->pc = 0x1A895Cu;
label_1a895c:
    // 0x1a895c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a895cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8960: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8960u;
        // 0x1a8964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8968u;
}
