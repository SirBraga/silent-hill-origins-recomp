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

// Function: sub_002A4648
// Address: 0x2a4648 - 0x2a4af0
void sub_002A4648_0x2a4648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4648_0x2a4648");
#endif

    switch (ctx->pc) {
        case 0x2a4728u: goto label_2a4728;
        default: break;
    }

    ctx->pc = 0x2a4648u;

    // 0x2a4648: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a4648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a464c: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x2a464cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4650: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2a4650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2a4654: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x2a4654u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4658: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x2a4658u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a465c: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2a465cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a4660: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2a4660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a4664: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2a4664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a4668: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2a4668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a466c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2a466cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4670: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2a4670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2a4674: 0x68ea0007  ldl         $t2, 0x7($a3)
    ctx->pc = 0x2a4674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2a4678: 0x6cea0000  ldr         $t2, 0x0($a3)
    ctx->pc = 0x2a4678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2a467c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2a467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a4680: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x2a4680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4684: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x2a4684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4688: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2a4688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2a468c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a468cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a4690: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x2a4690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2a4694: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x2a4694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2a4698: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x2a4698u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2a469c: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x2a469cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a46a0: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x2a46a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a46a4: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x2a46a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x2a46a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a46a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46ac: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x2a46acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x2a46b0: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x2a46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x2a46b4: 0x200a0001  addi        $t2, $zero, 0x1
    ctx->pc = 0x2a46b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x2a46b8: 0x714a5488  pextlw      $t2, $t2, $t2
    ctx->pc = 0x2a46b8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10)));
    // 0x2a46bc: 0x714a5389  pcpyld      $t2, $t2, $t2
    ctx->pc = 0x2a46bcu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10)));
    // 0x2a46c0: 0x48c41000  ctc2.ni     $a0, $vi2
    ctx->pc = 0x2a46c0u;
    ctx->vi[2] = static_cast<uint16_t>(GPR_U32(ctx, 4));
    // 0x2a46c4: 0x48c31800  ctc2.ni     $v1, $vi3
    ctx->pc = 0x2a46c4u;
    ctx->vi[3] = static_cast<uint16_t>(GPR_U32(ctx, 3));
    // 0x2a46c8: 0x48c22000  ctc2.ni     $v0, $vi4
    ctx->pc = 0x2a46c8u;
    ctx->vi[4] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x2a46cc: 0x4a002938  vcallms     0x520
    ctx->pc = 0x2a46ccu;
    {     ctx->vu0_tpc = 0x520;     runtime->executeVU0Microprogram(rdram, ctx, 0x520); }
    // 0x2a46d0: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2a46d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a46d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a46d8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2a46d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2a46dc: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2a46dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a46e0: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x2a46e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a46e4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2a46e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2a46e8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2a46e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a46ec: 0x4103e  dsrl32      $v0, $a0, 0
    ctx->pc = 0x2a46ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a46f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2a46f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2a46f4: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x2a46f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a46f8: 0x20040001  addi        $a0, $zero, 0x1
    ctx->pc = 0x2a46f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x2a46fc: 0x70842488  pextlw      $a0, $a0, $a0
    ctx->pc = 0x2a46fcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x2a4700: 0x70842389  pcpyld      $a0, $a0, $a0
    ctx->pc = 0x2a4700u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x2a4704: 0x716b5c88  pextlw      $t3, $t3, $t3
    ctx->pc = 0x2a4704u;
    SET_GPR_VEC(ctx, 11, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 11)));
    // 0x2a4708: 0x716b5b89  pcpyld      $t3, $t3, $t3
    ctx->pc = 0x2a4708u;
    SET_GPR_VEC(ctx, 11, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 11)));
    // 0x2a470c: 0x70006c89  pand        $t5, $zero, $zero
    ctx->pc = 0x2a470cu;
    SET_GPR_VEC(ctx, 13, PS2_PAND(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4710: 0x716b6489  pand        $t4, $t3, $t3
    ctx->pc = 0x2a4710u;
    SET_GPR_VEC(ctx, 12, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 11)));
    // 0x2a4714: 0x70007489  pand        $t6, $zero, $zero
    ctx->pc = 0x2a4714u;
    SET_GPR_VEC(ctx, 14, PS2_PAND(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4718: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A4718u;
    {
        const bool branch_taken_0x2a4718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4718) {
            ctx->pc = 0x2A478Cu;
            goto label_2a478c;
        }
    }
    ctx->pc = 0x2A4720u;
    // 0x2a4720: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A4720u;
    {
        const bool branch_taken_0x2a4720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4720u;
        // 0x2a4724: 0x40074800  mfc0        $a3, Count (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_count);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4720) {
            ctx->pc = 0x2A478Cu;
            goto label_2a478c;
        }
    }
    ctx->pc = 0x2A4728u;
