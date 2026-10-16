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

// Function: sub_001FF098
// Address: 0x1ff098 - 0x1ff0e8
void sub_001FF098_0x1ff098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF098_0x1ff098");
#endif

    ctx->pc = 0x1ff098u;

    // 0x1ff098: 0x3c0a005c  lui         $t2, 0x5C
    ctx->pc = 0x1ff098u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)92 << 16));
    // 0x1ff09c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1ff09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1ff0a0: 0x8d480128  lw          $t0, 0x128($t2)
    ctx->pc = 0x1ff0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x5C0128u));
    // 0x1ff0a4: 0x24422898  addiu       $v0, $v0, 0x2898
    ctx->pc = 0x1ff0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10392));
    // 0x1ff0a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ff0a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff0ac: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x1ff0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ff0b0: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x1ff0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1ff0b4: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x1ff0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ff0b8: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1ff0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ff0bc: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x1ff0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x1ff0c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ff0c4: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x1ff0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ff0c8: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x1ff0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ff0cc: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x1ff0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff0d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ff0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ff0d4: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x1ff0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff0d8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1ff0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1ff0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0DCu;
        // 0x1ff0e0: 0xad480128  sw          $t0, 0x128($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 296), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF0E4u;
    // 0x1ff0e4: 0x0  nop
    ctx->pc = 0x1ff0e4u;
    // NOP
    ctx->pc = 0x1ff0e8u;
}
