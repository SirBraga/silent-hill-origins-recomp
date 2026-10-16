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

// Function: sub_0023B848
// Address: 0x23b848 - 0x23b9d0
void sub_0023B848_0x23b848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B848_0x23b848");
#endif

    switch (ctx->pc) {
        case 0x23b8a4u: goto label_23b8a4;
        default: break;
    }

    ctx->pc = 0x23b848u;

    // 0x23b848: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23b848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23b84c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x23b84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x23b850: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x23b850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x23b854: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23b854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b858: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x23b858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x23b85c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23b85cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b860: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x23b860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x23b864: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x23b864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x23b868: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x23b868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x23b86c: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x23b86cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b870: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x23b870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x23b874: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x23b874u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b878: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x23b878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x23b87c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x23b87cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b880: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x23b880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x23b884: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x23b884u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b888: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x23b888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x23b88c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x23b88cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b894: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x23b894u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b898: 0x8fb000a8  lw          $s0, 0xA8($sp)
    ctx->pc = 0x23b898u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x23b89c: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x23B89Cu;
    SET_GPR_U32(ctx, 31, 0x23B8A4u);
    ctx->pc = 0x23B8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B89Cu;
    // 0x23b8a0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x23B89Cu, 0x23B8A4u)) {
        return;
    }
    ctx->pc = 0x23B8A4u;
label_23b8a4:
    // 0x23b8a4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x23b8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23b8a8: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x23b8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x23b8ac: 0x34428004  ori         $v0, $v0, 0x8004
    ctx->pc = 0x23b8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
    // 0x23b8b0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x23b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x23b8b4: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x23b8b4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x23b8b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23b8bc: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x23b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x23b8c0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x23b8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x23b8c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23b8c8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B8C8u;
    {
        const bool branch_taken_0x23b8c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8C8u;
        // 0x23b8cc: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b8c8) {
            ctx->pc = 0x23B8E8u;
            goto label_23b8e8;
        }
    }
    ctx->pc = 0x23B8D0u;
    // 0x23b8d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23b8d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b8d4: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x23b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x23b8d8: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x23b8d8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x23b8dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23B8DCu;
    {
        const bool branch_taken_0x23b8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8DCu;
        // 0x23b8e0: 0x8f8490bc  lw          $a0, -0x6F44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b8dc) {
            ctx->pc = 0x23B900u;
            goto label_23b900;
        }
    }
    ctx->pc = 0x23B8E4u;
    // 0x23b8e4: 0x0  nop
    ctx->pc = 0x23b8e4u;
    // NOP
label_23b8e8:
    // 0x23b8e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23b8e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b8ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23b8f0: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x23b8f0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x23b8f4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x23b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x23b8f8: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x23b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x23b8fc: 0x0  nop
    ctx->pc = 0x23b8fcu;
    // NOP
label_23b900:
    // 0x23b900: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x23b900u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x23b904: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x23b904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x23b908: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b90c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x23b90cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23b910: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x23b910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23b914: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x23b914u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x23b918: 0x111500  sll         $v0, $s1, 20
    ctx->pc = 0x23b918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 20));
    // 0x23b91c: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x23b91cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x23b920: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x23b920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x23b924: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x23b924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23b928: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x23b928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x23b92c: 0x71021b89  pcpyld      $v1, $t0, $v0
    ctx->pc = 0x23b92cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x23b930: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x23b930u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x23b934: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x23b934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x23b938: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b93c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b93cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23b940: 0x131e00  sll         $v1, $s3, 24
    ctx->pc = 0x23b940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
    // 0x23b944: 0x141400  sll         $v0, $s4, 16
    ctx->pc = 0x23b944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x23b948: 0x152a00  sll         $a1, $s5, 8
    ctx->pc = 0x23b948u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 8));
    // 0x23b94c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23b94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23b950: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23b950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b954: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x23b954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x23b958: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x23b958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x23b95c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23b960: 0x3103e  dsrl32      $v0, $v1, 0
    ctx->pc = 0x23b960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23b964: 0x70e21b89  pcpyld      $v1, $a3, $v0
    ctx->pc = 0x23b964u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x23b968: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x23b968u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x23b96c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x23b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x23b970: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b974: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b974u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23b978: 0x171d00  sll         $v1, $s7, 20
    ctx->pc = 0x23b978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 20));
    // 0x23b97c: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x23b97cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x23b980: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x23b980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x23b984: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x23b984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x23b988: 0x71021b89  pcpyld      $v1, $t0, $v0
    ctx->pc = 0x23b988u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x23b98c: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x23b98cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x23b990: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x23b990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x23b994: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x23b994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23b998: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x23b998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23b99c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x23b99cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23b9a0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x23b9a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23b9a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x23b9a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23b9a8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x23b9a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23b9ac: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x23b9acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b9b0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x23b9b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b9b4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x23b9b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b9b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b9bc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b9c0: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x23b9c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23b9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x23B9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9C4u;
        // 0x23b9c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B9CCu;
    // 0x23b9cc: 0x0  nop
    ctx->pc = 0x23b9ccu;
    // NOP
    ctx->pc = 0x23b9d0u;
}