label_2a4728:
    // 0x2a4728: 0x4a002778  vcallms     0x4E8
    ctx->pc = 0x2a4728u;
    {     ctx->vu0_tpc = 0x4E8;     runtime->executeVU0Microprogram(rdram, ctx, 0x4E8); }
    // 0x2a472c: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x2a472cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2a4730: 0x710b4888  pcgtw       $t1, $t0, $t3
    ctx->pc = 0x2a4730u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x2a4734: 0x716858c8  pmaxw       $t3, $t3, $t0
    ctx->pc = 0x2a4734u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 8)));
    // 0x2a4738: 0x71244c89  pand        $t1, $t1, $a0
    ctx->pc = 0x2a4738u;
    SET_GPR_VEC(ctx, 9, PS2_PAND(GPR_VEC(ctx, 9), GPR_VEC(ctx, 4)));
    // 0x2a473c: 0x71a968c8  pmaxw       $t5, $t5, $t1
    ctx->pc = 0x2a473cu;
    SET_GPR_VEC(ctx, 13, PS2_PMAXW(GPR_VEC(ctx, 13), GPR_VEC(ctx, 9)));
    // 0x2a4740: 0x48282000  qmfc2.ni    $t0, $vf4
    ctx->pc = 0x2a4740u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a4744: 0x710c4888  pcgtw       $t1, $t0, $t4
    ctx->pc = 0x2a4744u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x2a4748: 0x718860c8  pmaxw       $t4, $t4, $t0
    ctx->pc = 0x2a4748u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXW(GPR_VEC(ctx, 12), GPR_VEC(ctx, 8)));
    // 0x2a474c: 0x71244c89  pand        $t1, $t1, $a0
    ctx->pc = 0x2a474cu;
    SET_GPR_VEC(ctx, 9, PS2_PAND(GPR_VEC(ctx, 9), GPR_VEC(ctx, 4)));
    // 0x2a4750: 0x71c970c8  pmaxw       $t6, $t6, $t1
    ctx->pc = 0x2a4750u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXW(GPR_VEC(ctx, 14), GPR_VEC(ctx, 9)));
    // 0x2a4754: 0x708a2008  paddw       $a0, $a0, $t2
    ctx->pc = 0x2a4754u;
    SET_GPR_VEC(ctx, 4, PS2_PADDW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 10)));
    // 0x2a4758: 0x4a0025b8  vcallms     0x4B0
    ctx->pc = 0x2a4758u;
    {     ctx->vu0_tpc = 0x4B0;     runtime->executeVU0Microprogram(rdram, ctx, 0x4B0); }
    // 0x2a475c: 0x48283000  qmfc2.ni    $t0, $vf6
    ctx->pc = 0x2a475cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2a4760: 0x710b4888  pcgtw       $t1, $t0, $t3
    ctx->pc = 0x2a4760u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x2a4764: 0x716858c8  pmaxw       $t3, $t3, $t0
    ctx->pc = 0x2a4764u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 8)));
    // 0x2a4768: 0x71244c89  pand        $t1, $t1, $a0
    ctx->pc = 0x2a4768u;
    SET_GPR_VEC(ctx, 9, PS2_PAND(GPR_VEC(ctx, 9), GPR_VEC(ctx, 4)));
    // 0x2a476c: 0x71a968c8  pmaxw       $t5, $t5, $t1
    ctx->pc = 0x2a476cu;
    SET_GPR_VEC(ctx, 13, PS2_PMAXW(GPR_VEC(ctx, 13), GPR_VEC(ctx, 9)));
    // 0x2a4770: 0x48283800  qmfc2.ni    $t0, $vf7
    ctx->pc = 0x2a4770u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2a4774: 0x710c4888  pcgtw       $t1, $t0, $t4
    ctx->pc = 0x2a4774u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)));
    // 0x2a4778: 0x718860c8  pmaxw       $t4, $t4, $t0
    ctx->pc = 0x2a4778u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXW(GPR_VEC(ctx, 12), GPR_VEC(ctx, 8)));
    // 0x2a477c: 0x71244c89  pand        $t1, $t1, $a0
    ctx->pc = 0x2a477cu;
    SET_GPR_VEC(ctx, 9, PS2_PAND(GPR_VEC(ctx, 9), GPR_VEC(ctx, 4)));
    // 0x2a4780: 0x71c970c8  pmaxw       $t6, $t6, $t1
    ctx->pc = 0x2a4780u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXW(GPR_VEC(ctx, 14), GPR_VEC(ctx, 9)));
    // 0x2a4784: 0x1482ffe8  bne         $a0, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2A4784u;
    {
        const bool branch_taken_0x2a4784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4784u;
        // 0x2a4788: 0x708a2008  paddw       $a0, $a0, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PADDW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4784) {
            ctx->pc = 0x2A4728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4728;
        }
    }
    ctx->pc = 0x2A478Cu;
