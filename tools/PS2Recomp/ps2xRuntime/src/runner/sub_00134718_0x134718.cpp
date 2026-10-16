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

// Function: sub_00134718
// Address: 0x134718 - 0x134c10
void sub_00134718_0x134718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134718_0x134718");
#endif

    switch (ctx->pc) {
        case 0x134754u: goto label_134754;
        case 0x134760u: goto label_134760;
        case 0x134784u: goto label_134784;
        case 0x134884u: goto label_134884;
        case 0x134910u: goto label_134910;
        case 0x134938u: goto label_134938;
        case 0x134a30u: goto label_134a30;
        case 0x134a3cu: goto label_134a3c;
        case 0x134a78u: goto label_134a78;
        case 0x134a88u: goto label_134a88;
        case 0x134a90u: goto label_134a90;
        case 0x134aa4u: goto label_134aa4;
        case 0x134ae4u: goto label_134ae4;
        case 0x134af4u: goto label_134af4;
        case 0x134b54u: goto label_134b54;
        case 0x134b64u: goto label_134b64;
        case 0x134b98u: goto label_134b98;
        case 0x134ba8u: goto label_134ba8;
        case 0x134bd4u: goto label_134bd4;
        case 0x134be4u: goto label_134be4;
        default: break;
    }

    ctx->pc = 0x134718u;

    // 0x134718: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x134718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x13471c: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x13471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x134720: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x134720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x134724: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x134724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x134728: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x134728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13472c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13472cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134730: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x134730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x134734: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x134734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x134738: 0x53280a  movz        $a1, $v0, $s3
    ctx->pc = 0x134738u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
    // 0x13473c: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x13473cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x134740: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x134740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x134744: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x134744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x134748: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x134748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x13474c: 0xc040688  jal         func_101A20
    ctx->pc = 0x13474Cu;
    SET_GPR_U32(ctx, 31, 0x134754u);
    ctx->pc = 0x134750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13474Cu;
    // 0x134750: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x13474Cu, 0x134754u)) {
        return;
    }
    ctx->pc = 0x134754u;
label_134754:
    // 0x134754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x134754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134758: 0xc040698  jal         func_101A60
    ctx->pc = 0x134758u;
    SET_GPR_U32(ctx, 31, 0x134760u);
    ctx->pc = 0x13475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134758u;
    // 0x13475c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x134758u, 0x134760u)) {
        return;
    }
    ctx->pc = 0x134760u;
label_134760:
    // 0x134760: 0x10400120  beqz        $v0, . + 4 + (0x120 << 2)
    ctx->pc = 0x134760u;
    {
        const bool branch_taken_0x134760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134760u;
        // 0x134764: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134760) {
            ctx->pc = 0x134BE4u;
            goto label_134be4;
        }
    }
    ctx->pc = 0x134768u;
    // 0x134768: 0x1200011e  beqz        $s0, . + 4 + (0x11E << 2)
    ctx->pc = 0x134768u;
    {
        const bool branch_taken_0x134768 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134768u;
        // 0x13476c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134768) {
            ctx->pc = 0x134BE4u;
            goto label_134be4;
        }
    }
    ctx->pc = 0x134770u;
    // 0x134770: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x134770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x134774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x134774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134778: 0x24140022  addiu       $s4, $zero, 0x22
    ctx->pc = 0x134778u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x13477c: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x13477Cu;
    SET_GPR_U32(ctx, 31, 0x134784u);
    ctx->pc = 0x134780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13477Cu;
    // 0x134780: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x13477Cu, 0x134784u)) {
        return;
    }
    ctx->pc = 0x134784u;
