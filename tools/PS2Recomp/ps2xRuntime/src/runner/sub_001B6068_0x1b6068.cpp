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

// Function: sub_001B6068
// Address: 0x1b6068 - 0x1b6260
void sub_001B6068_0x1b6068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6068_0x1b6068");
#endif

    switch (ctx->pc) {
        case 0x1b608cu: goto label_1b608c;
        case 0x1b60f4u: goto label_1b60f4;
        case 0x1b6104u: goto label_1b6104;
        case 0x1b6118u: goto label_1b6118;
        case 0x1b612cu: goto label_1b612c;
        case 0x1b6140u: goto label_1b6140;
        case 0x1b6160u: goto label_1b6160;
        case 0x1b619cu: goto label_1b619c;
        case 0x1b61d8u: goto label_1b61d8;
        case 0x1b6214u: goto label_1b6214;
        case 0x1b6228u: goto label_1b6228;
        case 0x1b623cu: goto label_1b623c;
        default: break;
    }

    ctx->pc = 0x1b6068u;

    // 0x1b6068: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b6068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b606c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b606cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b6070: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b6070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b6074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6078: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b6078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b607c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b607cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b6080: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6084: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1B6084u;
    SET_GPR_U32(ctx, 31, 0x1B608Cu);
    ctx->pc = 0x1B6088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6084u;
    // 0x1b6088: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1B6084u, 0x1B608Cu)) {
        return;
    }
    ctx->pc = 0x1B608Cu;
label_1b608c:
    // 0x1b608c: 0x2613026c  addiu       $s3, $s0, 0x26C
    ctx->pc = 0x1b608cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 620));
    // 0x1b6090: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b6090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b6094: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b6094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6098: 0x2442ca30  addiu       $v0, $v0, -0x35D0
    ctx->pc = 0x1b6098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953520));
    // 0x1b609c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1b609cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1b60a0: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1b60a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1b60a4: 0x2463cb40  addiu       $v1, $v1, -0x34C0
    ctx->pc = 0x1b60a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953792));
    // 0x1b60a8: 0xae040268  sw          $a0, 0x268($s0)
    ctx->pc = 0x1b60a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 4));
    // 0x1b60ac: 0x2602028c  addiu       $v0, $s0, 0x28C
    ctx->pc = 0x1b60acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x1b60b0: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1b60b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1b60b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b60b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b60b8: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1b60b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1b60bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b60bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b60c0: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x1b60c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x1b60c4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1b60c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b60c8: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1b60c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1b60cc: 0x3c1100ff  lui         $s1, 0xFF
    ctx->pc = 0x1b60ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)255 << 16));
    // 0x1b60d0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1b60d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1b60d4: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x1b60d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x1b60d8: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1b60d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1b60dc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1b60dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1b60e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1b60e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b60e4: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x1b60e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x1b60e8: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x1b60e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x1b60ec: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B60ECu;
    SET_GPR_U32(ctx, 31, 0x1B60F4u);
    ctx->pc = 0x1B60F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B60ECu;
    // 0x1b60f0: 0xae0002a4  sw          $zero, 0x2A4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B60ECu, 0x1B60F4u)) {
        return;
    }
    ctx->pc = 0x1B60F4u;
label_1b60f4:
    // 0x1b60f4: 0x26040278  addiu       $a0, $s0, 0x278
    ctx->pc = 0x1b60f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
    // 0x1b60f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b60f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b60fc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B60FCu;
    SET_GPR_U32(ctx, 31, 0x1B6104u);
    ctx->pc = 0x1B6100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B60FCu;
    // 0x1b6100: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B60FCu, 0x1B6104u)) {
        return;
    }
    ctx->pc = 0x1B6104u;
label_1b6104:
    // 0x1b6104: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b6104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b6108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b610c: 0x24a5c958  addiu       $a1, $a1, -0x36A8
    ctx->pc = 0x1b610cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953304));
    // 0x1b6110: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B6110u;
    SET_GPR_U32(ctx, 31, 0x1B6118u);
    ctx->pc = 0x1B6114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6110u;
    // 0x1b6114: 0x26060264  addiu       $a2, $s0, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B6110u, 0x1B6118u)) {
        return;
    }
    ctx->pc = 0x1B6118u;