label_2a478c:
    // 0x2a478c: 0x40064800  mfc0        $a2, Count
    ctx->pc = 0x2a478cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_count);
    // 0x2a4790: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2a4790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2a4794: 0x14a0001a  bnez        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A4794u;
    {
        const bool branch_taken_0x2a4794 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4794) {
            ctx->pc = 0x2A4800u;
            goto label_2a4800;
        }
    }
    ctx->pc = 0x2A479Cu;
    // 0x2a479c: 0x4a002778  vcallms     0x4E8
    ctx->pc = 0x2a479cu;
    {     ctx->vu0_tpc = 0x4E8;     runtime->executeVU0Microprogram(rdram, ctx, 0x4E8); }
    // 0x2a47a0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2a47a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2a47a4: 0x704b1888  pcgtw       $v1, $v0, $t3
    ctx->pc = 0x2a47a4u;
    SET_GPR_VEC(ctx, 3, PS2_PCGTW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 11)));
    // 0x2a47a8: 0x716258c8  pmaxw       $t3, $t3, $v0
    ctx->pc = 0x2a47a8u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x2a47ac: 0x70641c89  pand        $v1, $v1, $a0
    ctx->pc = 0x2a47acu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2a47b0: 0x71a368c8  pmaxw       $t5, $t5, $v1
    ctx->pc = 0x2a47b0u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXW(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x2a47b4: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x2a47b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a47b8: 0x704c1888  pcgtw       $v1, $v0, $t4
    ctx->pc = 0x2a47b8u;
    SET_GPR_VEC(ctx, 3, PS2_PCGTW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 12)));
    // 0x2a47bc: 0x718260c8  pmaxw       $t4, $t4, $v0
    ctx->pc = 0x2a47bcu;
    SET_GPR_VEC(ctx, 12, PS2_PMAXW(GPR_VEC(ctx, 12), GPR_VEC(ctx, 2)));
    // 0x2a47c0: 0x70641c89  pand        $v1, $v1, $a0
    ctx->pc = 0x2a47c0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2a47c4: 0x71c370c8  pmaxw       $t6, $t6, $v1
    ctx->pc = 0x2a47c4u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXW(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x2a47c8: 0x708a2008  paddw       $a0, $a0, $t2
    ctx->pc = 0x2a47c8u;
    SET_GPR_VEC(ctx, 4, PS2_PADDW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 10)));
    // 0x2a47cc: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x2a47ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2a47d0: 0x704b1888  pcgtw       $v1, $v0, $t3
    ctx->pc = 0x2a47d0u;
    SET_GPR_VEC(ctx, 3, PS2_PCGTW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 11)));
    // 0x2a47d4: 0x716258c8  pmaxw       $t3, $t3, $v0
    ctx->pc = 0x2a47d4u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x2a47d8: 0x70641c89  pand        $v1, $v1, $a0
    ctx->pc = 0x2a47d8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2a47dc: 0x71a368c8  pmaxw       $t5, $t5, $v1
    ctx->pc = 0x2a47dcu;
    SET_GPR_VEC(ctx, 13, PS2_PMAXW(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x2a47e0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x2a47e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2a47e4: 0x704c1888  pcgtw       $v1, $v0, $t4
    ctx->pc = 0x2a47e4u;
    SET_GPR_VEC(ctx, 3, PS2_PCGTW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 12)));
    // 0x2a47e8: 0x718260c8  pmaxw       $t4, $t4, $v0
    ctx->pc = 0x2a47e8u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXW(GPR_VEC(ctx, 12), GPR_VEC(ctx, 2)));
    // 0x2a47ec: 0x70641c89  pand        $v1, $v1, $a0
    ctx->pc = 0x2a47ecu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2a47f0: 0x71c370c8  pmaxw       $t6, $t6, $v1
    ctx->pc = 0x2a47f0u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXW(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x2a47f4: 0x708a2008  paddw       $a0, $a0, $t2
    ctx->pc = 0x2a47f4u;
    SET_GPR_VEC(ctx, 4, PS2_PADDW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 10)));
    // 0x2a47f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A47F8u;
    {
        const bool branch_taken_0x2a47f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a47f8) {
            ctx->pc = 0x2A482Cu;
            goto label_2a482c;
        }
    }
    ctx->pc = 0x2A4800u;
