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

// Function: sub_00245438
// Address: 0x245438 - 0x245700
void sub_00245438_0x245438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245438_0x245438");
#endif

    switch (ctx->pc) {
        case 0x2454c0u: goto label_2454c0;
        case 0x2454d0u: goto label_2454d0;
        case 0x2454e4u: goto label_2454e4;
        case 0x2454f0u: goto label_2454f0;
        case 0x245610u: goto label_245610;
        case 0x2456d0u: goto label_2456d0;
        default: break;
    }

    ctx->pc = 0x245438u;

    // 0x245438: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x245438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24543c: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24543cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x245440: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x245440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x245444: 0x340ca000  ori         $t4, $zero, 0xA000
    ctx->pc = 0x245444u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x245448: 0xc67b8  dsll        $t4, $t4, 30
    ctx->pc = 0x245448u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 30);
    // 0x24544c: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x24544cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
    // 0x245450: 0xc6478  dsll        $t4, $t4, 17
    ctx->pc = 0x245450u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 17);
    // 0x245454: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x245454u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245458: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x245458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x24545c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x24545cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x245460: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x245460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x245464: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x245464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x245468: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x245468u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x24546c: 0x7185f389  pcpyld      $fp, $t4, $a1
    ctx->pc = 0x24546cu;
    SET_GPR_VEC(ctx, 30, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 5)));
    // 0x245470: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x245470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x245474: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x245474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x245478: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x245478u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x24547c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x24547cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x245480: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x245480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x245484: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x245484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x245488: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x245488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x24548c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x24548cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x245490: 0x4a83e  dsrl32      $s5, $a0, 0
    ctx->pc = 0x245490u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x245494: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x245494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x245498: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x245498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x24549c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x24549cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2454a0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2454a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2454a4: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x2454a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2454a8: 0x9283e  dsrl32      $a1, $t1, 0
    ctx->pc = 0x2454a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x2454ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2454acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2454b0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2454b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2454b4: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x2454b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x2454b8: 0xc07db0a  jal         func_1F6C28
    ctx->pc = 0x2454B8u;
    SET_GPR_U32(ctx, 31, 0x2454C0u);
    ctx->pc = 0x2454BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454B8u;
    // 0x2454bc: 0x1521f8  dsll        $a0, $s5, 7 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << 7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x2454B8u, 0x2454C0u)) {
        return;
    }
    ctx->pc = 0x2454C0u;
label_2454c0:
    // 0x2454c0: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x2454c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2454c4: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x2454c4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x2454c8: 0xc08ba56  jal         func_22E958
    ctx->pc = 0x2454C8u;
    SET_GPR_U32(ctx, 31, 0x2454D0u);
    ctx->pc = 0x2454CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454C8u;
    // 0x2454cc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E958u, 0x2454C8u, 0x2454D0u)) {
        return;
    }
    ctx->pc = 0x2454D0u;
label_2454d0:
    // 0x2454d0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2454d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2454d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2454d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2454d8: 0x2c42018  mult        $a0, $s6, $a0
    ctx->pc = 0x2454d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2454dc: 0xc08bdde  jal         func_22F778
    ctx->pc = 0x2454DCu;
    SET_GPR_U32(ctx, 31, 0x2454E4u);
    ctx->pc = 0x2454E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454DCu;
    // 0x2454e0: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F778u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22F778u, 0x2454DCu, 0x2454E4u)) {
        return;
    }
    ctx->pc = 0x2454E4u;
label_2454e4:
    // 0x2454e4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2454e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2454e8: 0xc08ba56  jal         func_22E958
    ctx->pc = 0x2454E8u;
    SET_GPR_U32(ctx, 31, 0x2454F0u);
    ctx->pc = 0x2454ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454E8u;
    // 0x2454ec: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E958u, 0x2454E8u, 0x2454F0u)) {
        return;
    }
    ctx->pc = 0x2454F0u;
