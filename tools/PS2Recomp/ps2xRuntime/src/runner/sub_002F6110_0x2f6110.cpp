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

// Function: sub_002F6110
// Address: 0x2f6110 - 0x2f6298
void sub_002F6110_0x2f6110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6110_0x2f6110");
#endif

    switch (ctx->pc) {
        case 0x2f6134u: goto label_2f6134;
        case 0x2f614cu: goto label_2f614c;
        case 0x2f6170u: goto label_2f6170;
        case 0x2f61b4u: goto label_2f61b4;
        case 0x2f6260u: goto label_2f6260;
        case 0x2f6270u: goto label_2f6270;
        default: break;
    }

    ctx->pc = 0x2f6110u;

    // 0x2f6110: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x2f6110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x2f6114: 0xffb102b0  sd          $s1, 0x2B0($sp)
    ctx->pc = 0x2f6114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 17));
    // 0x2f6118: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f6118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f611c: 0xffb202c0  sd          $s2, 0x2C0($sp)
    ctx->pc = 0x2f611cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 18));
    // 0x2f6120: 0xffb002a0  sd          $s0, 0x2A0($sp)
    ctx->pc = 0x2f6120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 16));
    // 0x2f6124: 0x30d2ffff  andi        $s2, $a2, 0xFFFF
    ctx->pc = 0x2f6124u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2f6128: 0xffbf02d0  sd          $ra, 0x2D0($sp)
    ctx->pc = 0x2f6128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 31));
    // 0x2f612c: 0xc0bce62  jal         func_2F3988
    ctx->pc = 0x2F612Cu;
    SET_GPR_U32(ctx, 31, 0x2F6134u);
    ctx->pc = 0x2F6130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F612Cu;
    // 0x2f6130: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3988u, 0x2F612Cu, 0x2F6134u)) {
        return;
    }
    ctx->pc = 0x2F6134u;
label_2f6134:
    // 0x2f6134: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2F6134u;
    {
        const bool branch_taken_0x2f6134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6134u;
        // 0x2f6138: 0xdfbf02d0  ld          $ra, 0x2D0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6134) {
            ctx->pc = 0x2F6284u;
            goto label_2f6284;
        }
    }
    ctx->pc = 0x2F613Cu;
    // 0x2f613c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f613cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6144: 0xc0bce8c  jal         func_2F3A30
    ctx->pc = 0x2F6144u;
    SET_GPR_U32(ctx, 31, 0x2F614Cu);
    ctx->pc = 0x2F6148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6144u;
    // 0x2f6148: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3A30u, 0x2F6144u, 0x2F614Cu)) {
        return;
    }
    ctx->pc = 0x2F614Cu;
label_2f614c:
    // 0x2f614c: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2F614Cu;
    {
        const bool branch_taken_0x2f614c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F614Cu;
        // 0x2f6150: 0xdfbf02d0  ld          $ra, 0x2D0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f614c) {
            ctx->pc = 0x2F6284u;
            goto label_2f6284;
        }
    }
    ctx->pc = 0x2F6154u;
    // 0x2f6154: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2f6154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f6158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f615c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f615cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6160: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f6160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6164: 0x27a70290  addiu       $a3, $sp, 0x290
    ctx->pc = 0x2f6164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2f6168: 0xc0bcf42  jal         func_2F3D08
    ctx->pc = 0x2F6168u;
    SET_GPR_U32(ctx, 31, 0x2F6170u);
    ctx->pc = 0x2F616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6168u;
    // 0x2f616c: 0x27a80294  addiu       $t0, $sp, 0x294 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3D08u, 0x2F6168u, 0x2F6170u)) {
        return;
    }
    ctx->pc = 0x2F6170u;