label_2a4800:
    // 0x2a4800: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2a4800u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2a4804: 0x704b1888  pcgtw       $v1, $v0, $t3
    ctx->pc = 0x2a4804u;
    SET_GPR_VEC(ctx, 3, PS2_PCGTW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 11)));
    // 0x2a4808: 0x716258c8  pmaxw       $t3, $t3, $v0
    ctx->pc = 0x2a4808u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x2a480c: 0x70641c89  pand        $v1, $v1, $a0
    ctx->pc = 0x2a480cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2a4810: 0x71a368c8  pmaxw       $t5, $t5, $v1
    ctx->pc = 0x2a4810u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXW(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x2a4814: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x2a4814u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a4818: 0x704c1888  pcgtw       $v1, $v0, $t4
    ctx->pc = 0x2a4818u;
    SET_GPR_VEC(ctx, 3, PS2_PCGTW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 12)));
    // 0x2a481c: 0x718260c8  pmaxw       $t4, $t4, $v0
    ctx->pc = 0x2a481cu;
    SET_GPR_VEC(ctx, 12, PS2_PMAXW(GPR_VEC(ctx, 12), GPR_VEC(ctx, 2)));
    // 0x2a4820: 0x70641c89  pand        $v1, $v1, $a0
    ctx->pc = 0x2a4820u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2a4824: 0x71c370c8  pmaxw       $t6, $t6, $v1
    ctx->pc = 0x2a4824u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXW(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x2a4828: 0x708a2008  paddw       $a0, $a0, $t2
    ctx->pc = 0x2a4828u;
    SET_GPR_VEC(ctx, 4, PS2_PADDW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 10)));
