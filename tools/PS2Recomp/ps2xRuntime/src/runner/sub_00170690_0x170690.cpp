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

// Function: sub_00170690
// Address: 0x170690 - 0x170940
void sub_00170690_0x170690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170690_0x170690");
#endif

    switch (ctx->pc) {
        case 0x1706bcu: goto label_1706bc;
        case 0x1706d0u: goto label_1706d0;
        case 0x1706f0u: goto label_1706f0;
        case 0x170788u: goto label_170788;
        case 0x170794u: goto label_170794;
        case 0x1707a0u: goto label_1707a0;
        case 0x1707bcu: goto label_1707bc;
        case 0x1707e0u: goto label_1707e0;
        case 0x1707f8u: goto label_1707f8;
        case 0x170858u: goto label_170858;
        case 0x170874u: goto label_170874;
        case 0x1708d8u: goto label_1708d8;
        case 0x1708f0u: goto label_1708f0;
        case 0x17090cu: goto label_17090c;
        default: break;
    }

    ctx->pc = 0x170690u;

    // 0x170690: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x170690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x170694: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x170694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x170698: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x170698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x17069c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17069cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1706a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1706a4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1706a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1706a8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1706a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1706ac: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1706acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1706b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1706b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1706b4: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x1706B4u;
    SET_GPR_U32(ctx, 31, 0x1706BCu);
    ctx->pc = 0x1706B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1706B4u;
    // 0x1706b8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x1706B4u, 0x1706BCu)) {
        return;
    }
    ctx->pc = 0x1706BCu;
label_1706bc:
    // 0x1706bc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1706bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1706c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1706c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706c4: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x1706c4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x1706c8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1706C8u;
    SET_GPR_U32(ctx, 31, 0x1706D0u);
    ctx->pc = 0x1706CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1706C8u;
    // 0x1706cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1706C8u, 0x1706D0u)) {
        return;
    }
    ctx->pc = 0x1706D0u;
label_1706d0:
    // 0x1706d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1706d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1706d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1706d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1706d8: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1706D8u;
    {
        const bool branch_taken_0x1706d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1706DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706D8u;
        // 0x1706dc: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706d8) {
            ctx->pc = 0x1707CCu;
            goto label_1707cc;
        }
    }
    ctx->pc = 0x1706E0u;
    // 0x1706e0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1706e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1706e4: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x1706e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1706e8: 0x26110090  addiu       $s1, $s0, 0x90
    ctx->pc = 0x1706e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1706ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1706ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1706f0:
    // 0x1706f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1706f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1706f4: 0x1455002c  bne         $v0, $s5, . + 4 + (0x2C << 2)
    ctx->pc = 0x1706F4u;
    {
        const bool branch_taken_0x1706f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x1706F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706F4u;
        // 0x1706f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706f4) {
            ctx->pc = 0x1707A8u;
            goto label_1707a8;
        }
    }
    ctx->pc = 0x1706FCu;
    // 0x1706fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1706fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170700: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x170700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x170704: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x170704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x170708: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x170708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17070c: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x17070cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x170710: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x170710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x170714: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x170714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x170718: 0x68680027  ldl         $t0, 0x27($v1)
    ctx->pc = 0x170718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x17071c: 0x6c680020  ldr         $t0, 0x20($v1)
    ctx->pc = 0x17071cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x170720: 0xb2020057  sdl         $v0, 0x57($s0)
    ctx->pc = 0x170720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170724: 0xb6020050  sdr         $v0, 0x50($s0)
    ctx->pc = 0x170724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170728: 0xb206005f  sdl         $a2, 0x5F($s0)
    ctx->pc = 0x170728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17072c: 0xb6060058  sdr         $a2, 0x58($s0)
    ctx->pc = 0x17072cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170730: 0xb2070067  sdl         $a3, 0x67($s0)
    ctx->pc = 0x170730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170734: 0xb6070060  sdr         $a3, 0x60($s0)
    ctx->pc = 0x170734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170738: 0xb208006f  sdl         $t0, 0x6F($s0)
    ctx->pc = 0x170738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17073c: 0xb6080068  sdr         $t0, 0x68($s0)
    ctx->pc = 0x17073cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170740: 0x6862002f  ldl         $v0, 0x2F($v1)
    ctx->pc = 0x170740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x170744: 0x6c620028  ldr         $v0, 0x28($v1)
    ctx->pc = 0x170744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x170748: 0x68660037  ldl         $a2, 0x37($v1)
    ctx->pc = 0x170748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17074c: 0x6c660030  ldr         $a2, 0x30($v1)
    ctx->pc = 0x17074cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x170750: 0x6867003f  ldl         $a3, 0x3F($v1)
    ctx->pc = 0x170750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x170754: 0x6c670038  ldr         $a3, 0x38($v1)
    ctx->pc = 0x170754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x170758: 0x68680047  ldl         $t0, 0x47($v1)
    ctx->pc = 0x170758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x17075c: 0x6c680040  ldr         $t0, 0x40($v1)
    ctx->pc = 0x17075cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x170760: 0xb2020077  sdl         $v0, 0x77($s0)
    ctx->pc = 0x170760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170764: 0xb6020070  sdr         $v0, 0x70($s0)
    ctx->pc = 0x170764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170768: 0xb206007f  sdl         $a2, 0x7F($s0)
    ctx->pc = 0x170768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17076c: 0xb6060078  sdr         $a2, 0x78($s0)
    ctx->pc = 0x17076cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170770: 0xb2070087  sdl         $a3, 0x87($s0)
    ctx->pc = 0x170770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170774: 0xb6070080  sdr         $a3, 0x80($s0)
    ctx->pc = 0x170774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170778: 0xb208008f  sdl         $t0, 0x8F($s0)
    ctx->pc = 0x170778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17077c: 0xb6080088  sdr         $t0, 0x88($s0)
    ctx->pc = 0x17077cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170780: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x170780u;
    SET_GPR_U32(ctx, 31, 0x170788u);
    ctx->pc = 0x170784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170780u;
    // 0x170784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x170780u, 0x170788u)) {
        return;
    }
    ctx->pc = 0x170788u;