label_2f6170:
    // 0x2f6170: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f6170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f6174: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f6174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f6178: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2F6178u;
    {
        const bool branch_taken_0x2f6178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6178u;
        // 0x2f617c: 0xdfbf02d0  ld          $ra, 0x2D0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6178) {
            ctx->pc = 0x2F6284u;
            goto label_2f6284;
        }
    }
    ctx->pc = 0x2F6180u;
    // 0x2f6180: 0x97a30080  lhu         $v1, 0x80($sp)
    ctx->pc = 0x2f6180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f6184: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2f6184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2f6188: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6188u;
    {
        const bool branch_taken_0x2f6188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6188) {
            ctx->pc = 0x2F618Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6188u;
            // 0x2f618c: 0x3062e7f0  andi        $v0, $v1, 0xE7F0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)59376);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F619Cu;
            goto label_2f619c;
        }
    }
    ctx->pc = 0x2F6190u;
    // 0x2f6190: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f6190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f6194: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2F6194u;
    {
        const bool branch_taken_0x2f6194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6194u;
        // 0x2f6198: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6194) {
            ctx->pc = 0x2F6284u;
            goto label_2f6284;
        }
    }
    ctx->pc = 0x2F619Cu;
label_2f619c:
    // 0x2f619c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f619cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f61a0: 0x3243180f  andi        $v1, $s2, 0x180F
    ctx->pc = 0x2f61a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6159);
    // 0x2f61a4: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x2f61a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2f61a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f61a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f61ac: 0xc0bde18  jal         func_2F7860
    ctx->pc = 0x2F61ACu;
    SET_GPR_U32(ctx, 31, 0x2F61B4u);
    ctx->pc = 0x2F61B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F61ACu;
    // 0x2f61b0: 0xa7a20080  sh          $v0, 0x80($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7860u, 0x2F61ACu, 0x2F61B4u)) {
        return;
    }
    ctx->pc = 0x2F61B4u;
