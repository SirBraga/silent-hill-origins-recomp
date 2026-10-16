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

// Function: sub_002F68A0
// Address: 0x2f68a0 - 0x2f6c38
void sub_002F68A0_0x2f68a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F68A0_0x2f68a0");
#endif

    switch (ctx->pc) {
        case 0x2f6954u: goto label_2f6954;
        case 0x2f69b4u: goto label_2f69b4;
        case 0x2f6a5cu: goto label_2f6a5c;
        case 0x2f6abcu: goto label_2f6abc;
        case 0x2f6b10u: goto label_2f6b10;
        case 0x2f6b5cu: goto label_2f6b5c;
        case 0x2f6bbcu: goto label_2f6bbc;
        default: break;
    }

    ctx->pc = 0x2f68a0u;

    // 0x2f68a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f68a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f68a4: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x2f68a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2f68a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f68a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f68ac: 0x24022010  addiu       $v0, $zero, 0x2010
    ctx->pc = 0x2f68acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
    // 0x2f68b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f68b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f68b4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f68b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f68b8: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x2f68b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f68bc: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2f68bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2f68c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f68c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f68c4: 0x24846340  addiu       $a0, $a0, 0x6340
    ctx->pc = 0x2f68c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25408));
    // 0x2f68c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f68c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f68cc: 0x2624018  mult        $t0, $s3, $v0
    ctx->pc = 0x2f68ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f68d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f68d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f68d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f68d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f68d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f68d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f68dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f68e0: 0x3c140072  lui         $s4, 0x72
    ctx->pc = 0x2f68e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)114 << 16));
    // 0x2f68e4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2f68e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f68e8: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x2f68e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2f68ec: 0x2689cc80  addiu       $t1, $s4, -0x3380
    ctx->pc = 0x2f68ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954112));
    // 0x2f68f0: 0x9464002a  lhu         $a0, 0x2A($v1)
    ctx->pc = 0x2f68f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x2f68f4: 0x1095021  addu        $t2, $t0, $t1
    ctx->pc = 0x2f68f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2f68f8: 0xc58021  addu        $s0, $a2, $a1
    ctx->pc = 0x2f68f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f68fc: 0x9462002c  lhu         $v0, 0x2C($v1)
    ctx->pc = 0x2f68fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2f6900: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2f6900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f6904: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F6904u;
    {
        const bool branch_taken_0x2f6904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6904) {
            ctx->pc = 0x2F6908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6904u;
            // 0x2f6908: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F690Cu;
            goto label_2f690c;
        }
    }
    ctx->pc = 0x2F690Cu;
label_2f690c:
    // 0x2f690c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2f690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2f6910: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2f6910u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f6914: 0x9012  mflo        $s2
    ctx->pc = 0x2f6914u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x2f6918: 0x54670039  bnel        $v1, $a3, . + 4 + (0x39 << 2)
    ctx->pc = 0x2F6918u;
    {
        const bool branch_taken_0x2f6918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x2f6918) {
            ctx->pc = 0x2F691Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6918u;
            // 0x2f691c: 0x25230004  addiu       $v1, $t1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6A00u;
            goto label_2f6a00;
        }
    }
    ctx->pc = 0x2F6920u;
    // 0x2f6920: 0x25220010  addiu       $v0, $t1, 0x10
    ctx->pc = 0x2f6920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x2f6924: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x2f6924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2f6928: 0xad500000  sw          $s0, 0x0($t2)
    ctx->pc = 0x2f6928u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 16));
    // 0x2f692c: 0x1023021  addu        $a2, $t0, $v0
    ctx->pc = 0x2f692cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2f6930: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x2f6930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x2f6934: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f6934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6938: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x2f6938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x2f693c: 0x2261025  or          $v0, $s1, $a2
    ctx->pc = 0x2f693cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    // 0x2f6940: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2f6940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2f6944: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f6944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f6948: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F6948u;
    {
        const bool branch_taken_0x2f6948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6948u;
        // 0x2f694c: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6948) {
            ctx->pc = 0x2F69B0u;
            goto label_2f69b0;
        }
    }
    ctx->pc = 0x2F6950u;
    // 0x2f6950: 0x26220400  addiu       $v0, $s1, 0x400
    ctx->pc = 0x2f6950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_2f6954:
    // 0x2f6954: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x2f6954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f6958: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x2f6958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f695c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x2f695cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f6960: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x2f6960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f6964: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x2f6964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f6968: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x2f6968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f696c: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x2f696cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f6970: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x2f6970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f6974: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x2f6974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6978: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x2f6978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f697c: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x2f697cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6980: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x2f6980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6984: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x2f6984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6988: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x2f6988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f698c: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x2f698cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6990: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x2f6990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6994: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f6994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f6998: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f6998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f699c: 0x0  nop
    ctx->pc = 0x2f699cu;
    // NOP
    // 0x2f69a0: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F69A0u;
    {
        const bool branch_taken_0x2f69a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f69a0) {
            ctx->pc = 0x2F6954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6954;
        }
    }
    ctx->pc = 0x2F69A8u;
    // 0x2f69a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F69A8u;
    {
        const bool branch_taken_0x2f69a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F69ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69A8u;
        // 0x2f69ac: 0x24052010  addiu       $a1, $zero, 0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69a8) {
            ctx->pc = 0x2F69ECu;
            goto label_2f69ec;
        }
    }
    ctx->pc = 0x2F69B0u;