label_170788:
    // 0x170788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17078c: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x17078Cu;
    SET_GPR_U32(ctx, 31, 0x170794u);
    ctx->pc = 0x170790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17078Cu;
    // 0x170790: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x17078Cu, 0x170794u)) {
        return;
    }
    ctx->pc = 0x170794u;
label_170794:
    // 0x170794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170798: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x170798u;
    SET_GPR_U32(ctx, 31, 0x1707A0u);
    ctx->pc = 0x17079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170798u;
    // 0x17079c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x170798u, 0x1707A0u)) {
        return;
    }
    ctx->pc = 0x1707A0u;
label_1707a0:
    // 0x1707a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1707a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1707a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1707a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1707a8:
    // 0x1707a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1707a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1707ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1707acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1707b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1707b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1707b4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1707B4u;
    SET_GPR_U32(ctx, 31, 0x1707BCu);
    ctx->pc = 0x1707B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707B4u;
    // 0x1707b8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1707B4u, 0x1707BCu)) {
        return;
    }
    ctx->pc = 0x1707BCu;
label_1707bc:
    // 0x1707bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1707bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1707c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1707c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1707c4: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1707C4u;
    {
        const bool branch_taken_0x1707c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1707C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1707C4u;
        // 0x1707c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707c4) {
            ctx->pc = 0x1706F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1706f0;
        }
    }
    ctx->pc = 0x1707CCu;
label_1707cc:
    // 0x1707cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1707ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1707d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1707d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707d4: 0x8c46f758  lw          $a2, -0x8A8($v0)
    ctx->pc = 0x1707d4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF758u));
    // 0x1707d8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1707D8u;
    SET_GPR_U32(ctx, 31, 0x1707E0u);
    ctx->pc = 0x1707DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707D8u;
    // 0x1707dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1707D8u, 0x1707E0u)) {
        return;
    }
    ctx->pc = 0x1707E0u;
