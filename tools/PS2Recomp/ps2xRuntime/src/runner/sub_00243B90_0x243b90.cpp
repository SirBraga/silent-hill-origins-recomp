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

// Function: sub_00243B90
// Address: 0x243b90 - 0x243dd8
void sub_00243B90_0x243b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243B90_0x243b90");
#endif

    switch (ctx->pc) {
        case 0x243bd0u: goto label_243bd0;
        case 0x243c08u: goto label_243c08;
        case 0x243ca0u: goto label_243ca0;
        case 0x243d98u: goto label_243d98;
        case 0x243da8u: goto label_243da8;
        default: break;
    }

    ctx->pc = 0x243b90u;

    // 0x243b90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x243b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x243b94: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x243b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x243b98: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x243b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x243b9c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x243b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x243ba0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x243ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243ba4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x243ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x243ba8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x243ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x243bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x243bb0: 0x89042  srl         $s2, $t0, 1
    ctx->pc = 0x243bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x243bb4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x243bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x243bb8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x243bb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bbc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x243bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x243bc0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x243bc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243bc8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x243BC8u;
    {
        const bool branch_taken_0x243bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BC8u;
        // 0x243bcc: 0x24550fe0  addiu       $s5, $v0, 0xFE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243bc8) {
            ctx->pc = 0x243D98u;
            goto label_243d98;
        }
    }
    ctx->pc = 0x243BD0u;
label_243bd0:
    // 0x243bd0: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x243bd0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x243bd4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x243bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x243bd8: 0x7aaa0000  lq          $t2, 0x0($s5)
    ctx->pc = 0x243bd8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x243bdc: 0x24590f40  addiu       $t9, $v0, 0xF40
    ctx->pc = 0x243bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x243be0: 0x2489023  subu        $s2, $s2, $t0
    ctx->pc = 0x243be0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x243be4: 0x24180010  addiu       $t8, $zero, 0x10
    ctx->pc = 0x243be4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x243be8: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x243be8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x243bec: 0x3c0e0400  lui         $t6, 0x400
    ctx->pc = 0x243becu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)1024 << 16));
    // 0x243bf0: 0x340d8002  ori         $t5, $zero, 0x8002
    ctx->pc = 0x243bf0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x243bf4: 0xd6db8  dsll        $t5, $t5, 22
    ctx->pc = 0x243bf4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 22);
    // 0x243bf8: 0x35ad8000  ori         $t5, $t5, 0x8000
    ctx->pc = 0x243bf8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32768);
    // 0x243bfc: 0xd6cf8  dsll        $t5, $t5, 19
    ctx->pc = 0x243bfcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 19);
    // 0x243c00: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x243c00u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
    // 0x243c04: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x243c04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_243c08:
    // 0x243c08: 0x2d030011  sltiu       $v1, $t0, 0x11
    ctx->pc = 0x243c08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x243c0c: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x243c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c10: 0x103380b  movn        $a3, $t0, $v1
    ctx->pc = 0x243c10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8));
    // 0x243c14: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x243c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x243c18: 0xee1825  or          $v1, $a3, $t6
    ctx->pc = 0x243c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 14));
    // 0x243c1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x243c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x243c20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x243c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x243c24: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x243c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x243c28: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x243c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x243c2c: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x243c2cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
    // 0x243c30: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x243c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x243c34: 0x4f2025  or          $a0, $v0, $t7
    ctx->pc = 0x243c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x243c38: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x243c38u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x243c3c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x243c3cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x243c40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x243c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x243c44: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x243c44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x243c48: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x243c48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x243c4c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x243c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x243c50: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243c54: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x243c54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243c58: 0x71cc0  sll         $v1, $a3, 19
    ctx->pc = 0x243c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 19));
    // 0x243c5c: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x243c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x243c60: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x243c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x243c64: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x243c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x243c68: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x243c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x243c6c: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x243c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x243c70: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x243c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x243c74: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x243c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x243c78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x243c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x243c7c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x243c7cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x243c80: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x243c80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x243c84: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x243c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x243c88: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x243c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x243c8c: 0x10eb0038  beq         $a3, $t3, . + 4 + (0x38 << 2)
    ctx->pc = 0x243C8Cu;
    {
        const bool branch_taken_0x243c8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        ctx->pc = 0x243C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C8Cu;
        // 0x243c90: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c8c) {
            ctx->pc = 0x243D70u;
            goto label_243d70;
        }
    }
    ctx->pc = 0x243C94u;
    // 0x243c94: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x243c94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x243c98: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x243c98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x243c9c: 0x0  nop
    ctx->pc = 0x243c9cu;
    // NOP