label_2f69b0:
    // 0x2f69b0: 0x26220400  addiu       $v0, $s1, 0x400
    ctx->pc = 0x2f69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_2f69b4:
    // 0x2f69b4: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x2f69b4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f69b8: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x2f69b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f69bc: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x2f69bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f69c0: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x2f69c0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2f69c4: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x2f69c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x2f69c8: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x2f69c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x2f69cc: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x2f69ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x2f69d0: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x2f69d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x2f69d4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f69d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f69d8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f69d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f69dc: 0x0  nop
    ctx->pc = 0x2f69dcu;
    // NOP
    // 0x2f69e0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F69E0u;
    {
        const bool branch_taken_0x2f69e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f69e0) {
            ctx->pc = 0x2F69B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f69b4;
        }
    }
    ctx->pc = 0x2F69E8u;
    // 0x2f69e8: 0x24052010  addiu       $a1, $zero, 0x2010
    ctx->pc = 0x2f69e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
label_2f69ec:
    // 0x2f69ec: 0x2684cc80  addiu       $a0, $s4, -0x3380
    ctx->pc = 0x2f69ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954112));
    // 0x2f69f0: 0x2652818  mult        $a1, $s3, $a1
    ctx->pc = 0x2f69f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2f69f4: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x2f69f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2f69f8: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2F69F8u;
    {
        const bool branch_taken_0x2f69f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F69FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69F8u;
        // 0x2f69fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69f8) {
            ctx->pc = 0x2F6C04u;
            goto label_2f6c04;
        }
    }
    ctx->pc = 0x2F6A00u;
label_2f6a00:
    // 0x2f6a00: 0x1032821  addu        $a1, $t0, $v1
    ctx->pc = 0x2f6a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2f6a04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6a08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f6a0c: 0x1602003e  bne         $s0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2F6A0Cu;
    {
        const bool branch_taken_0x2f6a0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A0Cu;
        // 0x2f6a10: 0x2523000c  addiu       $v1, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a0c) {
            ctx->pc = 0x2F6B08u;
            goto label_2f6b08;
        }
    }
    ctx->pc = 0x2F6A14u;
    // 0x2f6a14: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x2f6a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2f6a18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f6a1c: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x2f6a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f6a20: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2F6A20u;
    {
        const bool branch_taken_0x2f6a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A20u;
        // 0x2f6a24: 0x1281021  addu        $v0, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a20) {
            ctx->pc = 0x2F6B08u;
            goto label_2f6b08;
        }
    }
    ctx->pc = 0x2F6A28u;
    // 0x2f6a28: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2f6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f6a2c: 0x14720036  bne         $v1, $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x2F6A2Cu;
    {
        const bool branch_taken_0x2f6a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F6A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A2Cu;
        // 0x2f6a30: 0x25220010  addiu       $v0, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a2c) {
            ctx->pc = 0x2F6B08u;
            goto label_2f6b08;
        }
    }
    ctx->pc = 0x2F6A34u;
    // 0x2f6a34: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x2f6a34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x2f6a38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f6a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f6a3c: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x2f6a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x2f6a40: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2f6a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2f6a44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f6a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f6a48: 0x2222025  or          $a0, $s1, $v0
    ctx->pc = 0x2f6a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2f6a4c: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x2f6a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2f6a50: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F6A50u;
    {
        const bool branch_taken_0x2f6a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A50u;
        // 0x2f6a54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a50) {
            ctx->pc = 0x2F6AB8u;
            goto label_2f6ab8;
        }
    }
    ctx->pc = 0x2F6A58u;
    // 0x2f6a58: 0x26240400  addiu       $a0, $s1, 0x400
    ctx->pc = 0x2f6a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_2f6a5c:
    // 0x2f6a5c: 0x68c80007  ldl         $t0, 0x7($a2)
    ctx->pc = 0x2f6a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f6a60: 0x6cc80000  ldr         $t0, 0x0($a2)
    ctx->pc = 0x2f6a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f6a64: 0x68c9000f  ldl         $t1, 0xF($a2)
    ctx->pc = 0x2f6a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2f6a68: 0x6cc90008  ldr         $t1, 0x8($a2)
    ctx->pc = 0x2f6a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2f6a6c: 0x68c30017  ldl         $v1, 0x17($a2)
    ctx->pc = 0x2f6a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f6a70: 0x6cc30010  ldr         $v1, 0x10($a2)
    ctx->pc = 0x2f6a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f6a74: 0x68c5001f  ldl         $a1, 0x1F($a2)
    ctx->pc = 0x2f6a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f6a78: 0x6cc50018  ldr         $a1, 0x18($a2)
    ctx->pc = 0x2f6a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f6a7c: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x2f6a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6a80: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x2f6a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6a84: 0xb049000f  sdl         $t1, 0xF($v0)
    ctx->pc = 0x2f6a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6a88: 0xb4490008  sdr         $t1, 0x8($v0)
    ctx->pc = 0x2f6a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6a8c: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x2f6a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6a90: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x2f6a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6a94: 0xb045001f  sdl         $a1, 0x1F($v0)
    ctx->pc = 0x2f6a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6a98: 0xb4450018  sdr         $a1, 0x18($v0)
    ctx->pc = 0x2f6a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6a9c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f6a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f6aa0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2f6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2f6aa4: 0x0  nop
    ctx->pc = 0x2f6aa4u;
    // NOP
    // 0x2f6aa8: 0x14c4ffec  bne         $a2, $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F6AA8u;
    {
        const bool branch_taken_0x2f6aa8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f6aa8) {
            ctx->pc = 0x2F6A5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6a5c;
        }
    }
    ctx->pc = 0x2F6AB0u;
    // 0x2f6ab0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F6AB0u;
    {
        const bool branch_taken_0x2f6ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AB0u;
        // 0x2f6ab4: 0x24052010  addiu       $a1, $zero, 0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ab0) {
            ctx->pc = 0x2F6AF4u;
            goto label_2f6af4;
        }
    }
    ctx->pc = 0x2F6AB8u;