label_134784:
    // 0x134784: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x134784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x134788: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x134788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13478c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13478cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x134790: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x134790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134794: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x134794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134798: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x134798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x13479c: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x13479cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1347a0: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x1347a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1347a4: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1347a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1347a8: 0xb3a60057  sdl         $a2, 0x57($sp)
    ctx->pc = 0x1347a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1347ac: 0xb7a60050  sdr         $a2, 0x50($sp)
    ctx->pc = 0x1347acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1347b0: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x1347b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x1347b4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1347b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1347b8: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1347b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1347bc: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1347bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1347c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1347c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1347c4: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x1347c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1347c8: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x1347c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1347cc: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x1347ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x1347d0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1347d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1347d4: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x1347d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1347d8: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x1347d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1347dc: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x1347dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1347e0: 0xb3a70077  sdl         $a3, 0x77($sp)
    ctx->pc = 0x1347e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1347e4: 0xb7a70070  sdr         $a3, 0x70($sp)
    ctx->pc = 0x1347e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1347e8: 0xafa80078  sw          $t0, 0x78($sp)
    ctx->pc = 0x1347e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 8));
    // 0x1347ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1347ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1347f0: 0x6ba30047  ldl         $v1, 0x47($sp)
    ctx->pc = 0x1347f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1347f4: 0x6fa30040  ldr         $v1, 0x40($sp)
    ctx->pc = 0x1347f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1347f8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1347f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1347fc: 0xb3a300b7  sdl         $v1, 0xB7($sp)
    ctx->pc = 0x1347fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134800: 0xb7a300b0  sdr         $v1, 0xB0($sp)
    ctx->pc = 0x134800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134804: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x134804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x134808: 0x6ba90047  ldl         $t1, 0x47($sp)
    ctx->pc = 0x134808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x13480c: 0x6fa90040  ldr         $t1, 0x40($sp)
    ctx->pc = 0x13480cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x134810: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x134810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134814: 0xb3a900c7  sdl         $t1, 0xC7($sp)
    ctx->pc = 0x134814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134818: 0xb7a900c0  sdr         $t1, 0xC0($sp)
    ctx->pc = 0x134818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13481c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13481cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x134820: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x134820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x134824: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x134824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x134828: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x134828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13482c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x13482cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134830: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x134830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134834: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x134834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x134838: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x134838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13483c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x13483cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x134840: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x134840u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x134844: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x134844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x134848: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x134848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x13484c: 0x6ba800b7  ldl         $t0, 0xB7($sp)
    ctx->pc = 0x13484cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x134850: 0x6fa800b0  ldr         $t0, 0xB0($sp)
    ctx->pc = 0x134850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x134854: 0x8fa900b8  lw          $t1, 0xB8($sp)
    ctx->pc = 0x134854u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x134858: 0xb3a800d7  sdl         $t0, 0xD7($sp)
    ctx->pc = 0x134858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13485c: 0xb7a800d0  sdr         $t0, 0xD0($sp)
    ctx->pc = 0x13485cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134860: 0xafa900d8  sw          $t1, 0xD8($sp)
    ctx->pc = 0x134860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 9));
    // 0x134864: 0x6ba800c7  ldl         $t0, 0xC7($sp)
    ctx->pc = 0x134864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x134868: 0x6fa800c0  ldr         $t0, 0xC0($sp)
    ctx->pc = 0x134868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x13486c: 0x8fa900c8  lw          $t1, 0xC8($sp)
    ctx->pc = 0x13486cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x134870: 0xb3a800e7  sdl         $t0, 0xE7($sp)
    ctx->pc = 0x134870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134874: 0xb7a800e0  sdr         $t0, 0xE0($sp)
    ctx->pc = 0x134874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134878: 0xafa900e8  sw          $t1, 0xE8($sp)
    ctx->pc = 0x134878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 9));
    // 0x13487c: 0xc05eec6  jal         func_17BB18
    ctx->pc = 0x13487Cu;
    SET_GPR_U32(ctx, 31, 0x134884u);
    ctx->pc = 0x134880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13487Cu;
    // 0x134880: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BB18u, 0x13487Cu, 0x134884u)) {
        return;
    }
    ctx->pc = 0x134884u;
label_134884:
    // 0x134884: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x134884u;
    {
        const bool branch_taken_0x134884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134884u;
        // 0x134888: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134884) {
            ctx->pc = 0x134A10u;
            goto label_134a10;
        }
    }
    ctx->pc = 0x13488Cu;
    // 0x13488c: 0x6ba40087  ldl         $a0, 0x87($sp)
    ctx->pc = 0x13488cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x134890: 0x6fa40080  ldr         $a0, 0x80($sp)
    ctx->pc = 0x134890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x134894: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x134894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x134898: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x134898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13489c: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x13489cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1348a0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1348a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x1348a4: 0x6ba80097  ldl         $t0, 0x97($sp)
    ctx->pc = 0x1348a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1348a8: 0x6fa80090  ldr         $t0, 0x90($sp)
    ctx->pc = 0x1348a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1348ac: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x1348acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1348b0: 0xb3a80067  sdl         $t0, 0x67($sp)
    ctx->pc = 0x1348b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1348b4: 0xb7a80060  sdr         $t0, 0x60($sp)
    ctx->pc = 0x1348b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1348b8: 0xafa90068  sw          $t1, 0x68($sp)
    ctx->pc = 0x1348b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 9));
    // 0x1348bc: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x1348bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1348c0: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1348c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1348c4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1348c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1348c8: 0xc7a70068  lwc1        $f7, 0x68($sp)
    ctx->pc = 0x1348c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1348cc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1348ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1348d0: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x1348d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1348d4: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x1348d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1348d8: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x1348d8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x1348dc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1348dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1348e0: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1348e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1348e4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1348e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1348e8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1348e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1348ec: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x1348ecu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x1348f0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1348f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1348f4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1348f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1348f8: 0xe7a50070  swc1        $f5, 0x70($sp)
    ctx->pc = 0x1348f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1348fc: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1348fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x134900: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x134900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x134904: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x134904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x134908: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x134908u;
    SET_GPR_U32(ctx, 31, 0x134910u);
    ctx->pc = 0x13490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134908u;
    // 0x13490c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x134908u, 0x134910u)) {
        return;
    }
    ctx->pc = 0x134910u;