label_1b6118:
    // 0x1b6118: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b6118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b611c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b611cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6120: 0x24a5c968  addiu       $a1, $a1, -0x3698
    ctx->pc = 0x1b6120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953320));
    // 0x1b6124: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B6124u;
    SET_GPR_U32(ctx, 31, 0x1B612Cu);
    ctx->pc = 0x1B6128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6124u;
    // 0x1b6128: 0x26060284  addiu       $a2, $s0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B6124u, 0x1B612Cu)) {
        return;
    }
    ctx->pc = 0x1B612Cu;
label_1b612c:
    // 0x1b612c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b612cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b6130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6134: 0x24a5c978  addiu       $a1, $a1, -0x3688
    ctx->pc = 0x1b6134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953336));
    // 0x1b6138: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B6138u;
    SET_GPR_U32(ctx, 31, 0x1B6140u);
    ctx->pc = 0x1B613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6138u;
    // 0x1b613c: 0x26060288  addiu       $a2, $s0, 0x288 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B6138u, 0x1B6140u)) {
        return;
    }
    ctx->pc = 0x1B6140u;
label_1b6140:
    // 0x1b6140: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b6140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6144: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b6144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b6148: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b6148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b614c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b614cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6150: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1b6150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1b6154: 0x24a5c988  addiu       $a1, $a1, -0x3678
    ctx->pc = 0x1b6154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953352));
    // 0x1b6158: 0xc065f72  jal         func_197DC8
    ctx->pc = 0x1B6158u;
    SET_GPR_U32(ctx, 31, 0x1B6160u);
    ctx->pc = 0x1B615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6158u;
    // 0x1b615c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197DC8u, 0x1B6158u, 0x1B6160u)) {
        return;
    }
    ctx->pc = 0x1B6160u;
label_1b6160:
    // 0x1b6160: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b6160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6164: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b6164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b6168: 0x93a80000  lbu         $t0, 0x0($sp)
    ctx->pc = 0x1b6168u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b616c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b616cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6170: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x1b6170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x1b6174: 0x33a02  srl         $a3, $v1, 8
    ctx->pc = 0x1b6174u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1b6178: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x1b6178u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1b617c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1b617cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1b6180: 0x24a5c998  addiu       $a1, $a1, -0x3668
    ctx->pc = 0x1b6180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953368));
    // 0x1b6184: 0xa203027c  sb          $v1, 0x27C($s0)
    ctx->pc = 0x1b6184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 636), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b6188: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b618c: 0xa207027e  sb          $a3, 0x27E($s0)
    ctx->pc = 0x1b618cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 638), (uint8_t)GPR_U32(ctx, 7));
    // 0x1b6190: 0xa208027f  sb          $t0, 0x27F($s0)
    ctx->pc = 0x1b6190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 639), (uint8_t)GPR_U32(ctx, 8));
    // 0x1b6194: 0xc065f72  jal         func_197DC8
    ctx->pc = 0x1B6194u;
    SET_GPR_U32(ctx, 31, 0x1B619Cu);
    ctx->pc = 0x1B6198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6194u;
    // 0x1b6198: 0xa202027d  sb          $v0, 0x27D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 637), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197DC8u, 0x1B6194u, 0x1B619Cu)) {
        return;
    }
    ctx->pc = 0x1B619Cu;
