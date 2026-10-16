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

// Function: sub_002E96E0
// Address: 0x2e96e0 - 0x2e9868
void sub_002E96E0_0x2e96e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E96E0_0x2e96e0");
#endif

    switch (ctx->pc) {
        case 0x2e974cu: goto label_2e974c;
        case 0x2e9780u: goto label_2e9780;
        case 0x2e97b8u: goto label_2e97b8;
        case 0x2e97e4u: goto label_2e97e4;
        case 0x2e981cu: goto label_2e981c;
        case 0x2e9840u: goto label_2e9840;
        default: break;
    }

    ctx->pc = 0x2e96e0u;

    // 0x2e96e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e96e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e96e4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x2e96e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x2e96e8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2e96e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2e96ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e96ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e96f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2e96f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2e96f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2e96f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2e96f8: 0x26221f80  addiu       $v0, $s1, 0x1F80
    ctx->pc = 0x2e96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8064));
    // 0x2e96fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e96fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e9700: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x2e9700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2e9704: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2e9704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2e9708: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x2e9708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e970c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e9710: 0x8e030e98  lw          $v1, 0xE98($s0)
    ctx->pc = 0x2e9710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3736)));
    // 0x2e9714: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x2e9714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x2e9718: 0x1443004b  bne         $v0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2E9718u;
    {
        const bool branch_taken_0x2e9718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9718u;
        // 0x2e971c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9718) {
            ctx->pc = 0x2E9848u;
            goto label_2e9848;
        }
    }
    ctx->pc = 0x2E9720u;
    // 0x2e9720: 0x26221f40  addiu       $v0, $s1, 0x1F40
    ctx->pc = 0x2e9720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8000));
    // 0x2e9724: 0x24860100  addiu       $a2, $a0, 0x100
    ctx->pc = 0x2e9724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x2e9728: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e9728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e972c: 0x26321080  addiu       $s2, $s1, 0x1080
    ctx->pc = 0x2e972cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4224));
    // 0x2e9730: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2e9730u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e9734: 0x26250f40  addiu       $a1, $s1, 0xF40
    ctx->pc = 0x2e9734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
    // 0x2e9738: 0x26330f00  addiu       $s3, $s1, 0xF00
    ctx->pc = 0x2e9738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 3840));
    // 0x2e973c: 0x26341f3f  addiu       $s4, $s1, 0x1F3F
    ctx->pc = 0x2e973cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 7999));
    // 0x2e9740: 0xfe030ec0  sd          $v1, 0xEC0($s0)
    ctx->pc = 0x2e9740u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 3776), GPR_U64(ctx, 3));
    // 0x2e9744: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2e9744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e9748: 0xae030ec8  sw          $v1, 0xEC8($s0)
    ctx->pc = 0x2e9748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3784), GPR_U32(ctx, 3));
label_2e974c:
    // 0x2e974c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2e974cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e9750: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x2e9750u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e9754: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2e9754u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x2e9758: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x2e9758u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x2e975c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2e975cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2e9760: 0x1486fffa  bne         $a0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E9760u;
    {
        const bool branch_taken_0x2e9760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2E9764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9760u;
        // 0x2e9764: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9760) {
            ctx->pc = 0x2E974Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e974c;
        }
    }
    ctx->pc = 0x2E9768u;
    // 0x2e9768: 0x8e030fc4  lw          $v1, 0xFC4($s0)
    ctx->pc = 0x2e9768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4036)));
    // 0x2e976c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e976cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9770: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E9770u;
    {
        const bool branch_taken_0x2e9770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9770u;
        // 0x2e9774: 0x26030298  addiu       $v1, $s0, 0x298 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9770) {
            ctx->pc = 0x2E97B0u;
            goto label_2e97b0;
        }
    }
    ctx->pc = 0x2E9778u;
    // 0x2e9778: 0x260212d8  addiu       $v0, $s0, 0x12D8
    ctx->pc = 0x2e9778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4824));
    // 0x2e977c: 0x26041ed8  addiu       $a0, $s0, 0x1ED8
    ctx->pc = 0x2e977cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7896));
