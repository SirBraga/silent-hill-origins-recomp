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

// Function: sub_00249428
// Address: 0x249428 - 0x249518
void sub_00249428_0x249428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249428_0x249428");
#endif

    switch (ctx->pc) {
        case 0x249448u: goto label_249448;
        default: break;
    }

    ctx->pc = 0x249428u;

    // 0x249428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24942c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x249430: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x249430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x249434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24943c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24943cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249440: 0xc092494  jal         func_249250
    ctx->pc = 0x249440u;
    SET_GPR_U32(ctx, 31, 0x249448u);
    ctx->pc = 0x249444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249440u;
    // 0x249444: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249250u, 0x249440u, 0x249448u)) {
        return;
    }
    ctx->pc = 0x249448u;
label_249448:
    // 0x249448: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x249448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24944c: 0x10e0002d  beqz        $a3, . + 4 + (0x2D << 2)
    ctx->pc = 0x24944Cu;
    {
        const bool branch_taken_0x24944c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x249450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24944Cu;
        // 0x249450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24944c) {
            ctx->pc = 0x249504u;
            goto label_249504;
        }
    }
    ctx->pc = 0x249454u;
    // 0x249454: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x249454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x249458: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x249458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24945c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x24945cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x249460: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x249460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x249464: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x249464u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x249468: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x249468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x24946c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x24946cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x249470: 0x2485ffe0  addiu       $a1, $a0, -0x20
    ctx->pc = 0x249470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x249474: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x249474u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x249478: 0x2482ffc0  addiu       $v0, $a0, -0x40
    ctx->pc = 0x249478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x24947c: 0x68c80007  ldl         $t0, 0x7($a2)
    ctx->pc = 0x24947cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x249480: 0x6cc80000  ldr         $t0, 0x0($a2)
    ctx->pc = 0x249480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x249484: 0x68c9000f  ldl         $t1, 0xF($a2)
    ctx->pc = 0x249484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x249488: 0x6cc90008  ldr         $t1, 0x8($a2)
    ctx->pc = 0x249488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x24948c: 0x68ca0017  ldl         $t2, 0x17($a2)
    ctx->pc = 0x24948cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x249490: 0x6cca0010  ldr         $t2, 0x10($a2)
    ctx->pc = 0x249490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x249494: 0x68cb001f  ldl         $t3, 0x1F($a2)
    ctx->pc = 0x249494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x249498: 0x6ccb0018  ldr         $t3, 0x18($a2)
    ctx->pc = 0x249498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x24949c: 0xb088ffe7  sdl         $t0, -0x19($a0)
    ctx->pc = 0x24949cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2494a0: 0xb488ffe0  sdr         $t0, -0x20($a0)
    ctx->pc = 0x2494a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2494a4: 0xb089ffef  sdl         $t1, -0x11($a0)
    ctx->pc = 0x2494a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2494a8: 0xb489ffe8  sdr         $t1, -0x18($a0)
    ctx->pc = 0x2494a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2494ac: 0xb08afff7  sdl         $t2, -0x9($a0)
    ctx->pc = 0x2494acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2494b0: 0xb48afff0  sdr         $t2, -0x10($a0)
    ctx->pc = 0x2494b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2494b4: 0xb08bffff  sdl         $t3, -0x1($a0)
    ctx->pc = 0x2494b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2494b8: 0xb48bfff8  sdr         $t3, -0x8($a0)
    ctx->pc = 0x2494b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2494bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2494bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2494c0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2494c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2494c4: 0xacc60020  sw          $a2, 0x20($a2)
    ctx->pc = 0x2494c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 6));
    // 0x2494c8: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2494c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2494cc: 0xac83ffe0  sw          $v1, -0x20($a0)
    ctx->pc = 0x2494ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967264), GPR_U32(ctx, 3));
    // 0x2494d0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2494d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2494d4: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x2494d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x2494d8: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x2494d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x2494dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2494dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2494e0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2494E0u;
    {
        const bool branch_taken_0x2494e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2494E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494E0u;
        // 0x2494e4: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494e0) {
            ctx->pc = 0x249500u;
            goto label_249500;
        }
    }
    ctx->pc = 0x2494E8u;
    // 0x2494e8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2494e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2494ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2494ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2494f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2494f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2494f4: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x2494f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x2494f8: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x2494f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x2494fc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2494fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_249500:
    // 0x249500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249504:
    // 0x249504: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x249504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x249508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24950c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24950cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249510: 0x3e00008  jr          $ra
    ctx->pc = 0x249510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249510u;
        // 0x249514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249518u;
}