label_2f6ab8:
    // 0x2f6ab8: 0x26240400  addiu       $a0, $s1, 0x400
    ctx->pc = 0x2f6ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_2f6abc:
    // 0x2f6abc: 0xdcc70000  ld          $a3, 0x0($a2)
    ctx->pc = 0x2f6abcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f6ac0: 0xdcc80008  ld          $t0, 0x8($a2)
    ctx->pc = 0x2f6ac0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2f6ac4: 0xdcc90010  ld          $t1, 0x10($a2)
    ctx->pc = 0x2f6ac4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2f6ac8: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x2f6ac8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2f6acc: 0xfc470000  sd          $a3, 0x0($v0)
    ctx->pc = 0x2f6accu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x2f6ad0: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x2f6ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x2f6ad4: 0xfc490010  sd          $t1, 0x10($v0)
    ctx->pc = 0x2f6ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 9));
    // 0x2f6ad8: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x2f6ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x2f6adc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f6adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f6ae0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2f6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2f6ae4: 0x0  nop
    ctx->pc = 0x2f6ae4u;
    // NOP
    // 0x2f6ae8: 0x14c4fff4  bne         $a2, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F6AE8u;
    {
        const bool branch_taken_0x2f6ae8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f6ae8) {
            ctx->pc = 0x2F6ABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6abc;
        }
    }
    ctx->pc = 0x2F6AF0u;
    // 0x2f6af0: 0x24052010  addiu       $a1, $zero, 0x2010
    ctx->pc = 0x2f6af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
label_2f6af4:
    // 0x2f6af4: 0x2684cc80  addiu       $a0, $s4, -0x3380
    ctx->pc = 0x2f6af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954112));
    // 0x2f6af8: 0x2652818  mult        $a1, $s3, $a1
    ctx->pc = 0x2f6af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2f6afc: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x2f6afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2f6b00: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2F6B00u;
    {
        const bool branch_taken_0x2f6b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B00u;
        // 0x2f6b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b00) {
            ctx->pc = 0x2F6C04u;
            goto label_2f6c04;
        }
    }
    ctx->pc = 0x2F6B08u;
label_2f6b08:
    // 0x2f6b08: 0xc0bda0c  jal         func_2F6830
    ctx->pc = 0x2F6B08u;
    SET_GPR_U32(ctx, 31, 0x2F6B10u);
    ctx->pc = 0x2F6B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B08u;
    // 0x2f6b0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6830u, 0x2F6B08u, 0x2F6B10u)) {
        return;
    }
    ctx->pc = 0x2F6B10u;