label_2a482c:
    // 0x2a482c: 0x4b0849bc  vmulax.x    $ACC, $vf9, $vf8x
    ctx->pc = 0x2a482cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x2a4830: 0x4b0848bd  vmadday.x   $ACC, $vf9, $vf8y
    ctx->pc = 0x2a4830u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x2a4834: 0x4b0848be  vmaddaz.x   $ACC, $vf9, $vf8z
    ctx->pc = 0x2a4834u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x2a4838: 0x4b084a0b  vmaddw.x    $vf8, $vf9, $vf8w
    ctx->pc = 0x2a4838u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x2a483c: 0x48224000  qmfc2.ni    $v0, $vf8
    ctx->pc = 0x2a483cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x2a4840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4844: 0x71ca7048  psubw       $t6, $t6, $t2
    ctx->pc = 0x2a4844u;
    SET_GPR_VEC(ctx, 14, PS2_PSUBW(GPR_VEC(ctx, 14), GPR_VEC(ctx, 10)));
    // 0x2a4848: 0x71aa6848  psubw       $t5, $t5, $t2
    ctx->pc = 0x2a4848u;
    SET_GPR_VEC(ctx, 13, PS2_PSUBW(GPR_VEC(ctx, 13), GPR_VEC(ctx, 10)));
    // 0x2a484c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a484cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4850: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2a4850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a4854: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2a4854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4858: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2a4858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a485c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2a485cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4860: 0x7fab0030  sq          $t3, 0x30($sp)
    ctx->pc = 0x2a4860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 11));
    // 0x2a4864: 0x7fac0040  sq          $t4, 0x40($sp)
    ctx->pc = 0x2a4864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 12));
    // 0x2a4868: 0x7fad0050  sq          $t5, 0x50($sp)
    ctx->pc = 0x2a4868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 13));
    // 0x2a486c: 0x7fae0060  sq          $t6, 0x60($sp)
    ctx->pc = 0x2a486cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 14));
    // 0x2a4870: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a4870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4874: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x2a4874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a4878: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4878u;
    {
        const bool branch_taken_0x2a4878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4878u;
        // 0x2a487c: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4878) {
            ctx->pc = 0x2A48A0u;
            goto label_2a48a0;
        }
    }
    ctx->pc = 0x2A4880u;
    // 0x2a4880: 0x5487000a  bnel        $a0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2A4880u;
    {
        const bool branch_taken_0x2a4880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x2a4880) {
            ctx->pc = 0x2A4884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4880u;
            // 0x2a4884: 0x8d050004  lw          $a1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A48ACu;
            goto label_2a48ac;
        }
    }
    ctx->pc = 0x2A4888u;
    // 0x2a4888: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a4888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a488c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2a488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2a4890: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2a4890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a4894: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4894u;
    {
        const bool branch_taken_0x2a4894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4894) {
            ctx->pc = 0x2A4898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4894u;
            // 0x2a4898: 0x8d050004  lw          $a1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A48ACu;
            goto label_2a48ac;
        }
    }
    ctx->pc = 0x2A489Cu;
    // 0x2a489c: 0x0  nop
    ctx->pc = 0x2a489cu;
    // NOP
