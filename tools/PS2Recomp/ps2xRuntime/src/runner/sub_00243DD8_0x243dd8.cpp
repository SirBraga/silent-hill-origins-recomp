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

// Function: sub_00243DD8
// Address: 0x243dd8 - 0x244020
void sub_00243DD8_0x243dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243DD8_0x243dd8");
#endif

    switch (ctx->pc) {
        case 0x243e18u: goto label_243e18;
        case 0x243e50u: goto label_243e50;
        case 0x243ee8u: goto label_243ee8;
        case 0x243fe0u: goto label_243fe0;
        case 0x243ff0u: goto label_243ff0;
        default: break;
    }

    ctx->pc = 0x243dd8u;

    // 0x243dd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x243dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x243ddc: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x243ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x243de0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x243de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x243de4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x243de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x243de8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x243de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243dec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x243decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x243df0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x243df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243df4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x243df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x243df8: 0x2512ffff  addiu       $s2, $t0, -0x1
    ctx->pc = 0x243df8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x243dfc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x243dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x243e00: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x243e00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243e04: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x243e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x243e08: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x243e08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243e10: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x243E10u;
    {
        const bool branch_taken_0x243e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E10u;
        // 0x243e14: 0x24550fe0  addiu       $s5, $v0, 0xFE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e10) {
            ctx->pc = 0x243FE0u;
            goto label_243fe0;
        }
    }
    ctx->pc = 0x243E18u;
label_243e18:
    // 0x243e18: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x243e18u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x243e1c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x243e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x243e20: 0x7aaa0000  lq          $t2, 0x0($s5)
    ctx->pc = 0x243e20u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x243e24: 0x24590f40  addiu       $t9, $v0, 0xF40
    ctx->pc = 0x243e24u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x243e28: 0x2489023  subu        $s2, $s2, $t0
    ctx->pc = 0x243e28u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x243e2c: 0x24180010  addiu       $t8, $zero, 0x10
    ctx->pc = 0x243e2cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x243e30: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x243e30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x243e34: 0x3c0e0400  lui         $t6, 0x400
    ctx->pc = 0x243e34u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)1024 << 16));
    // 0x243e38: 0x340d8002  ori         $t5, $zero, 0x8002
    ctx->pc = 0x243e38u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x243e3c: 0xd6db8  dsll        $t5, $t5, 22
    ctx->pc = 0x243e3cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 22);
    // 0x243e40: 0x35ad8000  ori         $t5, $t5, 0x8000
    ctx->pc = 0x243e40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32768);
    // 0x243e44: 0xd6cf8  dsll        $t5, $t5, 19
    ctx->pc = 0x243e44u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 19);
    // 0x243e48: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x243e48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
    // 0x243e4c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x243e4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_243e50:
    // 0x243e50: 0x2d030011  sltiu       $v1, $t0, 0x11
    ctx->pc = 0x243e50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x243e54: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x243e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243e58: 0x103380b  movn        $a3, $t0, $v1
    ctx->pc = 0x243e58u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8));
    // 0x243e5c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x243e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x243e60: 0xee1825  or          $v1, $a3, $t6
    ctx->pc = 0x243e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 14));
    // 0x243e64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x243e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x243e68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x243e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x243e6c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x243e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x243e70: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x243e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x243e74: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x243e74u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
    // 0x243e78: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x243e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x243e7c: 0x4f2025  or          $a0, $v0, $t7
    ctx->pc = 0x243e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x243e80: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x243e80u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x243e84: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x243e84u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x243e88: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x243e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x243e8c: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x243e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x243e90: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x243e90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x243e94: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x243e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x243e98: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243e9c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x243e9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243ea0: 0x71cc0  sll         $v1, $a3, 19
    ctx->pc = 0x243ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 19));
    // 0x243ea4: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x243ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x243ea8: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x243ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x243eac: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x243eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x243eb0: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x243eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x243eb4: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x243eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x243eb8: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x243eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x243ebc: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x243ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x243ec0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x243ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x243ec4: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x243ec4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x243ec8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x243ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x243ecc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x243eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x243ed0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x243ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x243ed4: 0x10eb0038  beq         $a3, $t3, . + 4 + (0x38 << 2)
    ctx->pc = 0x243ED4u;
    {
        const bool branch_taken_0x243ed4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        ctx->pc = 0x243ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243ED4u;
        // 0x243ed8: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ed4) {
            ctx->pc = 0x243FB8u;
            goto label_243fb8;
        }
    }
    ctx->pc = 0x243EDCu;
    // 0x243edc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x243edcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x243ee0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x243ee0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x243ee4: 0x0  nop
    ctx->pc = 0x243ee4u;
    // NOP