label_1707e0:
    // 0x1707e0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1707e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1707e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1707e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1707e8: 0x5040004d  beql        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x1707E8u;
    {
        const bool branch_taken_0x1707e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1707e8) {
            ctx->pc = 0x1707ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1707E8u;
            // 0x1707ec: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170920u;
            goto label_170920;
        }
    }
    ctx->pc = 0x1707F0u;
    // 0x1707f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1707f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1707f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1707f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1707f8:
    // 0x1707f8: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x1707f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1707fc: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1707FCu;
    {
        const bool branch_taken_0x1707fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1707FCu;
        // 0x170800: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707fc) {
            ctx->pc = 0x1708F0u;
            goto label_1708f0;
        }
    }
    ctx->pc = 0x170804u;
    // 0x170804: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x170804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x170808: 0x24425310  addiu       $v0, $v0, 0x5310
    ctx->pc = 0x170808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21264));
    // 0x17080c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170810: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x170810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170814: 0x800008  jr          $a0
    ctx->pc = 0x170814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17081Cu: goto label_17081c;
            case 0x170830u: goto label_170830;
            case 0x170840u: goto label_170840;
            case 0x170860u: goto label_170860;
            case 0x1708E0u: goto label_1708e0;
            case 0x1708F0u: goto label_1708f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170814u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17081Cu;
label_17081c:
    // 0x17081c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x17081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170820: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x170820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x170824: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x170824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x170828: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x170828u;
    {
        const bool branch_taken_0x170828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170828u;
        // 0x17082c: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170828) {
            ctx->pc = 0x1708F0u;
            goto label_1708f0;
        }
    }
    ctx->pc = 0x170830u;
label_170830:
    // 0x170830: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x170830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170834: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x170834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x170838: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x170838u;
    {
        const bool branch_taken_0x170838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170838u;
        // 0x17083c: 0x260500d4  addiu       $a1, $s0, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170838) {
            ctx->pc = 0x17084Cu;
            goto label_17084c;
        }
    }
    ctx->pc = 0x170840u;
label_170840:
    // 0x170840: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x170840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170844: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x170844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x170848: 0x260500dc  addiu       $a1, $s0, 0xDC
    ctx->pc = 0x170848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
label_17084c:
    // 0x17084c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17084cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170850: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x170850u;
    SET_GPR_U32(ctx, 31, 0x170858u);
    ctx->pc = 0x170854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170850u;
    // 0x170854: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x170850u, 0x170858u)) {
        return;
    }
    ctx->pc = 0x170858u;
label_170858:
    // 0x170858: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x170858u;
    {
        const bool branch_taken_0x170858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170858u;
        // 0x17085c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170858) {
            ctx->pc = 0x1708F4u;
            goto label_1708f4;
        }
    }
    ctx->pc = 0x170860u;
label_170860:
    // 0x170860: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x170860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x170864: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x170864u;
    {
        const bool branch_taken_0x170864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x170864) {
            ctx->pc = 0x170868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170864u;
            // 0x170868: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170878u;
            goto label_170878;
        }
    }
    ctx->pc = 0x17086Cu;
    // 0x17086c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17086Cu;
    SET_GPR_U32(ctx, 31, 0x170874u);
    ctx->pc = 0x170870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17086Cu;
    // 0x170870: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17086Cu, 0x170874u)) {
        return;
    }
    ctx->pc = 0x170874u;
label_170874:
    // 0x170874: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x170874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_170878:
    // 0x170878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x170878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17087c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17087cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170880: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x170880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x170884: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x170884u;
    {
        const bool branch_taken_0x170884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x170884) {
            ctx->pc = 0x170888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170884u;
            // 0x170888: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1708B0u;
            goto label_1708b0;
        }
    }
    ctx->pc = 0x17088Cu;
    // 0x17088c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17088Cu;
    {
        const bool branch_taken_0x17088c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x170890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17088Cu;
        // 0x170890: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17088c) {
            ctx->pc = 0x1708A8u;
            goto label_1708a8;
        }
    }
    ctx->pc = 0x170894u;
    // 0x170894: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x170894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170898: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x170898u;
    {
        const bool branch_taken_0x170898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170898u;
        // 0x17089c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170898) {
            ctx->pc = 0x1708B8u;
            goto label_1708b8;
        }
    }
    ctx->pc = 0x1708A0u;
    // 0x1708a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1708A0u;
    {
        const bool branch_taken_0x1708a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708A0u;
        // 0x1708a4: 0x8e0500ec  lw          $a1, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708a0) {
            ctx->pc = 0x1708C4u;
            goto label_1708c4;
        }
    }
    ctx->pc = 0x1708A8u;