label_134910:
    // 0x134910: 0x0  nop
    ctx->pc = 0x134910u;
    // NOP
    // 0x134914: 0x0  nop
    ctx->pc = 0x134914u;
    // NOP
    // 0x134918: 0x46000044  c1          0x44
    ctx->pc = 0x134918u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x13491c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13491cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134920: 0x0  nop
    ctx->pc = 0x134920u;
    // NOP
    // 0x134924: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x134924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134928: 0x0  nop
    ctx->pc = 0x134928u;
    // NOP
    // 0x13492c: 0x45010049  bc1t        . + 4 + (0x49 << 2)
    ctx->pc = 0x13492Cu;
    {
        const bool branch_taken_0x13492c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x134930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13492Cu;
        // 0x134930: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13492c) {
            ctx->pc = 0x134A54u;
            goto label_134a54;
        }
    }
    ctx->pc = 0x134934u;
    // 0x134934: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x134934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_134938:
    // 0x134938: 0xc7a60074  lwc1        $f6, 0x74($sp)
    ctx->pc = 0x134938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x13493c: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x13493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x134940: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x134940u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x134944: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x134944u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x134948: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x134948u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x13494c: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x13494cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x134950: 0xe7a60074  swc1        $f6, 0x74($sp)
    ctx->pc = 0x134950u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x134954: 0xe7a50078  swc1        $f5, 0x78($sp)
    ctx->pc = 0x134954u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x134958: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x134958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13495c: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x13495cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x134960: 0x460219c2  mul.s       $f7, $f3, $f2
    ctx->pc = 0x134960u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x134964: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x134964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134968: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x134968u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x13496c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x13496cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x134970: 0x46060042  mul.s       $f1, $f0, $f6
    ctx->pc = 0x134970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x134974: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x134974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x134978: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x134978u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x13497c: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x13497cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x134980: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x134980u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x134984: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x134984u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x134988: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x134988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x13498c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x13498cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x134990: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x134990u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x134994: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x134994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x134998: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x134998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x13499c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13499cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1349a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1349a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1349a4: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1349a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1349a8: 0x6ba40067  ldl         $a0, 0x67($sp)
    ctx->pc = 0x1349a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1349ac: 0x6fa40060  ldr         $a0, 0x60($sp)
    ctx->pc = 0x1349acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1349b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1349b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1349b4: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x1349b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1349b8: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x1349b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1349bc: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1349bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x1349c0: 0x6ba80057  ldl         $t0, 0x57($sp)
    ctx->pc = 0x1349c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1349c4: 0x6fa80050  ldr         $t0, 0x50($sp)
    ctx->pc = 0x1349c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1349c8: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x1349c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1349cc: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x1349ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1349d0: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x1349d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1349d4: 0xafa90028  sw          $t1, 0x28($sp)
    ctx->pc = 0x1349d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
    // 0x1349d8: 0x6ba40077  ldl         $a0, 0x77($sp)
    ctx->pc = 0x1349d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1349dc: 0x6fa40070  ldr         $a0, 0x70($sp)
    ctx->pc = 0x1349dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1349e0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1349e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1349e4: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1349e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1349e8: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1349e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1349ec: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1349ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1349f0: 0x6ba80047  ldl         $t0, 0x47($sp)
    ctx->pc = 0x1349f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1349f4: 0x6fa80040  ldr         $t0, 0x40($sp)
    ctx->pc = 0x1349f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1349f8: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x1349f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1349fc: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x1349fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134a00: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x134a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134a04: 0xafa90038  sw          $t1, 0x38($sp)
    ctx->pc = 0x134a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 9));
    // 0x134a08: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x134a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x134a0c: 0x0  nop
    ctx->pc = 0x134a0cu;
    // NOP