label_2a48a0:
    // 0x2a48a0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a48a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48a4: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x2a48a4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48a8: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x2a48a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_2a48ac:
    // 0x2a48ac: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x2a48acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a48b0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2A48B0u;
    {
        const bool branch_taken_0x2a48b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a48b0) {
            ctx->pc = 0x2A48B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A48B0u;
            // 0x2a48b4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A48E0u;
            goto label_2a48e0;
        }
    }
    ctx->pc = 0x2A48B8u;
    // 0x2a48b8: 0x54a7000b  bnel        $a1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x2A48B8u;
    {
        const bool branch_taken_0x2a48b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x2a48b8) {
            ctx->pc = 0x2A48BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A48B8u;
            // 0x2a48bc: 0x8d050008  lw          $a1, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A48E8u;
            goto label_2a48e8;
        }
    }
    ctx->pc = 0x2A48C0u;
    // 0x2a48c0: 0xf1080  sll         $v0, $t7, 2
    ctx->pc = 0x2a48c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2a48c4: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x2a48c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2a48c8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2a48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a48cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a48ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a48d0: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2a48d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a48d4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A48D4u;
    {
        const bool branch_taken_0x2a48d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a48d4) {
            ctx->pc = 0x2A48D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A48D4u;
            // 0x2a48d8: 0x8d050008  lw          $a1, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A48E8u;
            goto label_2a48e8;
        }
    }
    ctx->pc = 0x2A48DCu;
    // 0x2a48dc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2a48dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a48e0:
    // 0x2a48e0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2a48e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a48e4: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x2a48e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2a48e8:
    // 0x2a48e8: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x2a48e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a48ec: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2A48ECu;
    {
        const bool branch_taken_0x2a48ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a48ec) {
            ctx->pc = 0x2A48F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A48ECu;
            // 0x2a48f0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A491Cu;
            goto label_2a491c;
        }
    }
    ctx->pc = 0x2A48F4u;
    // 0x2a48f4: 0x54a7000b  bnel        $a1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x2A48F4u;
    {
        const bool branch_taken_0x2a48f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x2a48f4) {
            ctx->pc = 0x2A48F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A48F4u;
            // 0x2a48f8: 0x8d05000c  lw          $a1, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4924u;
            goto label_2a4924;
        }
    }
    ctx->pc = 0x2A48FCu;
    // 0x2a48fc: 0xf1080  sll         $v0, $t7, 2
    ctx->pc = 0x2a48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2a4900: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x2a4900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2a4904: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2a4904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a4908: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a490c: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2a490cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a4910: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4910u;
    {
        const bool branch_taken_0x2a4910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4910) {
            ctx->pc = 0x2A4914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4910u;
            // 0x2a4914: 0x8d05000c  lw          $a1, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4924u;
            goto label_2a4924;
        }
    }
    ctx->pc = 0x2A4918u;
    // 0x2a4918: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2a4918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a491c:
    // 0x2a491c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x2a491cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4920: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x2a4920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_2a4924:
    // 0x2a4924: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x2a4924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a4928: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2A4928u;
    {
        const bool branch_taken_0x2a4928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4928) {
            ctx->pc = 0x2A492Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4928u;
            // 0x2a492c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4958u;
            goto label_2a4958;
        }
    }
    ctx->pc = 0x2A4930u;
    // 0x2a4930: 0x14a7000b  bne         $a1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x2A4930u;
    {
        const bool branch_taken_0x2a4930 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x2A4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4930u;
        // 0x2a4934: 0x27aa0060  addiu       $t2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4930) {
            ctx->pc = 0x2A4960u;
            goto label_2a4960;
        }
    }
    ctx->pc = 0x2A4938u;
    // 0x2a4938: 0xf1080  sll         $v0, $t7, 2
    ctx->pc = 0x2a4938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2a493c: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x2a493cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2a4940: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2a4940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a4944: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4948: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2a4948u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a494c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A494Cu;
    {
        const bool branch_taken_0x2a494c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A494Cu;
        // 0x2a4950: 0x8fa60070  lw          $a2, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a494c) {
            ctx->pc = 0x2A4964u;
            goto label_2a4964;
        }
    }
    ctx->pc = 0x2A4954u;
    // 0x2a4954: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2a4954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a4958:
    // 0x2a4958: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x2a4958u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a495c: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x2a495cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a4960:
    // 0x2a4960: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2a4960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2a4964:
    // 0x2a4964: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x2a4964u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4968: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2a4968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a496c: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x2a496cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4970: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2a4970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a4974: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x2a4974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a4978: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4978u;
    {
        const bool branch_taken_0x2a4978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4978u;
        // 0x2a497c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4978) {
            ctx->pc = 0x2A49A0u;
            goto label_2a49a0;
        }
    }
    ctx->pc = 0x2A4980u;
    // 0x2a4980: 0x5486000a  bnel        $a0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2A4980u;
    {
        const bool branch_taken_0x2a4980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x2a4980) {
            ctx->pc = 0x2A4984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4980u;
            // 0x2a4984: 0x8d050004  lw          $a1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A49ACu;
            goto label_2a49ac;
        }
    }
    ctx->pc = 0x2A4988u;
    // 0x2a4988: 0x8c63fffc  lw          $v1, -0x4($v1)
    ctx->pc = 0x2a4988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x2a498c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a4990: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2a4990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a4994: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4994u;
    {
        const bool branch_taken_0x2a4994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4994) {
            ctx->pc = 0x2A4998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4994u;
            // 0x2a4998: 0x8d050004  lw          $a1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A49ACu;
            goto label_2a49ac;
        }
    }
    ctx->pc = 0x2A499Cu;
    // 0x2a499c: 0x0  nop
    ctx->pc = 0x2a499cu;
    // NOP