label_243ca0:
    // 0x243ca0: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x243ca0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x243ca4: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x243ca4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x243ca8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x243ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x243cac: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x243cacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x243cb0: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x243cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x243cb4: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x243cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x243cb8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x243cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x243cbc: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x243cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x243cc0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x243cc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x243cc4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x243cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x243cc8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x243cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x243ccc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243cd0: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x243cd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243cd4: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x243cd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x243cd8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x243cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x243cdc: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x243cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x243ce0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243ce4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243ce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243ce8: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x243ce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x243cec: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x243cecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x243cf0: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x243cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x243cf4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243cf8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243cf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243cfc: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x243cfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x243d00: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x243d00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x243d04: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x243d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x243d08: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243d0c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243d0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243d10: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x243d10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x243d14: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x243d14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x243d18: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x243d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x243d1c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243d20: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243d20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243d24: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x243d24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x243d28: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x243d28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x243d2c: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x243d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x243d30: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243d34: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243d34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243d38: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x243d38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x243d3c: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x243d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x243d40: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x243d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x243d44: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243d48: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243d48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243d4c: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x243d4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x243d50: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x243d50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x243d54: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x243d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x243d58: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243d5c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x243d5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243d60: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x243d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x243d64: 0x14e9ffce  bne         $a3, $t1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x243D64u;
    {
        const bool branch_taken_0x243d64 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x243D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D64u;
        // 0x243d68: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d64) {
            ctx->pc = 0x243CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243ca0;
        }
    }
    ctx->pc = 0x243D6Cu;
    // 0x243d6c: 0x0  nop
    ctx->pc = 0x243d6cu;
    // NOP
label_243d70:
    // 0x243d70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x243d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x243d74: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x243d74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x243d78: 0x7c4a0000  sq          $t2, 0x0($v0)
    ctx->pc = 0x243d78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 10));
    // 0x243d7c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x243d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x243d80: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243d84: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x243d84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243d88: 0x1500ff9f  bnez        $t0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x243D88u;
    {
        const bool branch_taken_0x243d88 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x243D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D88u;
        // 0x243d8c: 0x7b2a0000  lq          $t2, 0x0($t9) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 25), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d88) {
            ctx->pc = 0x243C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243c08;
        }
    }
    ctx->pc = 0x243D90u;
    // 0x243d90: 0xc0908e0  jal         func_242380
    ctx->pc = 0x243D90u;
    SET_GPR_U32(ctx, 31, 0x243D98u);
    ctx->pc = 0x242380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242380u, 0x243D90u, 0x243D98u)) {
        return;
    }
    ctx->pc = 0x243D98u;
label_243d98:
    // 0x243d98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x243d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x243d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243da0: 0xc0908fe  jal         func_2423F8
    ctx->pc = 0x243DA0u;
    SET_GPR_U32(ctx, 31, 0x243DA8u);
    ctx->pc = 0x243DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DA0u;
    // 0x243da4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2423F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2423F8u, 0x243DA0u, 0x243DA8u)) {
        return;
    }
    ctx->pc = 0x243DA8u;
label_243da8:
    // 0x243da8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x243da8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243dac: 0x1500ff88  bnez        $t0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x243DACu;
    {
        const bool branch_taken_0x243dac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x243DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DACu;
        // 0x243db0: 0x3c0c7c00  lui         $t4, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243dac) {
            ctx->pc = 0x243BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243bd0;
        }
    }
    ctx->pc = 0x243DB4u;
    // 0x243db4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x243db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243db8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x243db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243dbc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x243dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243dc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x243dc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243dc4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x243dc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243dc8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x243dc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x243DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DD0u;
        // 0x243dd4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243DD8u;
}