label_134a10:
    // 0x134a10: 0x6ba40047  ldl         $a0, 0x47($sp)
    ctx->pc = 0x134a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x134a14: 0x6fa40040  ldr         $a0, 0x40($sp)
    ctx->pc = 0x134a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x134a18: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x134a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134a1c: 0xb3a400d7  sdl         $a0, 0xD7($sp)
    ctx->pc = 0x134a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134a20: 0xb7a400d0  sdr         $a0, 0xD0($sp)
    ctx->pc = 0x134a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134a24: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x134a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x134a28: 0xc0561b6  jal         func_1586D8
    ctx->pc = 0x134A28u;
    SET_GPR_U32(ctx, 31, 0x134A30u);
    ctx->pc = 0x134A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A28u;
    // 0x134a2c: 0x8c524fd8  lw          $s2, 0x4FD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1586D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1586D8u, 0x134A28u, 0x134A30u)) {
        return;
    }
    ctx->pc = 0x134A30u;
label_134a30:
    // 0x134a30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a34: 0xc055ff6  jal         func_157FD8
    ctx->pc = 0x134A34u;
    SET_GPR_U32(ctx, 31, 0x134A3Cu);
    ctx->pc = 0x134A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A34u;
    // 0x134a38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x157FD8u, 0x134A34u, 0x134A3Cu)) {
        return;
    }
    ctx->pc = 0x134A3Cu;
label_134a3c:
    // 0x134a3c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x134A3Cu;
    {
        const bool branch_taken_0x134a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134a3c) {
            ctx->pc = 0x134AACu;
            goto label_134aac;
        }
    }
    ctx->pc = 0x134A44u;
    // 0x134a44: 0x52600009  beql        $s3, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x134A44u;
    {
        const bool branch_taken_0x134a44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x134a44) {
            ctx->pc = 0x134A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134A44u;
            // 0x134a48: 0xae3219c8  sw          $s2, 0x19C8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 6600), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134A6Cu;
            goto label_134a6c;
        }
    }
    ctx->pc = 0x134A4Cu;
    // 0x134a4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x134A4Cu;
    {
        const bool branch_taken_0x134a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A4Cu;
        // 0x134a50: 0xae3219c4  sw          $s2, 0x19C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6596), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a4c) {
            ctx->pc = 0x134A6Cu;
            goto label_134a6c;
        }
    }
    ctx->pc = 0x134A54u;
label_134a54:
    // 0x134a54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x134a58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x134a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a5c: 0x0  nop
    ctx->pc = 0x134a5cu;
    // NOP
    // 0x134a60: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x134a60u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x134a64: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
    ctx->pc = 0x134A64u;
    {
        const bool branch_taken_0x134a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A64u;
        // 0x134a68: 0xc7a20070  lwc1        $f2, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a64) {
            ctx->pc = 0x134938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134938;
        }
    }
    ctx->pc = 0x134A6Cu;
label_134a6c:
    // 0x134a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a70: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x134A70u;
    SET_GPR_U32(ctx, 31, 0x134A78u);
    ctx->pc = 0x134A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A70u;
    // 0x134a74: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x134A70u, 0x134A78u)) {
        return;
    }
    ctx->pc = 0x134A78u;
label_134a78:
    // 0x134a78: 0x8e2514e8  lw          $a1, 0x14E8($s1)
    ctx->pc = 0x134a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5352)));
    // 0x134a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a80: 0xc043c7c  jal         func_10F1F0
    ctx->pc = 0x134A80u;
    SET_GPR_U32(ctx, 31, 0x134A88u);
    ctx->pc = 0x134A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A80u;
    // 0x134a84: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x134A80u, 0x134A88u)) {
        return;
    }
    ctx->pc = 0x134A88u;
label_134a88:
    // 0x134a88: 0xc0561b6  jal         func_1586D8
    ctx->pc = 0x134A88u;
    SET_GPR_U32(ctx, 31, 0x134A90u);
    ctx->pc = 0x1586D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1586D8u, 0x134A88u, 0x134A90u)) {
        return;
    }
    ctx->pc = 0x134A90u;
