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

// Function: sub_002F6690
// Address: 0x2f6690 - 0x2f67b0
void sub_002F6690_0x2f6690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6690_0x2f6690");
#endif

    switch (ctx->pc) {
        case 0x2f66c0u: goto label_2f66c0;
        case 0x2f66e4u: goto label_2f66e4;
        case 0x2f6740u: goto label_2f6740;
        case 0x2f6790u: goto label_2f6790;
        default: break;
    }

    ctx->pc = 0x2f6690u;

    // 0x2f6690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f6690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f6694: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2f6694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f6698: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f6698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f669c: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x2f669cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2f66a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f66a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f66a4: 0x3c120072  lui         $s2, 0x72
    ctx->pc = 0x2f66a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)114 << 16));
    // 0x2f66a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f66a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f66ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f66acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f66b0: 0x26500cc0  addiu       $s0, $s2, 0xCC0
    ctx->pc = 0x2f66b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3264));
    // 0x2f66b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f66b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f66b8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F66B8u;
    SET_GPR_U32(ctx, 31, 0x2F66C0u);
    ctx->pc = 0x2F66BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66B8u;
    // 0x2f66bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F66B8u, 0x2F66C0u)) {
        return;
    }
    ctx->pc = 0x2F66C0u;
label_2f66c0:
    // 0x2f66c0: 0x24040184  addiu       $a0, $zero, 0x184
    ctx->pc = 0x2f66c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2f66c4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2f66c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2f66c8: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x2f66c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f66cc: 0x24636340  addiu       $v1, $v1, 0x6340
    ctx->pc = 0x2f66ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25408));
    // 0x2f66d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f66d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f66d4: 0x701025  or          $v0, $v1, $s0
    ctx->pc = 0x2f66d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x2f66d8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f66d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f66dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F66DCu;
    {
        const bool branch_taken_0x2f66dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66DCu;
        // 0x2f66e0: 0x24620180  addiu       $v0, $v1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66dc) {
            ctx->pc = 0x2F6740u;
            goto label_2f6740;
        }
    }
    ctx->pc = 0x2F66E4u;
label_2f66e4:
    // 0x2f66e4: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x2f66e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f66e8: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x2f66e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f66ec: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x2f66ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f66f0: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x2f66f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f66f4: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x2f66f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2f66f8: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x2f66f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2f66fc: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x2f66fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f6700: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x2f6700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f6704: 0xb2040007  sdl         $a0, 0x7($s0)
    ctx->pc = 0x2f6704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6708: 0xb6040000  sdr         $a0, 0x0($s0)
    ctx->pc = 0x2f6708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f670c: 0xb205000f  sdl         $a1, 0xF($s0)
    ctx->pc = 0x2f670cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6710: 0xb6050008  sdr         $a1, 0x8($s0)
    ctx->pc = 0x2f6710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6714: 0xb2060017  sdl         $a2, 0x17($s0)
    ctx->pc = 0x2f6714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6718: 0xb6060010  sdr         $a2, 0x10($s0)
    ctx->pc = 0x2f6718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f671c: 0xb207001f  sdl         $a3, 0x1F($s0)
    ctx->pc = 0x2f671cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6720: 0xb6070018  sdr         $a3, 0x18($s0)
    ctx->pc = 0x2f6720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6724: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f6724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f6728: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2f6728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2f672c: 0x0  nop
    ctx->pc = 0x2f672cu;
    // NOP
    // 0x2f6730: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F6730u;
    {
        const bool branch_taken_0x2f6730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6730) {
            ctx->pc = 0x2F66E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f66e4;
        }
    }
    ctx->pc = 0x2F6738u;
    // 0x2f6738: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F6738u;
    {
        const bool branch_taken_0x2f6738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6738) {
            ctx->pc = 0x2F6774u;
            goto label_2f6774;
        }
    }
    ctx->pc = 0x2F6740u;
label_2f6740:
    // 0x2f6740: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x2f6740u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6744: 0xdc690008  ld          $t1, 0x8($v1)
    ctx->pc = 0x2f6744u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f6748: 0xdc6a0010  ld          $t2, 0x10($v1)
    ctx->pc = 0x2f6748u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f674c: 0xdc640018  ld          $a0, 0x18($v1)
    ctx->pc = 0x2f674cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2f6750: 0xfe080000  sd          $t0, 0x0($s0)
    ctx->pc = 0x2f6750u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
    // 0x2f6754: 0xfe090008  sd          $t1, 0x8($s0)
    ctx->pc = 0x2f6754u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 9));
    // 0x2f6758: 0xfe0a0010  sd          $t2, 0x10($s0)
    ctx->pc = 0x2f6758u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 10));
    // 0x2f675c: 0xfe040018  sd          $a0, 0x18($s0)
    ctx->pc = 0x2f675cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 4));
    // 0x2f6760: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f6760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f6764: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2f6764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2f6768: 0x0  nop
    ctx->pc = 0x2f6768u;
    // NOP
    // 0x2f676c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F676Cu;
    {
        const bool branch_taken_0x2f676c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f676c) {
            ctx->pc = 0x2F6740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6740;
        }
    }
    ctx->pc = 0x2F6774u;
label_2f6774:
    // 0x2f6774: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2f6774u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f677c: 0x26450cc0  addiu       $a1, $s2, 0xCC0
    ctx->pc = 0x2f677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3264));
    // 0x2f6780: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x2f6780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x2f6784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f6784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6788: 0xc0bdec8  jal         func_2F7B20
    ctx->pc = 0x2F6788u;
    SET_GPR_U32(ctx, 31, 0x2F6790u);
    ctx->pc = 0x2F678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6788u;
    // 0x2f678c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7B20u, 0x2F6788u, 0x2F6790u)) {
        return;
    }
    ctx->pc = 0x2F6790u;
label_2f6790:
    // 0x2f6790: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f6790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6794: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f6794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f6798: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f6798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f679c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f679cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f67a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f67a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f67a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F67A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67A4u;
        // 0x2f67a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F67A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F67ACu;
    // 0x2f67ac: 0x0  nop
    ctx->pc = 0x2f67acu;
    // NOP
    ctx->pc = 0x2f67b0u;
}