label_1708a8:
    // 0x1708a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1708A8u;
    {
        const bool branch_taken_0x1708a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708A8u;
        // 0x1708ac: 0x2442f738  addiu       $v0, $v0, -0x8C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708a8) {
            ctx->pc = 0x1708BCu;
            goto label_1708bc;
        }
    }
    ctx->pc = 0x1708B0u;
label_1708b0:
    // 0x1708b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1708B0u;
    {
        const bool branch_taken_0x1708b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708B0u;
        // 0x1708b4: 0x2442f740  addiu       $v0, $v0, -0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708b0) {
            ctx->pc = 0x1708BCu;
            goto label_1708bc;
        }
    }
    ctx->pc = 0x1708B8u;
label_1708b8:
    // 0x1708b8: 0x2442f748  addiu       $v0, $v0, -0x8B8
    ctx->pc = 0x1708b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965064));
label_1708bc:
    // 0x1708bc: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x1708bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
    // 0x1708c0: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x1708c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_1708c4:
    // 0x1708c4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1708C4u;
    {
        const bool branch_taken_0x1708c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708C4u;
        // 0x1708c8: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708c4) {
            ctx->pc = 0x1708F0u;
            goto label_1708f0;
        }
    }
    ctx->pc = 0x1708CCu;
    // 0x1708cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1708ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1708d0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1708D0u;
    SET_GPR_U32(ctx, 31, 0x1708D8u);
    ctx->pc = 0x1708D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1708D0u;
    // 0x1708d4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1708D0u, 0x1708D8u)) {
        return;
    }
    ctx->pc = 0x1708D8u;
label_1708d8:
    // 0x1708d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1708D8u;
    {
        const bool branch_taken_0x1708d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708D8u;
        // 0x1708dc: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708d8) {
            ctx->pc = 0x1708F4u;
            goto label_1708f4;
        }
    }
    ctx->pc = 0x1708E0u;
label_1708e0:
    // 0x1708e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1708e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1708e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1708e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1708e8: 0xc05c316  jal         func_170C58
    ctx->pc = 0x1708E8u;
    SET_GPR_U32(ctx, 31, 0x1708F0u);
    ctx->pc = 0x1708ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1708E8u;
    // 0x1708ec: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x170C58u, 0x1708E8u, 0x1708F0u)) {
        return;
    }
    ctx->pc = 0x1708F0u;
label_1708f0:
    // 0x1708f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1708f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1708f4:
    // 0x1708f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1708f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1708f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1708f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1708fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1708fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170900: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x170900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170904: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x170904u;
    SET_GPR_U32(ctx, 31, 0x17090Cu);
    ctx->pc = 0x170908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170904u;
    // 0x170908: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x170904u, 0x17090Cu)) {
        return;
    }
    ctx->pc = 0x17090Cu;
label_17090c:
    // 0x17090c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170910: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x170910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170914: 0x5460ffb8  bnel        $v1, $zero, . + 4 + (-0x48 << 2)
    ctx->pc = 0x170914u;
    {
        const bool branch_taken_0x170914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x170914) {
            ctx->pc = 0x170918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170914u;
            // 0x170918: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1707F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1707f8;
        }
    }
    ctx->pc = 0x17091Cu;
    // 0x17091c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x17091cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_170920:
    // 0x170920: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x170920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x170924: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x170924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x170928: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x170928u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17092c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17092cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170930: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x170930u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170934: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x170934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170938: 0x3e00008  jr          $ra
    ctx->pc = 0x170938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170938u;
        // 0x17093c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170940u;
}