label_134a90:
    // 0x134a90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x134a94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x134a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x134a98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a9c: 0xc0561f4  jal         func_1587D0
    ctx->pc = 0x134A9Cu;
    SET_GPR_U32(ctx, 31, 0x134AA4u);
    ctx->pc = 0x134AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A9Cu;
    // 0x134aa0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1587D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1587D0u, 0x134A9Cu, 0x134AA4u)) {
        return;
    }
    ctx->pc = 0x134AA4u;
label_134aa4:
    // 0x134aa4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x134AA4u;
    {
        const bool branch_taken_0x134aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AA4u;
        // 0x134aa8: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134aa4) {
            ctx->pc = 0x134BE8u;
            goto label_134be8;
        }
    }
    ctx->pc = 0x134AACu;
label_134aac:
    // 0x134aac: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x134AACu;
    {
        const bool branch_taken_0x134aac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AACu;
        // 0x134ab0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134aac) {
            ctx->pc = 0x134B24u;
            goto label_134b24;
        }
    }
    ctx->pc = 0x134AB4u;
    // 0x134ab4: 0x8e2219c4  lw          $v0, 0x19C4($s1)
    ctx->pc = 0x134ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6596)));
    // 0x134ab8: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x134AB8u;
    {
        const bool branch_taken_0x134ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ab8) {
            ctx->pc = 0x134BACu;
            goto label_134bac;
        }
    }
    ctx->pc = 0x134AC0u;
    // 0x134ac0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x134ac0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134ac4: 0x0  nop
    ctx->pc = 0x134ac4u;
    // NOP
    // 0x134ac8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x134ac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x134acc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x134accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x134ad0: 0x0  nop
    ctx->pc = 0x134ad0u;
    // NOP
    // 0x134ad4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x134ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x134ad8: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x134ad8u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
    // 0x134adc: 0xc0561b6  jal         func_1586D8
    ctx->pc = 0x134ADCu;
    SET_GPR_U32(ctx, 31, 0x134AE4u);
    ctx->pc = 0x134AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134ADCu;
    // 0x134ae0: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1586D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1586D8u, 0x134ADCu, 0x134AE4u)) {
        return;
    }
    ctx->pc = 0x134AE4u;
label_134ae4:
    // 0x134ae4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x134ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134aec: 0xc0561f4  jal         func_1587D0
    ctx->pc = 0x134AECu;
    SET_GPR_U32(ctx, 31, 0x134AF4u);
    ctx->pc = 0x134AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AECu;
    // 0x134af0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1587D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1587D0u, 0x134AECu, 0x134AF4u)) {
        return;
    }
    ctx->pc = 0x134AF4u;
label_134af4:
    // 0x134af4: 0x8e2219c4  lw          $v0, 0x19C4($s1)
    ctx->pc = 0x134af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6596)));
    // 0x134af8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x134af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x134afc: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x134afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x134b00: 0x27a300f4  addiu       $v1, $sp, 0xF4
    ctx->pc = 0x134b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x134b04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x134b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x134b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b0c: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x134b0cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x134b10: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x134b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x134b14: 0xc5180a  movz        $v1, $a2, $a1
    ctx->pc = 0x134b14u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
    // 0x134b18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x134b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134b1c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x134B1Cu;
    {
        const bool branch_taken_0x134b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B1Cu;
        // 0x134b20: 0xae2219c4  sw          $v0, 0x19C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b1c) {
            ctx->pc = 0x134B90u;
            goto label_134b90;
        }
    }
    ctx->pc = 0x134B24u;
label_134b24:
    // 0x134b24: 0x8e2219c8  lw          $v0, 0x19C8($s1)
    ctx->pc = 0x134b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6600)));
    // 0x134b28: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x134B28u;
    {
        const bool branch_taken_0x134b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b28) {
            ctx->pc = 0x134BACu;
            goto label_134bac;
        }
    }
    ctx->pc = 0x134B30u;
    // 0x134b30: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x134b30u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134b34: 0x0  nop
    ctx->pc = 0x134b34u;
    // NOP
    // 0x134b38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x134b38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x134b3c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x134b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x134b40: 0x0  nop
    ctx->pc = 0x134b40u;
    // NOP
    // 0x134b44: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x134b44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x134b48: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x134b48u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
    // 0x134b4c: 0xc0561b6  jal         func_1586D8
    ctx->pc = 0x134B4Cu;
    SET_GPR_U32(ctx, 31, 0x134B54u);
    ctx->pc = 0x134B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B4Cu;
    // 0x134b50: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1586D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1586D8u, 0x134B4Cu, 0x134B54u)) {
        return;
    }
    ctx->pc = 0x134B54u;