label_243ee8:
    // 0x243ee8: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x243ee8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x243eec: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x243eecu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x243ef0: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x243ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x243ef4: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x243ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x243ef8: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x243ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x243efc: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x243efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x243f00: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x243f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x243f04: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x243f04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x243f08: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x243f08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x243f0c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x243f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x243f10: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x243f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x243f14: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243f18: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x243f18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243f1c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x243f1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x243f20: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x243f20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x243f24: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x243f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x243f28: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243f2c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243f2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243f30: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x243f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x243f34: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x243f34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x243f38: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x243f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x243f3c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243f40: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243f40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243f44: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x243f44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x243f48: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x243f48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x243f4c: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x243f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x243f50: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243f54: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243f54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243f58: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x243f58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x243f5c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x243f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x243f60: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x243f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x243f64: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243f68: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243f68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243f6c: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x243f6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x243f70: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x243f70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x243f74: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x243f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x243f78: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243f7c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243f80: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x243f80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x243f84: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x243f84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x243f88: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x243f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x243f8c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243f90: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243f90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243f94: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x243f94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x243f98: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x243f98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x243f9c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x243f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x243fa0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243fa4: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x243fa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243fa8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x243fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x243fac: 0x14e9ffce  bne         $a3, $t1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x243FACu;
    {
        const bool branch_taken_0x243fac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x243FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FACu;
        // 0x243fb0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243fac) {
            ctx->pc = 0x243EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243ee8;
        }
    }
    ctx->pc = 0x243FB4u;
    // 0x243fb4: 0x0  nop
    ctx->pc = 0x243fb4u;
    // NOP
label_243fb8:
    // 0x243fb8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x243fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x243fbc: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x243fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x243fc0: 0x7c4a0000  sq          $t2, 0x0($v0)
    ctx->pc = 0x243fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 10));
    // 0x243fc4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x243fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x243fc8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243fcc: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x243fccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243fd0: 0x1500ff9f  bnez        $t0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x243FD0u;
    {
        const bool branch_taken_0x243fd0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x243FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FD0u;
        // 0x243fd4: 0x7b2a0000  lq          $t2, 0x0($t9) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 25), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243fd0) {
            ctx->pc = 0x243E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243e50;
        }
    }
    ctx->pc = 0x243FD8u;
    // 0x243fd8: 0xc0908e0  jal         func_242380
    ctx->pc = 0x243FD8u;
    SET_GPR_U32(ctx, 31, 0x243FE0u);
    ctx->pc = 0x242380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242380u, 0x243FD8u, 0x243FE0u)) {
        return;
    }
    ctx->pc = 0x243FE0u;
label_243fe0:
    // 0x243fe0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x243fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243fe4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x243fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243fe8: 0xc0908fe  jal         func_2423F8
    ctx->pc = 0x243FE8u;
    SET_GPR_U32(ctx, 31, 0x243FF0u);
    ctx->pc = 0x243FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243FE8u;
    // 0x243fec: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2423F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2423F8u, 0x243FE8u, 0x243FF0u)) {
        return;
    }
    ctx->pc = 0x243FF0u;
label_243ff0:
    // 0x243ff0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x243ff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243ff4: 0x1500ff88  bnez        $t0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x243FF4u;
    {
        const bool branch_taken_0x243ff4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x243FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FF4u;
        // 0x243ff8: 0x3c0c7c00  lui         $t4, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ff4) {
            ctx->pc = 0x243E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243e18;
        }
    }
    ctx->pc = 0x243FFCu;
    // 0x243ffc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x243ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x244000: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x244000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x244004: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x244004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x244008: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x244008u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24400c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x24400cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244010: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x244010u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244018: 0x3e00008  jr          $ra
    ctx->pc = 0x244018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244018u;
        // 0x24401c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244020u;
}
