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

// Function: sub_00105650
// Address: 0x105650 - 0x105820
void sub_00105650_0x105650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105650_0x105650");
#endif

    switch (ctx->pc) {
        case 0x1056c8u: goto label_1056c8;
        case 0x1056d4u: goto label_1056d4;
        case 0x1056dcu: goto label_1056dc;
        case 0x10578cu: goto label_10578c;
        case 0x1057ccu: goto label_1057cc;
        case 0x1057dcu: goto label_1057dc;
        default: break;
    }

    ctx->pc = 0x105650u;

    // 0x105650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105654: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x105654u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x105658: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x105658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10565c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x105660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105664: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x105664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x105668: 0xe44d000c  swc1        $f13, 0xC($v0)
    ctx->pc = 0x105668u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x10566c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x10566cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x105670: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x105670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x105674: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x105674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x105678: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x105678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x10567c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x10567cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x105680: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x105680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x105684: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x105684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x105688: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x105688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10568c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x10568cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x105690: 0xb0620057  sdl         $v0, 0x57($v1)
    ctx->pc = 0x105690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x105694: 0xb4620050  sdr         $v0, 0x50($v1)
    ctx->pc = 0x105694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x105698: 0xac640058  sw          $a0, 0x58($v1)
    ctx->pc = 0x105698u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
    // 0x10569c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x10569cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1056a0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1056a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1056a4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1056a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1056a8: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1056a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1056ac: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1056acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1056b0: 0xac480070  sw          $t0, 0x70($v0)
    ctx->pc = 0x1056b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 8));
    // 0x1056b4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1056b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1056b8: 0xac690074  sw          $t1, 0x74($v1)
    ctx->pc = 0x1056b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 9));
    // 0x1056bc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1056bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1056c0: 0xc0aa2b6  jal         func_2A8AD8
    ctx->pc = 0x1056C0u;
    SET_GPR_U32(ctx, 31, 0x1056C8u);
    ctx->pc = 0x1056C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056C0u;
    // 0x1056c4: 0xac4a0078  sw          $t2, 0x78($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8AD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8AD8u, 0x1056C0u, 0x1056C8u)) {
        return;
    }
    ctx->pc = 0x1056C8u;
label_1056c8:
    // 0x1056c8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1056c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1056cc: 0xc0b5bec  jal         func_2D6FB0
    ctx->pc = 0x1056CCu;
    SET_GPR_U32(ctx, 31, 0x1056D4u);
    ctx->pc = 0x1056D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056CCu;
    // 0x1056d0: 0xac62005c  sw          $v0, 0x5C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6FB0u, 0x1056CCu, 0x1056D4u)) {
        return;
    }
    ctx->pc = 0x1056D4u;
label_1056d4:
    // 0x1056d4: 0xc0b5b70  jal         func_2D6DC0
    ctx->pc = 0x1056D4u;
    SET_GPR_U32(ctx, 31, 0x1056DCu);
    ctx->pc = 0x1056D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056D4u;
    // 0x1056d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6DC0u, 0x1056D4u, 0x1056DCu)) {
        return;
    }
    ctx->pc = 0x1056DCu;