label_134b54:
    // 0x134b54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x134b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b5c: 0xc0561f4  jal         func_1587D0
    ctx->pc = 0x134B5Cu;
    SET_GPR_U32(ctx, 31, 0x134B64u);
    ctx->pc = 0x134B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B5Cu;
    // 0x134b60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1587D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1587D0u, 0x134B5Cu, 0x134B64u)) {
        return;
    }
    ctx->pc = 0x134B64u;
label_134b64:
    // 0x134b64: 0x8e2219c8  lw          $v0, 0x19C8($s1)
    ctx->pc = 0x134b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6600)));
    // 0x134b68: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x134b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x134b6c: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x134b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x134b70: 0x27a300fc  addiu       $v1, $sp, 0xFC
    ctx->pc = 0x134b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x134b74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x134b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x134b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b7c: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x134b7cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x134b80: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x134b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x134b84: 0xc5180a  movz        $v1, $a2, $a1
    ctx->pc = 0x134b84u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
    // 0x134b88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x134b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134b8c: 0xae2219c8  sw          $v0, 0x19C8($s1)
    ctx->pc = 0x134b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6600), GPR_U32(ctx, 2));
label_134b90:
    // 0x134b90: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x134B90u;
    SET_GPR_U32(ctx, 31, 0x134B98u);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x134B90u, 0x134B98u)) {
        return;
    }
    ctx->pc = 0x134B98u;
label_134b98:
    // 0x134b98: 0x8e2514e8  lw          $a1, 0x14E8($s1)
    ctx->pc = 0x134b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5352)));
    // 0x134b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ba0: 0xc043c7c  jal         func_10F1F0
    ctx->pc = 0x134BA0u;
    SET_GPR_U32(ctx, 31, 0x134BA8u);
    ctx->pc = 0x134BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BA0u;
    // 0x134ba4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x134BA0u, 0x134BA8u)) {
        return;
    }
    ctx->pc = 0x134BA8u;
label_134ba8:
    // 0x134ba8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x134ba8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_134bac:
    // 0x134bac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x134BACu;
    {
        const bool branch_taken_0x134bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BACu;
        // 0x134bb0: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bac) {
            ctx->pc = 0x134BE8u;
            goto label_134be8;
        }
    }
    ctx->pc = 0x134BB4u;
    // 0x134bb4: 0x6ba80047  ldl         $t0, 0x47($sp)
    ctx->pc = 0x134bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x134bb8: 0x6fa80040  ldr         $t0, 0x40($sp)
    ctx->pc = 0x134bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x134bbc: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x134bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134bc0: 0xb3a800d7  sdl         $t0, 0xD7($sp)
    ctx->pc = 0x134bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134bc4: 0xb7a800d0  sdr         $t0, 0xD0($sp)
    ctx->pc = 0x134bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134bc8: 0xafa900d8  sw          $t1, 0xD8($sp)
    ctx->pc = 0x134bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 9));
    // 0x134bcc: 0xc043bda  jal         func_10EF68
    ctx->pc = 0x134BCCu;
    SET_GPR_U32(ctx, 31, 0x134BD4u);
    ctx->pc = 0x10EF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10EF68u, 0x134BCCu, 0x134BD4u)) {
        return;
    }
    ctx->pc = 0x134BD4u;
label_134bd4:
    // 0x134bd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134bd8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x134bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134bdc: 0xc043c2e  jal         func_10F0B8
    ctx->pc = 0x134BDCu;
    SET_GPR_U32(ctx, 31, 0x134BE4u);
    ctx->pc = 0x134BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BDCu;
    // 0x134be0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F0B8u, 0x134BDCu, 0x134BE4u)) {
        return;
    }
    ctx->pc = 0x134BE4u;
label_134be4:
    // 0x134be4: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x134be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_134be8:
    // 0x134be8: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x134be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x134bec: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x134becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x134bf0: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x134bf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x134bf4: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x134bf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x134bf8: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x134bf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x134bfc: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x134bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x134c00: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x134c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x134c04: 0x3e00008  jr          $ra
    ctx->pc = 0x134C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C04u;
        // 0x134c08: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134C0Cu;
    // 0x134c0c: 0x0  nop
    ctx->pc = 0x134c0cu;
    // NOP
    ctx->pc = 0x134c10u;
}