label_1b619c:
    // 0x1b619c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b61a0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b61a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b61a4: 0x93a80000  lbu         $t0, 0x0($sp)
    ctx->pc = 0x1b61a4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b61a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b61a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61ac: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x1b61acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x1b61b0: 0x33a02  srl         $a3, $v1, 8
    ctx->pc = 0x1b61b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1b61b4: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x1b61b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1b61b8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1b61b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1b61bc: 0xa208027b  sb          $t0, 0x27B($s0)
    ctx->pc = 0x1b61bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 635), (uint8_t)GPR_U32(ctx, 8));
    // 0x1b61c0: 0x24a5c9a8  addiu       $a1, $a1, -0x3658
    ctx->pc = 0x1b61c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953384));
    // 0x1b61c4: 0xa2030278  sb          $v1, 0x278($s0)
    ctx->pc = 0x1b61c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 632), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b61c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b61c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61cc: 0xa207027a  sb          $a3, 0x27A($s0)
    ctx->pc = 0x1b61ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 634), (uint8_t)GPR_U32(ctx, 7));
    // 0x1b61d0: 0xc065f72  jal         func_197DC8
    ctx->pc = 0x1B61D0u;
    SET_GPR_U32(ctx, 31, 0x1B61D8u);
    ctx->pc = 0x1B61D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B61D0u;
    // 0x1b61d4: 0xa2020279  sb          $v0, 0x279($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 633), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197DC8u, 0x1B61D0u, 0x1B61D8u)) {
        return;
    }
    ctx->pc = 0x1B61D8u;
label_1b61d8:
    // 0x1b61d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b61d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b61dc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b61dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b61e0: 0x93a70000  lbu         $a3, 0x0($sp)
    ctx->pc = 0x1b61e0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b61e4: 0x24a5c9b8  addiu       $a1, $a1, -0x3648
    ctx->pc = 0x1b61e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953400));
    // 0x1b61e8: 0x718824  and         $s1, $v1, $s1
    ctx->pc = 0x1b61e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x1b61ec: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x1b61ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1b61f0: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x1b61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1b61f4: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x1b61f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x1b61f8: 0xa2030280  sb          $v1, 0x280($s0)
    ctx->pc = 0x1b61f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 640), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b61fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b61fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6200: 0xa2070283  sb          $a3, 0x283($s0)
    ctx->pc = 0x1b6200u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 643), (uint8_t)GPR_U32(ctx, 7));
    // 0x1b6204: 0x26060270  addiu       $a2, $s0, 0x270
    ctx->pc = 0x1b6204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x1b6208: 0xa2110281  sb          $s1, 0x281($s0)
    ctx->pc = 0x1b6208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 641), (uint8_t)GPR_U32(ctx, 17));
    // 0x1b620c: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B620Cu;
    SET_GPR_U32(ctx, 31, 0x1B6214u);
    ctx->pc = 0x1B6210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B620Cu;
    // 0x1b6210: 0xa2020282  sb          $v0, 0x282($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 642), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B620Cu, 0x1B6214u)) {
        return;
    }
    ctx->pc = 0x1B6214u;
label_1b6214:
    // 0x1b6214: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b6214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b6218: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b6218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b621c: 0x24a5c9c8  addiu       $a1, $a1, -0x3638
    ctx->pc = 0x1b621cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953416));
    // 0x1b6220: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B6220u;
    SET_GPR_U32(ctx, 31, 0x1B6228u);
    ctx->pc = 0x1B6224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6220u;
    // 0x1b6224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B6220u, 0x1B6228u)) {
        return;
    }
    ctx->pc = 0x1B6228u;
label_1b6228:
    // 0x1b6228: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b6228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b622c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b622cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6230: 0x26060274  addiu       $a2, $s0, 0x274
    ctx->pc = 0x1b6230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 628));
    // 0x1b6234: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B6234u;
    SET_GPR_U32(ctx, 31, 0x1B623Cu);
    ctx->pc = 0x1B6238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6234u;
    // 0x1b6238: 0x24a5c9d8  addiu       $a1, $a1, -0x3628 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B6234u, 0x1B623Cu)) {
        return;
    }
    ctx->pc = 0x1B623Cu;
label_1b623c:
    // 0x1b623c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b623cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6240: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b6240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6244: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b6244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b6248: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b6248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b624c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b624cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6254: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6254u;
        // 0x1b6258: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B625Cu;
    // 0x1b625c: 0x0  nop
    ctx->pc = 0x1b625cu;
    // NOP
    ctx->pc = 0x1b6260u;
}
