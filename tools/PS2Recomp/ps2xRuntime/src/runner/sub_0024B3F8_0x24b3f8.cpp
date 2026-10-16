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

// Function: sub_0024B3F8
// Address: 0x24b3f8 - 0x24b4b8
void sub_0024B3F8_0x24b3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B3F8_0x24b3f8");
#endif

    switch (ctx->pc) {
        case 0x24b434u: goto label_24b434;
        case 0x24b480u: goto label_24b480;
        case 0x24b488u: goto label_24b488;
        case 0x24b490u: goto label_24b490;
        default: break;
    }

    ctx->pc = 0x24b3f8u;

    // 0x24b3f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24b3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24b3fc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24b3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24b400: 0xac253f60  sw          $a1, 0x3F60($at)
    ctx->pc = 0x24b400u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3F60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F60u, _value); } while (0);
    // 0x24b404: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24b404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x24b408: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x24b408u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x24b40c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b410: 0x8f858530  lw          $a1, -0x7AD0($gp)
    ctx->pc = 0x24b410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935856)));
    // 0x24b414: 0x8f878534  lw          $a3, -0x7ACC($gp)
    ctx->pc = 0x24b414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935860)));
    // 0x24b418: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x24b418u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x24b41c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x24b41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x24b420: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24b420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24b424: 0x250841a8  addiu       $t0, $t0, 0x41A8
    ctx->pc = 0x24b424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16808));
    // 0x24b428: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x24b428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24b42c: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x24B42Cu;
    SET_GPR_U32(ctx, 31, 0x24B434u);
    ctx->pc = 0x24B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B42Cu;
    // 0x24b430: 0x3529000d  ori         $t1, $t1, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x24B42Cu, 0x24B434u)) {
        return;
    }
    ctx->pc = 0x24B434u;
label_24b434:
    // 0x24b434: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24b434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x24b438: 0x8c843f60  lw          $a0, 0x3F60($a0)
    ctx->pc = 0x24b438u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3F60u));
    // 0x24b43c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24b440: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24b440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x24b444: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24b444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24b448: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B448u;
    {
        const bool branch_taken_0x24b448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B448u;
        // 0x24b44c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b448) {
            ctx->pc = 0x24B458u;
            goto label_24b458;
        }
    }
    ctx->pc = 0x24B450u;
    // 0x24b450: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24B450u;
    {
        const bool branch_taken_0x24b450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B450u;
        // 0x24b454: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b450) {
            ctx->pc = 0x24B4A4u;
            goto label_24b4a4;
        }
    }
    ctx->pc = 0x24B458u;
label_24b458:
    // 0x24b458: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24b458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24b45c: 0x2447b790  addiu       $a3, $v0, -0x4870
    ctx->pc = 0x24b45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948752));
    // 0x24b460: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x24b460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x24b464: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x24b464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x24b468: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x24b468u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6AB798u));
    // 0x24b46c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x24b46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24b470: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x24b470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24b474: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x24b474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x24b478: 0xc092c3a  jal         func_24B0E8
    ctx->pc = 0x24B478u;
    SET_GPR_U32(ctx, 31, 0x24B480u);
    ctx->pc = 0x24B47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B478u;
    // 0x24b47c: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B0E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B0E8u, 0x24B478u, 0x24B480u)) {
        return;
    }
    ctx->pc = 0x24B480u;
label_24b480:
    // 0x24b480: 0xc092c2e  jal         func_24B0B8
    ctx->pc = 0x24B480u;
    SET_GPR_U32(ctx, 31, 0x24B488u);
    ctx->pc = 0x24B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B480u;
    // 0x24b484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B0B8u, 0x24B480u, 0x24B488u)) {
        return;
    }
    ctx->pc = 0x24B488u;
label_24b488:
    // 0x24b488: 0xc092d3c  jal         func_24B4F0
    ctx->pc = 0x24B488u;
    SET_GPR_U32(ctx, 31, 0x24B490u);
    ctx->pc = 0x24B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B488u;
    // 0x24b48c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B4F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B4F0u, 0x24B488u, 0x24B490u)) {
        return;
    }
    ctx->pc = 0x24B490u;
label_24b490:
    // 0x24b490: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24b490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24b494: 0x8c633f64  lw          $v1, 0x3F64($v1)
    ctx->pc = 0x24b494u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F64u));
    // 0x24b498: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24b498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24b49c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24b49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24b4a0: 0xac233f64  sw          $v1, 0x3F64($at)
    ctx->pc = 0x24b4a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F64u, _value); } while (0);
label_24b4a4:
    // 0x24b4a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24b4a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b4a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24b4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b4ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24b4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x24B4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4B0u;
        // 0x24b4b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B4B8u;
}