label_2a49a0:
    // 0x2a49a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2a49a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a49a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49a8: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x2a49a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_2a49ac:
    // 0x2a49ac: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2a49acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a49b0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2A49B0u;
    {
        const bool branch_taken_0x2a49b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a49b0) {
            ctx->pc = 0x2A49B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A49B0u;
            // 0x2a49b4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A49E0u;
            goto label_2a49e0;
        }
    }
    ctx->pc = 0x2A49B8u;
    // 0x2a49b8: 0x54a6000b  bnel        $a1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2A49B8u;
    {
        const bool branch_taken_0x2a49b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x2a49b8) {
            ctx->pc = 0x2A49BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A49B8u;
            // 0x2a49bc: 0x8d050008  lw          $a1, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A49E8u;
            goto label_2a49e8;
        }
    }
    ctx->pc = 0x2A49C0u;
    // 0x2a49c0: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2a49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2a49c4: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x2a49c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2a49c8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2a49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2a49cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a49d0: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2a49d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a49d4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A49D4u;
    {
        const bool branch_taken_0x2a49d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a49d4) {
            ctx->pc = 0x2A49D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A49D4u;
            // 0x2a49d8: 0x8d050008  lw          $a1, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A49E8u;
            goto label_2a49e8;
        }
    }
    ctx->pc = 0x2A49DCu;
    // 0x2a49dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a49dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a49e0:
    // 0x2a49e0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a49e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a49e4: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x2a49e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2a49e8:
    // 0x2a49e8: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2a49e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a49ec: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2A49ECu;
    {
        const bool branch_taken_0x2a49ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a49ec) {
            ctx->pc = 0x2A49F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A49ECu;
            // 0x2a49f0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4A1Cu;
            goto label_2a4a1c;
        }
    }
    ctx->pc = 0x2A49F4u;
    // 0x2a49f4: 0x54a6000b  bnel        $a1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2A49F4u;
    {
        const bool branch_taken_0x2a49f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x2a49f4) {
            ctx->pc = 0x2A49F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A49F4u;
            // 0x2a49f8: 0x8d05000c  lw          $a1, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4A24u;
            goto label_2a4a24;
        }
    }
    ctx->pc = 0x2A49FCu;
    // 0x2a49fc: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2a49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2a4a00: 0x8d640008  lw          $a0, 0x8($t3)
    ctx->pc = 0x2a4a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2a4a04: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2a4a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2a4a08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4a0c: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2a4a0cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a4a10: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4A10u;
    {
        const bool branch_taken_0x2a4a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4a10) {
            ctx->pc = 0x2A4A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4A10u;
            // 0x2a4a14: 0x8d05000c  lw          $a1, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4A24u;
            goto label_2a4a24;
        }
    }
    ctx->pc = 0x2A4A18u;
    // 0x2a4a18: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a4a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a4a1c:
    // 0x2a4a1c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2a4a1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4a20: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x2a4a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_2a4a24:
    // 0x2a4a24: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2a4a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a4a28: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2A4A28u;
    {
        const bool branch_taken_0x2a4a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4a28) {
            ctx->pc = 0x2A4A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4A28u;
            // 0x2a4a2c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4A58u;
            goto label_2a4a58;
        }
    }
    ctx->pc = 0x2A4A30u;
    // 0x2a4a30: 0x14a6000b  bne         $a1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2A4A30u;
    {
        const bool branch_taken_0x2a4a30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2A4A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A30u;
        // 0x2a4a34: 0xe6102a  slt         $v0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a30) {
            ctx->pc = 0x2A4A60u;
            goto label_2a4a60;
        }
    }
    ctx->pc = 0x2A4A38u;
    // 0x2a4a38: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2a4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2a4a3c: 0x8d64000c  lw          $a0, 0xC($t3)
    ctx->pc = 0x2a4a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x2a4a40: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2a4a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2a4a44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4a48: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2a4a48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a4a4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4A4Cu;
    {
        const bool branch_taken_0x2a4a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A4Cu;
        // 0x2a4a50: 0xe6102a  slt         $v0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a4c) {
            ctx->pc = 0x2A4A60u;
            goto label_2a4a60;
        }
    }
    ctx->pc = 0x2A4A54u;
    // 0x2a4a54: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a4a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a4a58:
    // 0x2a4a58: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2a4a58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4a5c: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x2a4a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2a4a60:
    // 0x2a4a60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4A60u;
    {
        const bool branch_taken_0x2a4a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A60u;
        // 0x2a4a64: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a60) {
            ctx->pc = 0x2A4A7Cu;
            goto label_2a4a7c;
        }
    }
    ctx->pc = 0x2A4A68u;
    // 0x2a4a68: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2a4a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2a4a6c: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x2a4a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2a4a70: 0xaf040000  sw          $a0, 0x0($t8)
    ctx->pc = 0x2a4a70u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 4));
    // 0x2a4a74: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2A4A74u;
    {
        const bool branch_taken_0x2a4a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A74u;
        // 0x2a4a78: 0xaf290000  sw          $t1, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a74) {
            ctx->pc = 0x2A4AE4u;
            goto label_2a4ae4;
        }
    }
    ctx->pc = 0x2A4A7Cu;