label_2454f0:
    // 0x2454f0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2454f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2454f4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2454f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2454f8: 0x17203c  dsll32      $a0, $s7, 0
    ctx->pc = 0x2454f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 0));
    // 0x2454fc: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x2454fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x245500: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x245500u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245504: 0x70651389  pcpyld      $v0, $v1, $a1
    ctx->pc = 0x245504u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x245508: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x245508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x24550c: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x24550cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x245510: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x245510u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x245514: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x245514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x245518: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x245518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24551c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x24551cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x245520: 0x3c070070  lui         $a3, 0x70
    ctx->pc = 0x245520u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)112 << 16));
    // 0x245524: 0x24e64140  addiu       $a2, $a3, 0x4140
    ctx->pc = 0x245524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16704));
    // 0x245528: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x245528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x24552c: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x24552cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x704170u));
    // 0x245530: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x245530u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x245534: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x245534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x245538: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x245538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24553c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x24553cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x704140u));
    // 0x245540: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x245540u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x245544: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x245544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x245548: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x245548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24554c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x24554cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x245550: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x245550u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x245554: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x245554u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x245558: 0x139c3c  dsll32      $s3, $s3, 16
    ctx->pc = 0x245558u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 16));
    // 0x24555c: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x24555cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x245560: 0x32313fff  andi        $s1, $s1, 0x3FFF
    ctx->pc = 0x245560u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16383);
    // 0x245564: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x245564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x245568: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x245568u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x24556c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x24556cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x245570: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x245570u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
    // 0x245574: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x245574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x245578: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x245578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x24557c: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x24557cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x245580: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x245580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x245584: 0x70451389  pcpyld      $v0, $v0, $a1
    ctx->pc = 0x245584u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x245588: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x245588u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x24558c: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x24558cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x245590: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x245590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x245594: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x245594u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x245598: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x245598u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x24559c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x24559cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2455a0: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x2455a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2455a4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2455a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2455a8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2455a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2455ac: 0x16283c  dsll32      $a1, $s6, 0
    ctx->pc = 0x2455acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) << (32 + 0));
    // 0x2455b0: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x2455b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2455b4: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x2455b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2455b8: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x2455b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x2455bc: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x2455bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x2455c0: 0x70451389  pcpyld      $v0, $v0, $a1
    ctx->pc = 0x2455c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x2455c4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x2455c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x2455c8: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2455c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2455cc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2455ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2455d0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2455d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2455d4: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x2455d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2455d8: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x2455d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x2455dc: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x2455dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2455e0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2455e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2455e4: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x2455e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2455e8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2455e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2455ec: 0x12c00022  beqz        $s6, . + 4 + (0x22 << 2)
    ctx->pc = 0x2455ECu;
    {
        const bool branch_taken_0x2455ec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2455F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455ECu;
        // 0x2455f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455ec) {
            ctx->pc = 0x245678u;
            goto label_245678;
        }
    }
    ctx->pc = 0x2455F4u;
    // 0x2455f4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2455f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2455f8: 0x26caffff  addiu       $t2, $s6, -0x1
    ctx->pc = 0x2455f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x2455fc: 0x2a24825  or          $t1, $s5, $v0
    ctx->pc = 0x2455fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x245600: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x245600u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x245604: 0xd6b3c  dsll32      $t5, $t5, 12
    ctx->pc = 0x245604u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 12));
    // 0x245608: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x245608u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24560c: 0x0  nop
    ctx->pc = 0x24560cu;
    // NOP
label_245610:
    // 0x245610: 0x7cde0000  sq          $fp, 0x0($a2)
    ctx->pc = 0x245610u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 30));
    // 0x245614: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x245614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x245618: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x245618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24561c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24561cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245620: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x245620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x245624: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x245624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x245628: 0x14203c  dsll32      $a0, $s4, 0
    ctx->pc = 0x245628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
    // 0x24562c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24562cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x245630: 0x31f00  sll         $v1, $v1, 28
    ctx->pc = 0x245630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
    // 0x245634: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x245634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x245638: 0x2a31825  or          $v1, $s5, $v1
    ctx->pc = 0x245638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x24563c: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x24563cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x245640: 0x9603c  dsll32      $t4, $t1, 0
    ctx->pc = 0x245640u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) << (32 + 0));
    // 0x245644: 0x4d2825  or          $a1, $v0, $t5
    ctx->pc = 0x245644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x245648: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x245648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x24564c: 0x71651389  pcpyld      $v0, $t3, $a1
    ctx->pc = 0x24564cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 5)));
    // 0x245650: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x245650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245654: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x245654u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x245658: 0x285a021  addu        $s4, $s4, $a1
    ctx->pc = 0x245658u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x24565c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24565cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x245660: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x245660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x245664: 0x71851389  pcpyld      $v0, $t4, $a1
    ctx->pc = 0x245664u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 5)));
    // 0x245668: 0x116182b  sltu        $v1, $t0, $s6
    ctx->pc = 0x245668u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x24566c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x24566cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x245670: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x245670u;
    {
        const bool branch_taken_0x245670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x245674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245670u;
        // 0x245674: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245670) {
            ctx->pc = 0x245610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245610;
        }
    }
    ctx->pc = 0x245678u;
label_245678:
    // 0x245678: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x245678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x24567c: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x24567cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x245680: 0x340ca000  ori         $t4, $zero, 0xA000
    ctx->pc = 0x245680u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x245684: 0xc6778  dsll        $t4, $t4, 29
    ctx->pc = 0x245684u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 29);
    // 0x245688: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x245688u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
    // 0x24568c: 0xc64b8  dsll        $t4, $t4, 18
    ctx->pc = 0x24568cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 18);
    // 0x245690: 0x71851389  pcpyld      $v0, $t4, $a1
    ctx->pc = 0x245690u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 5)));
    // 0x245694: 0x24e34140  addiu       $v1, $a3, 0x4140
    ctx->pc = 0x245694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16704));
    // 0x245698: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x245698u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x24569c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x24569cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2456a0: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x2456a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x2456a4: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x2456a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x2456a8: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x2456a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2456ac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2456acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2456b0: 0x71851389  pcpyld      $v0, $t4, $a1
    ctx->pc = 0x2456b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 5)));
    // 0x2456b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2456b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2456b8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2456b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2456bc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2456bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2456c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2456c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2456c4: 0x24c5008f  addiu       $a1, $a2, 0x8F
    ctx->pc = 0x2456c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 143));
    // 0x2456c8: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2456C8u;
    SET_GPR_U32(ctx, 31, 0x2456D0u);
    ctx->pc = 0x2456CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2456C8u;
    // 0x2456cc: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2456C8u, 0x2456D0u)) {
        return;
    }
    ctx->pc = 0x2456D0u;
label_2456d0:
    // 0x2456d0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2456d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2456d4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2456d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2456d8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2456d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2456dc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2456dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2456e0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2456e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2456e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2456e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2456e8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2456e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2456ec: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2456ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2456f0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2456f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2456f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2456f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2456f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2456F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2456FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456F8u;
        // 0x2456fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2456F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245700u;
}