label_2f6b10:
    // 0x2f6b10: 0x24032010  addiu       $v1, $zero, 0x2010
    ctx->pc = 0x2f6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
    // 0x2f6b14: 0x2684cc80  addiu       $a0, $s4, -0x3380
    ctx->pc = 0x2f6b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954112));
    // 0x2f6b18: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x2f6b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f6b1c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f6b1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b20: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x2f6b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2f6b24: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2f6b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b28: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2f6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f6b2c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2f6b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f6b30: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2f6b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2f6b34: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2f6b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2f6b38: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f6b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b3c: 0xacb00004  sw          $s0, 0x4($a1)
    ctx->pc = 0x2f6b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    // 0x2f6b40: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x2f6b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x2f6b44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f6b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b48: 0xe61025  or          $v0, $a3, $a2
    ctx->pc = 0x2f6b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2f6b4c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f6b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f6b50: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F6B50u;
    {
        const bool branch_taken_0x2f6b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B50u;
        // 0x2f6b54: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b50) {
            ctx->pc = 0x2F6BB8u;
            goto label_2f6bb8;
        }
    }
    ctx->pc = 0x2F6B58u;
    // 0x2f6b58: 0x24e20400  addiu       $v0, $a3, 0x400
    ctx->pc = 0x2f6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
label_2f6b5c:
    // 0x2f6b5c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x2f6b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f6b60: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x2f6b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f6b64: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x2f6b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f6b68: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x2f6b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f6b6c: 0x68e90017  ldl         $t1, 0x17($a3)
    ctx->pc = 0x2f6b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2f6b70: 0x6ce90010  ldr         $t1, 0x10($a3)
    ctx->pc = 0x2f6b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2f6b74: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x2f6b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f6b78: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x2f6b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f6b7c: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x2f6b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6b80: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x2f6b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6b84: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x2f6b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6b88: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x2f6b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6b8c: 0xb0c90017  sdl         $t1, 0x17($a2)
    ctx->pc = 0x2f6b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6b90: 0xb4c90010  sdr         $t1, 0x10($a2)
    ctx->pc = 0x2f6b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6b94: 0xb0c3001f  sdl         $v1, 0x1F($a2)
    ctx->pc = 0x2f6b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6b98: 0xb4c30018  sdr         $v1, 0x18($a2)
    ctx->pc = 0x2f6b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6b9c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2f6b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2f6ba0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f6ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f6ba4: 0x0  nop
    ctx->pc = 0x2f6ba4u;
    // NOP
    // 0x2f6ba8: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F6BA8u;
    {
        const bool branch_taken_0x2f6ba8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6ba8) {
            ctx->pc = 0x2F6B5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6b5c;
        }
    }
    ctx->pc = 0x2F6BB0u;
    // 0x2f6bb0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F6BB0u;
    {
        const bool branch_taken_0x2f6bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BB0u;
        // 0x2f6bb4: 0x24052010  addiu       $a1, $zero, 0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6bb0) {
            ctx->pc = 0x2F6BF4u;
            goto label_2f6bf4;
        }
    }
    ctx->pc = 0x2F6BB8u;
label_2f6bb8:
    // 0x2f6bb8: 0x24e20400  addiu       $v0, $a3, 0x400
    ctx->pc = 0x2f6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
label_2f6bbc:
    // 0x2f6bbc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2f6bbcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f6bc0: 0xdce50008  ld          $a1, 0x8($a3)
    ctx->pc = 0x2f6bc0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2f6bc4: 0xdce90010  ld          $t1, 0x10($a3)
    ctx->pc = 0x2f6bc4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2f6bc8: 0xdce30018  ld          $v1, 0x18($a3)
    ctx->pc = 0x2f6bc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2f6bcc: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2f6bccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2f6bd0: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2f6bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2f6bd4: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x2f6bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
    // 0x2f6bd8: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x2f6bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x2f6bdc: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2f6bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2f6be0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f6be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f6be4: 0x0  nop
    ctx->pc = 0x2f6be4u;
    // NOP
    // 0x2f6be8: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F6BE8u;
    {
        const bool branch_taken_0x2f6be8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6be8) {
            ctx->pc = 0x2F6BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6bbc;
        }
    }
    ctx->pc = 0x2F6BF0u;
    // 0x2f6bf0: 0x24052010  addiu       $a1, $zero, 0x2010
    ctx->pc = 0x2f6bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
label_2f6bf4:
    // 0x2f6bf4: 0x2684cc80  addiu       $a0, $s4, -0x3380
    ctx->pc = 0x2f6bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954112));
    // 0x2f6bf8: 0x2652818  mult        $a1, $s3, $a1
    ctx->pc = 0x2f6bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2f6bfc: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x2f6bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2f6c00: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2f6c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2f6c04:
    // 0x2f6c04: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2f6c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f6c08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6c0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f6c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f6c10: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2f6c10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2f6c14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f6c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f6c18: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f6c18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6c1c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f6c1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6c20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f6c20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6c24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f6c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C2Cu;
        // 0x2f6c30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6C34u;
    // 0x2f6c34: 0x0  nop
    ctx->pc = 0x2f6c34u;
    // NOP
    ctx->pc = 0x2f6c38u;
}