label_2a4a7c:
    // 0x2a4a7c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2a4a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a4a80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4A80u;
    {
        const bool branch_taken_0x2a4a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A80u;
        // 0x2a4a84: 0xf1080  sll         $v0, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a80) {
            ctx->pc = 0x2A4A94u;
            goto label_2a4a94;
        }
    }
    ctx->pc = 0x2A4A88u;
    // 0x2a4a88: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2a4a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2a4a8c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A4A8Cu;
    {
        const bool branch_taken_0x2a4a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A8Cu;
        // 0x2a4a90: 0x8c640050  lw          $a0, 0x50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a8c) {
            ctx->pc = 0x2A4ADCu;
            goto label_2a4adc;
        }
    }
    ctx->pc = 0x2A4A94u;
label_2a4a94:
    // 0x2a4a94: 0x14c70014  bne         $a2, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A4A94u;
    {
        const bool branch_taken_0x2a4a94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x2A4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A94u;
        // 0x2a4a98: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a94) {
            ctx->pc = 0x2A4AE8u;
            goto label_2a4ae8;
        }
    }
    ctx->pc = 0x2A4A9Cu;
    // 0x2a4a9c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2a4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2a4aa0: 0xf1880  sll         $v1, $t7, 2
    ctx->pc = 0x2a4aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2a4aa4: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x2a4aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2a4aa8: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x2a4aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2a4aac: 0x8c860060  lw          $a2, 0x60($a0)
    ctx->pc = 0x2a4aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2a4ab0: 0x8ca40050  lw          $a0, 0x50($a1)
    ctx->pc = 0x2a4ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x2a4ab4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2a4ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a4ab8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a4abc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2a4abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2a4ac0: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2a4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2a4ac4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2a4ac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a4ac8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4AC8u;
    {
        const bool branch_taken_0x2a4ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4ac8) {
            ctx->pc = 0x2A4ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4AC8u;
            // 0x2a4acc: 0xaf040000  sw          $a0, 0x0($t8) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4AE0u;
            goto label_2a4ae0;
        }
    }
    ctx->pc = 0x2A4AD0u;
    // 0x2a4ad0: 0xaf060000  sw          $a2, 0x0($t8)
    ctx->pc = 0x2a4ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 6));
    // 0x2a4ad4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4AD4u;
    {
        const bool branch_taken_0x2a4ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4AD4u;
        // 0x2a4ad8: 0xaf290000  sw          $t1, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ad4) {
            ctx->pc = 0x2A4AE8u;
            goto label_2a4ae8;
        }
    }
    ctx->pc = 0x2A4ADCu;
label_2a4adc:
    // 0x2a4adc: 0xaf040000  sw          $a0, 0x0($t8)
    ctx->pc = 0x2a4adcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 4));
label_2a4ae0:
    // 0x2a4ae0: 0xaf2f0000  sw          $t7, 0x0($t9)
    ctx->pc = 0x2a4ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 15));
label_2a4ae4:
    // 0x2a4ae4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2a4ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a4ae8:
    // 0x2a4ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4AE8u;
        // 0x2a4aec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4AF0u;
}
