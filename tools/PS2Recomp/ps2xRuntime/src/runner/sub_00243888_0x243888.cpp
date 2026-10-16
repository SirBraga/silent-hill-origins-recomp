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

// Function: sub_00243888
// Address: 0x243888 - 0x243b20
void sub_00243888_0x243888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243888_0x243888");
#endif

    switch (ctx->pc) {
        case 0x2438d8u: goto label_2438d8;
        case 0x243918u: goto label_243918;
        case 0x2439b0u: goto label_2439b0;
        case 0x243ae0u: goto label_243ae0;
        case 0x243af0u: goto label_243af0;
        default: break;
    }

    ctx->pc = 0x243888u;

    // 0x243888: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x243888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24388c: 0x24e3fffe  addiu       $v1, $a3, -0x2
    ctx->pc = 0x24388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x243890: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x243890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x243894: 0x2ce70003  sltiu       $a3, $a3, 0x3
    ctx->pc = 0x243894u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x243898: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x243898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x24389c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24389cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2438a0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2438a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2438a4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2438a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2438a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2438a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2438ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2438acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2438b0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2438b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2438b4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2438b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2438b8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2438b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2438bc: 0x67900a  movz        $s2, $v1, $a3
    ctx->pc = 0x2438bcu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3));
    // 0x2438c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2438c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2438c4: 0x24550fe0  addiu       $s5, $v0, 0xFE0
    ctx->pc = 0x2438c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x2438c8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2438c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2438cc: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2438CCu;
    {
        const bool branch_taken_0x2438cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2438D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438CCu;
        // 0x2438d0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438cc) {
            ctx->pc = 0x243AE0u;
            goto label_243ae0;
        }
    }
    ctx->pc = 0x2438D4u;
    // 0x2438d4: 0x0  nop
    ctx->pc = 0x2438d4u;
    // NOP
label_2438d8:
    // 0x2438d8: 0x3c0b7c00  lui         $t3, 0x7C00
    ctx->pc = 0x2438d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)31744 << 16));
    // 0x2438dc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x2438dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x2438e0: 0x7aa90000  lq          $t1, 0x0($s5)
    ctx->pc = 0x2438e0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2438e4: 0x24590f40  addiu       $t9, $v0, 0xF40
    ctx->pc = 0x2438e4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x2438e8: 0x2479023  subu        $s2, $s2, $a3
    ctx->pc = 0x2438e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2438ec: 0x24180010  addiu       $t8, $zero, 0x10
    ctx->pc = 0x2438ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2438f0: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x2438f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2438f4: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x2438f4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x2438f8: 0x3c0d0400  lui         $t5, 0x400
    ctx->pc = 0x2438f8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1024 << 16));
    // 0x2438fc: 0x340c8002  ori         $t4, $zero, 0x8002
    ctx->pc = 0x2438fcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x243900: 0xc65b8  dsll        $t4, $t4, 22
    ctx->pc = 0x243900u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 22);
    // 0x243904: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x243904u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
    // 0x243908: 0xc64f8  dsll        $t4, $t4, 19
    ctx->pc = 0x243908u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 19);
    // 0x24390c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x24390cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x243910: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x243910u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x243914: 0x0  nop
    ctx->pc = 0x243914u;
    // NOP