label_2e9780:
    // 0x2e9780: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x2e9780u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e9784: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x2e9784u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e9788: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x2e9788u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e978c: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x2e978cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2e9790: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x2e9790u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x2e9794: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2e9794u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2e9798: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x2e9798u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x2e979c: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x2e979cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x2e97a0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2e97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e97a4: 0x1444fff6  bne         $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E97A4u;
    {
        const bool branch_taken_0x2e97a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97A4u;
        // 0x2e97a8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97a4) {
            ctx->pc = 0x2E9780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9780;
        }
    }
    ctx->pc = 0x2E97ACu;
    // 0x2e97ac: 0xae001008  sw          $zero, 0x1008($s0)
    ctx->pc = 0x2e97acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4104), GPR_U32(ctx, 0));
label_2e97b0:
    // 0x2e97b0: 0xc0b7190  jal         func_2DC640
    ctx->pc = 0x2E97B0u;
    SET_GPR_U32(ctx, 31, 0x2E97B8u);
    ctx->pc = 0x2DC640u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC640u, 0x2E97B0u, 0x2E97B8u)) {
        return;
    }
    ctx->pc = 0x2E97B8u;
label_2e97b8:
    // 0x2e97b8: 0x8e030280  lw          $v1, 0x280($s0)
    ctx->pc = 0x2e97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x2e97bc: 0xae020e98  sw          $v0, 0xE98($s0)
    ctx->pc = 0x2e97bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3736), GPR_U32(ctx, 2));
    // 0x2e97c0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2e97c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2e97c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E97C4u;
    {
        const bool branch_taken_0x2e97c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e97c4) {
            ctx->pc = 0x2E97C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E97C4u;
            // 0x2e97c8: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E97E0u;
            goto label_2e97e0;
        }
    }
    ctx->pc = 0x2E97CCu;
    // 0x2e97cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e97ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e97d0: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x2e97d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x2e97d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e97d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e97d8: 0xae021008  sw          $v0, 0x1008($s0)
    ctx->pc = 0x2e97d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4104), GPR_U32(ctx, 2));
    // 0x2e97dc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2e97dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e97e0:
    // 0x2e97e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e97e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e97e4:
    // 0x2e97e4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2e97e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e97e8: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x2e97e8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e97ec: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2e97ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2e97f0: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x2e97f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x2e97f4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2e97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e97f8: 0x1453fffa  bne         $v0, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E97F8u;
    {
        const bool branch_taken_0x2e97f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2E97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97F8u;
        // 0x2e97fc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97f8) {
            ctx->pc = 0x2E97E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e97e4;
        }
    }
    ctx->pc = 0x2E9800u;
    // 0x2e9800: 0x8e0212c0  lw          $v0, 0x12C0($s0)
    ctx->pc = 0x2e9800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4800)));
    // 0x2e9804: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e9804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9808: 0x8e031008  lw          $v1, 0x1008($s0)
    ctx->pc = 0x2e9808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4104)));
    // 0x2e980c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e980cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9810: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e9810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e9814: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2E9814u;
    SET_GPR_U32(ctx, 31, 0x2E981Cu);
    ctx->pc = 0x2E9818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9814u;
    // 0x2e9818: 0xae0212c0  sw          $v0, 0x12C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4800), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2E9814u, 0x2E981Cu)) {
        return;
    }
    ctx->pc = 0x2E981Cu;
label_2e981c:
    // 0x2e981c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2e981cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x2e9820: 0x24030ec0  addiu       $v1, $zero, 0xEC0
    ctx->pc = 0x2e9820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3776));
    // 0x2e9824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e9824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9828: 0x8e021000  lw          $v0, 0x1000($s0)
    ctx->pc = 0x2e9828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4096)));
    // 0x2e982c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e982cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9830: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2e9830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2e9834: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2e9834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e9838: 0xc0c85b8  jal         func_3216E0
    ctx->pc = 0x2E9838u;
    SET_GPR_U32(ctx, 31, 0x2E9840u);
    ctx->pc = 0x2E983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9838u;
    // 0x2e983c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3216E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3216E0u, 0x2E9838u, 0x2E9840u)) {
        return;
    }
    ctx->pc = 0x2E9840u;
label_2e9840:
    // 0x2e9840: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x2e9840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x2e9844: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e9844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9848:
    // 0x2e9848: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2e9848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e984c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2e984cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e9850: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2e9850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e9854: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e9854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9858: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2e9858u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e985c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e985cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9860: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9860u;
        // 0x2e9864: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9868u;
}