label_1056dc:
    // 0x1056dc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1056dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1056e0: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1056e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1056e4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1056e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1056e8: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x1056e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1056ec: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x1056ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1056f0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1056f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1056f4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1056f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1056f8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1056f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1056fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1056fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x105700: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x105700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x105704: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x105704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x105708: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x105708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x10570c: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x10570cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x105710: 0x68460017  ldl         $a2, 0x17($v0)
    ctx->pc = 0x105710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x105714: 0x6c460010  ldr         $a2, 0x10($v0)
    ctx->pc = 0x105714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x105718: 0x6847001f  ldl         $a3, 0x1F($v0)
    ctx->pc = 0x105718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x10571c: 0x6c470018  ldr         $a3, 0x18($v0)
    ctx->pc = 0x10571cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x105720: 0xb0640017  sdl         $a0, 0x17($v1)
    ctx->pc = 0x105720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x105724: 0xb4640010  sdr         $a0, 0x10($v1)
    ctx->pc = 0x105724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x105728: 0xb065001f  sdl         $a1, 0x1F($v1)
    ctx->pc = 0x105728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10572c: 0xb4650018  sdr         $a1, 0x18($v1)
    ctx->pc = 0x10572cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x105730: 0xb0660027  sdl         $a2, 0x27($v1)
    ctx->pc = 0x105730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x105734: 0xb4660020  sdr         $a2, 0x20($v1)
    ctx->pc = 0x105734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x105738: 0xb067002f  sdl         $a3, 0x2F($v1)
    ctx->pc = 0x105738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10573c: 0xb4670028  sdr         $a3, 0x28($v1)
    ctx->pc = 0x10573cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x105740: 0x68440027  ldl         $a0, 0x27($v0)
    ctx->pc = 0x105740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x105744: 0x6c440020  ldr         $a0, 0x20($v0)
    ctx->pc = 0x105744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x105748: 0x6845002f  ldl         $a1, 0x2F($v0)
    ctx->pc = 0x105748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x10574c: 0x6c450028  ldr         $a1, 0x28($v0)
    ctx->pc = 0x10574cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x105750: 0x68460037  ldl         $a2, 0x37($v0)
    ctx->pc = 0x105750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x105754: 0x6c460030  ldr         $a2, 0x30($v0)
    ctx->pc = 0x105754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x105758: 0x6847003f  ldl         $a3, 0x3F($v0)
    ctx->pc = 0x105758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x10575c: 0x6c470038  ldr         $a3, 0x38($v0)
    ctx->pc = 0x10575cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x105760: 0xb0640037  sdl         $a0, 0x37($v1)
    ctx->pc = 0x105760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x105764: 0xb4640030  sdr         $a0, 0x30($v1)
    ctx->pc = 0x105764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x105768: 0xb065003f  sdl         $a1, 0x3F($v1)
    ctx->pc = 0x105768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10576c: 0xb4650038  sdr         $a1, 0x38($v1)
    ctx->pc = 0x10576cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x105770: 0xb0660047  sdl         $a2, 0x47($v1)
    ctx->pc = 0x105770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x105774: 0xb4660040  sdr         $a2, 0x40($v1)
    ctx->pc = 0x105774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x105778: 0xb067004f  sdl         $a3, 0x4F($v1)
    ctx->pc = 0x105778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10577c: 0xb4670048  sdr         $a3, 0x48($v1)
    ctx->pc = 0x10577cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x105780: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x105780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x105784: 0xc092d94  jal         func_24B650
    ctx->pc = 0x105784u;
    SET_GPR_U32(ctx, 31, 0x10578Cu);
    ctx->pc = 0x105788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105784u;
    // 0x105788: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x105784u, 0x10578Cu)) {
        return;
    }
    ctx->pc = 0x10578Cu;
label_10578c:
    // 0x10578c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x10578cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x105790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105794: 0x686b0047  ldl         $t3, 0x47($v1)
    ctx->pc = 0x105794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x105798: 0x6c6b0040  ldr         $t3, 0x40($v1)
    ctx->pc = 0x105798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x10579c: 0x8c6c0048  lw          $t4, 0x48($v1)
    ctx->pc = 0x10579cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1057a0: 0xb06b006b  sdl         $t3, 0x6B($v1)
    ctx->pc = 0x1057a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1057a4: 0xb46b0064  sdr         $t3, 0x64($v1)
    ctx->pc = 0x1057a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1057a8: 0xac6c006c  sw          $t4, 0x6C($v1)
    ctx->pc = 0x1057a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 12));
    // 0x1057ac: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1057acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1057b0: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1057b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1057b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1057b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1057b8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1057b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1057bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1057bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1057c0: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1057c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1057c4: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x1057C4u;
    SET_GPR_U32(ctx, 31, 0x1057CCu);
    ctx->pc = 0x1057C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1057C4u;
    // 0x1057c8: 0x8cc40060  lw          $a0, 0x60($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC18u, 0x1057C4u, 0x1057CCu)) {
        return;
    }
    ctx->pc = 0x1057CCu;
label_1057cc:
    // 0x1057cc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1057ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1057d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1057d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057d4: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x1057D4u;
    SET_GPR_U32(ctx, 31, 0x1057DCu);
    ctx->pc = 0x1057D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1057D4u;
    // 0x1057d8: 0x8c440060  lw          $a0, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC18u, 0x1057D4u, 0x1057DCu)) {
        return;
    }
    ctx->pc = 0x1057DCu;
label_1057dc:
    // 0x1057dc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1057dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1057e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1057e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1057e4: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x1057e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1057e8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1057e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1057ec: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1057ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1057f0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1057f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1057f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1057f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1057f8: 0x24620044  addiu       $v0, $v1, 0x44
    ctx->pc = 0x1057f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
    // 0x1057fc: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1057fcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
    // 0x105800: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x105800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x105804: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x105804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x105808: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x105808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x10580c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x10580cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x105810: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x105810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105814: 0x3e00008  jr          $ra
    ctx->pc = 0x105814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105814u;
        // 0x105818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10581Cu;
    // 0x10581c: 0x0  nop
    ctx->pc = 0x10581cu;
    // NOP
    ctx->pc = 0x105820u;
}