label_243918:
    // 0x243918: 0x2ce20011  sltiu       $v0, $a3, 0x11
    ctx->pc = 0x243918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x24391c: 0x300302d  daddu       $a2, $t8, $zero
    ctx->pc = 0x24391cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243920: 0xe2300b  movn        $a2, $a3, $v0
    ctx->pc = 0x243920u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7));
    // 0x243924: 0xcf2018  mult        $a0, $a2, $t7
    ctx->pc = 0x243924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x243928: 0xcd1825  or          $v1, $a2, $t5
    ctx->pc = 0x243928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x24392c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x24392cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x243930: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x243930u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x243934: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x243934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x243938: 0x6c2825  or          $a1, $v1, $t4
    ctx->pc = 0x243938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x24393c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x24393cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x243940: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x243940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x243944: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x243944u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
    // 0x243948: 0x4e1825  or          $v1, $v0, $t6
    ctx->pc = 0x243948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x24394c: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x24394cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x243950: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x243950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x243954: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x243954u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x243958: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x243958u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24395c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x24395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x243960: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243964: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x243964u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243968: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x243968u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x24396c: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x24396cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x243970: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x243970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x243974: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x243974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x243978: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x243978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x24397c: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x24397cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x243980: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x243980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x243984: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x243984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x243988: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x243988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24398c: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x24398cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x243990: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x243990u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x243994: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x243994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x243998: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x243998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x24399c: 0x10ca0046  beq         $a2, $t2, . + 4 + (0x46 << 2)
    ctx->pc = 0x24399Cu;
    {
        const bool branch_taken_0x24399c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        ctx->pc = 0x2439A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24399Cu;
        // 0x2439a0: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24399c) {
            ctx->pc = 0x243AB8u;
            goto label_243ab8;
        }
    }
    ctx->pc = 0x2439A4u;
    // 0x2439a4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2439a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2439a8: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x2439a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2439ac: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2439acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_2439b0:
    // 0x2439b0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2439b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2439b4: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x2439b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2439b8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2439b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2439bc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2439bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2439c0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2439c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2439c4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2439c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2439c8: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x2439c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2439cc: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x2439ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2439d0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2439d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2439d4: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x2439d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2439d8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2439d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2439dc: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2439dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2439e0: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x2439e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2439e4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2439e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2439e8: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x2439e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2439ec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2439ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2439f0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2439f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2439f4: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x2439f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2439f8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2439f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2439fc: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x2439fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x243a00: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243a04: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243a08: 0x78a2ffc0  lq          $v0, -0x40($a1)
    ctx->pc = 0x243a08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967232)));
    // 0x243a0c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x243a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x243a10: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x243a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x243a14: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243a18: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243a18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243a1c: 0x78a2ffd0  lq          $v0, -0x30($a1)
    ctx->pc = 0x243a1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967248)));
    // 0x243a20: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x243a20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x243a24: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x243a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x243a28: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243a2c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243a2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243a30: 0x78a2ffe0  lq          $v0, -0x20($a1)
    ctx->pc = 0x243a30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967264)));
    // 0x243a34: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x243a34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x243a38: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x243a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x243a3c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243a40: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243a40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243a44: 0x78a2fff0  lq          $v0, -0x10($a1)
    ctx->pc = 0x243a44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x243a48: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x243a48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x243a4c: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x243a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x243a50: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243a54: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243a54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243a58: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x243a58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x243a5c: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x243a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x243a60: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x243a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x243a64: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243a68: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243a6c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x243a6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x243a70: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x243a70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x243a74: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x243a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x243a78: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243a7c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243a7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243a80: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x243a80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x243a84: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x243a84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x243a88: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x243a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x243a8c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243a90: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243a90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243a94: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x243a94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x243a98: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x243a98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
    // 0x243a9c: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x243a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x243aa0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243aa4: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x243aa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243aa8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x243aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x243aac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x243aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x243ab0: 0x14c8ffbf  bne         $a2, $t0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x243AB0u;
    {
        const bool branch_taken_0x243ab0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x243AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AB0u;
        // 0x243ab4: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ab0) {
            ctx->pc = 0x2439B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2439b0;
        }
    }
    ctx->pc = 0x243AB8u;
label_243ab8:
    // 0x243ab8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x243ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x243abc: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x243abcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x243ac0: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x243ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x243ac4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x243ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x243ac8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243acc: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x243accu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243ad0: 0x14e0ff91  bnez        $a3, . + 4 + (-0x6F << 2)
    ctx->pc = 0x243AD0u;
    {
        const bool branch_taken_0x243ad0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x243AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AD0u;
        // 0x243ad4: 0x7b290000  lq          $t1, 0x0($t9) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 25), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ad0) {
            ctx->pc = 0x243918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243918;
        }
    }
    ctx->pc = 0x243AD8u;
    // 0x243ad8: 0xc0908e0  jal         func_242380
    ctx->pc = 0x243AD8u;
    SET_GPR_U32(ctx, 31, 0x243AE0u);
    ctx->pc = 0x242380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242380u, 0x243AD8u, 0x243AE0u)) {
        return;
    }
    ctx->pc = 0x243AE0u;
label_243ae0:
    // 0x243ae0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x243ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243ae4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x243ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243ae8: 0xc090932  jal         func_2424C8
    ctx->pc = 0x243AE8u;
    SET_GPR_U32(ctx, 31, 0x243AF0u);
    ctx->pc = 0x243AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AE8u;
    // 0x243aec: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2424C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2424C8u, 0x243AE8u, 0x243AF0u)) {
        return;
    }
    ctx->pc = 0x243AF0u;
label_243af0:
    // 0x243af0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x243af0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243af4: 0x54e0ff78  bnel        $a3, $zero, . + 4 + (-0x88 << 2)
    ctx->pc = 0x243AF4u;
    {
        const bool branch_taken_0x243af4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x243af4) {
            ctx->pc = 0x243AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243AF4u;
            // 0x243af8: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2438D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2438d8;
        }
    }
    ctx->pc = 0x243AFCu;
    // 0x243afc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x243afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243b00: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x243b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243b04: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x243b04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243b08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x243b08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243b0c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x243b0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243b10: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x243b10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243b18: 0x3e00008  jr          $ra
    ctx->pc = 0x243B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B18u;
        // 0x243b1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243B20u;
}