label_2f61b4:
    // 0x2f61b4: 0x93a40287  lbu         $a0, 0x287($sp)
    ctx->pc = 0x2f61b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 647)));
    // 0x2f61b8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f61b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f61bc: 0x93a70282  lbu         $a3, 0x282($sp)
    ctx->pc = 0x2f61bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 642)));
    // 0x2f61c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f61c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f61c4: 0x93a60281  lbu         $a2, 0x281($sp)
    ctx->pc = 0x2f61c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 641)));
    // 0x2f61c8: 0x41102  srl         $v0, $a0, 4
    ctx->pc = 0x2f61c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x2f61cc: 0x93af0286  lbu         $t7, 0x286($sp)
    ctx->pc = 0x2f61ccu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 646)));
    // 0x2f61d0: 0x75902  srl         $t3, $a3, 4
    ctx->pc = 0x2f61d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x2f61d4: 0x93ae0285  lbu         $t6, 0x285($sp)
    ctx->pc = 0x2f61d4u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 645)));
    // 0x2f61d8: 0x64102  srl         $t0, $a2, 4
    ctx->pc = 0x2f61d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2f61dc: 0x93ac0283  lbu         $t4, 0x283($sp)
    ctx->pc = 0x2f61dcu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 643)));
    // 0x2f61e0: 0xf6902  srl         $t5, $t7, 4
    ctx->pc = 0x2f61e0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 4));
    // 0x2f61e4: 0xe4902  srl         $t1, $t6, 4
    ctx->pc = 0x2f61e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
    // 0x2f61e8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2f61e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f61ec: 0xc5102  srl         $t2, $t4, 4
    ctx->pc = 0x2f61ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 12), 4));
    // 0x2f61f0: 0x1034018  mult        $t0, $t0, $v1
    ctx->pc = 0x2f61f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f61f4: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x2f61f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2f61f8: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x2f61f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2f61fc: 0x1a36818  mult        $t5, $t5, $v1
    ctx->pc = 0x2f61fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2f6200: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x2f6200u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x2f6204: 0x71234818  mult1       $t1, $t1, $v1
    ctx->pc = 0x2f6204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2f6208: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x2f6208u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x2f620c: 0x71435018  mult1       $t2, $t2, $v1
    ctx->pc = 0x2f620cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2f6210: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f6210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f6214: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x2f6214u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2f6218: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x2f6218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2f621c: 0x31ef000f  andi        $t7, $t7, 0xF
    ctx->pc = 0x2f621cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x2f6220: 0x31ce000f  andi        $t6, $t6, 0xF
    ctx->pc = 0x2f6220u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x2f6224: 0x318c000f  andi        $t4, $t4, 0xF
    ctx->pc = 0x2f6224u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x2f6228: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x2f6228u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x2f622c: 0x12e4821  addu        $t1, $t1, $t6
    ctx->pc = 0x2f622cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x2f6230: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x2f6230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x2f6234: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2f6234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2f6238: 0x8fa60290  lw          $a2, 0x290($sp)
    ctx->pc = 0x2f6238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2f623c: 0x8fa70294  lw          $a3, 0x294($sp)
    ctx->pc = 0x2f623cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x2f6240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6244: 0xa7a2009e  sh          $v0, 0x9E($sp)
    ctx->pc = 0x2f6244u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 158), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f6248: 0xa3ad009d  sb          $t5, 0x9D($sp)
    ctx->pc = 0x2f6248u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 157), (uint8_t)GPR_U32(ctx, 13));
    // 0x2f624c: 0xa3a9009c  sb          $t1, 0x9C($sp)
    ctx->pc = 0x2f624cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 156), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f6250: 0xa3aa009b  sb          $t2, 0x9B($sp)
    ctx->pc = 0x2f6250u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 155), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f6254: 0xa3ab009a  sb          $t3, 0x9A($sp)
    ctx->pc = 0x2f6254u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 154), (uint8_t)GPR_U32(ctx, 11));
    // 0x2f6258: 0xc0bd056  jal         func_2F4158
    ctx->pc = 0x2F6258u;
    SET_GPR_U32(ctx, 31, 0x2F6260u);
    ctx->pc = 0x2F625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6258u;
    // 0x2f625c: 0xa3a80099  sb          $t0, 0x99($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 153), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4158u, 0x2F6258u, 0x2F6260u)) {
        return;
    }
    ctx->pc = 0x2F6260u;
label_2f6260:
    // 0x2f6260: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6260u;
    {
        const bool branch_taken_0x2f6260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6260u;
        // 0x2f6264: 0xdfbf02d0  ld          $ra, 0x2D0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6260) {
            ctx->pc = 0x2F6284u;
            goto label_2f6284;
        }
    }
    ctx->pc = 0x2F6268u;
    // 0x2f6268: 0xc0bda0c  jal         func_2F6830
    ctx->pc = 0x2F6268u;
    SET_GPR_U32(ctx, 31, 0x2F6270u);
    ctx->pc = 0x2F626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6268u;
    // 0x2f626c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6830u, 0x2F6268u, 0x2F6270u)) {
        return;
    }
    ctx->pc = 0x2F6270u;
label_2f6270:
    // 0x2f6270: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f6270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f6274: 0x3463006f  ori         $v1, $v1, 0x6F
    ctx->pc = 0x2f6274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)111);
    // 0x2f6278: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2f6278u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x2f627c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f627cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6280: 0xdfbf02d0  ld          $ra, 0x2D0($sp)
    ctx->pc = 0x2f6280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_2f6284:
    // 0x2f6284: 0xdfb202c0  ld          $s2, 0x2C0($sp)
    ctx->pc = 0x2f6284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2f6288: 0xdfb102b0  ld          $s1, 0x2B0($sp)
    ctx->pc = 0x2f6288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2f628c: 0xdfb002a0  ld          $s0, 0x2A0($sp)
    ctx->pc = 0x2f628cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2f6290: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6290u;
        // 0x2f6294: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6298u;
}
