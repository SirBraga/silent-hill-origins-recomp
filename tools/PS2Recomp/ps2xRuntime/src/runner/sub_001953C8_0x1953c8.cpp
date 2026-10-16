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

// Function: sub_001953C8
// Address: 0x1953c8 - 0x195780
void sub_001953C8_0x1953c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001953C8_0x1953c8");
#endif

    switch (ctx->pc) {
        case 0x19540cu: goto label_19540c;
        case 0x19541cu: goto label_19541c;
        case 0x19542cu: goto label_19542c;
        case 0x195450u: goto label_195450;
        case 0x19545cu: goto label_19545c;
        case 0x195470u: goto label_195470;
        case 0x19548cu: goto label_19548c;
        case 0x1954a4u: goto label_1954a4;
        case 0x1954b8u: goto label_1954b8;
        case 0x1954e4u: goto label_1954e4;
        case 0x1954f8u: goto label_1954f8;
        case 0x195504u: goto label_195504;
        case 0x195534u: goto label_195534;
        case 0x195540u: goto label_195540;
        case 0x19555cu: goto label_19555c;
        case 0x19556cu: goto label_19556c;
        case 0x195580u: goto label_195580;
        case 0x1955acu: goto label_1955ac;
        case 0x1955c8u: goto label_1955c8;
        case 0x1955dcu: goto label_1955dc;
        case 0x1955ecu: goto label_1955ec;
        case 0x1955fcu: goto label_1955fc;
        case 0x19560cu: goto label_19560c;
        case 0x19561cu: goto label_19561c;
        case 0x19562cu: goto label_19562c;
        case 0x19563cu: goto label_19563c;
        case 0x19564cu: goto label_19564c;
        case 0x19565cu: goto label_19565c;
        case 0x19566cu: goto label_19566c;
        case 0x19567cu: goto label_19567c;
        case 0x195690u: goto label_195690;
        case 0x1956a0u: goto label_1956a0;
        case 0x1956bcu: goto label_1956bc;
        case 0x1956d8u: goto label_1956d8;
        case 0x195730u: goto label_195730;
        case 0x195744u: goto label_195744;
        case 0x19574cu: goto label_19574c;
        default: break;
    }

    ctx->pc = 0x1953c8u;

    // 0x1953c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1953c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1953cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1953ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1953d0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1953d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1953d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1953d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1953d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1953d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1953dc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1953dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1953e0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1953e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1953e4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1953e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1953e8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1953e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1953ec: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1953ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1953f0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1953f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1953f4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1953f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1953f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1953f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1953fc: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1953fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x195400: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195404: 0xc093546  jal         func_24D518
    ctx->pc = 0x195404u;
    SET_GPR_U32(ctx, 31, 0x19540Cu);
    ctx->pc = 0x195408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195404u;
    // 0x195408: 0x24170004  addiu       $s7, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195404u, 0x19540Cu)) {
        return;
    }
    ctx->pc = 0x19540Cu;
label_19540c:
    // 0x19540c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19540cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195410: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x195410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195414: 0xc093546  jal         func_24D518
    ctx->pc = 0x195414u;
    SET_GPR_U32(ctx, 31, 0x19541Cu);
    ctx->pc = 0x195418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195414u;
    // 0x195418: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195414u, 0x19541Cu)) {
        return;
    }
    ctx->pc = 0x19541Cu;
label_19541c:
    // 0x19541c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19541cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195420: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x195420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x195424: 0xc093546  jal         func_24D518
    ctx->pc = 0x195424u;
    SET_GPR_U32(ctx, 31, 0x19542Cu);
    ctx->pc = 0x195428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195424u;
    // 0x195428: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195424u, 0x19542Cu)) {
        return;
    }
    ctx->pc = 0x19542Cu;
label_19542c:
    // 0x19542c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x19542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x195430: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195430u;
    {
        const bool branch_taken_0x195430 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x195434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195430u;
        // 0x195434: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195430) {
            ctx->pc = 0x195444u;
            goto label_195444;
        }
    }
    ctx->pc = 0x195438u;
    // 0x195438: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x195438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x19543c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19543Cu;
    {
        const bool branch_taken_0x19543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19543Cu;
        // 0x195440: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19543c) {
            ctx->pc = 0x195450u;
            goto label_195450;
        }
    }
    ctx->pc = 0x195444u;
label_195444:
    // 0x195444: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x195444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x195448: 0xc093546  jal         func_24D518
    ctx->pc = 0x195448u;
    SET_GPR_U32(ctx, 31, 0x195450u);
    ctx->pc = 0x19544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195448u;
    // 0x19544c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195448u, 0x195450u)) {
        return;
    }
    ctx->pc = 0x195450u;
label_195450:
    // 0x195450: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x195450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x195454: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x195454u;
    SET_GPR_U32(ctx, 31, 0x19545Cu);
    ctx->pc = 0x195458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195454u;
    // 0x195458: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x195454u, 0x19545Cu)) {
        return;
    }
    ctx->pc = 0x19545Cu;
label_19545c:
    // 0x19545c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19545cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195464: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x195464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195468: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x195468u;
    SET_GPR_U32(ctx, 31, 0x195470u);
    ctx->pc = 0x19546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195468u;
    // 0x19546c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x195468u, 0x195470u)) {
        return;
    }
    ctx->pc = 0x195470u;
label_195470:
    // 0x195470: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x195470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x195474: 0x2863ffff  slti        $v1, $v1, -0x1
    ctx->pc = 0x195474u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x195478: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x195478u;
    {
        const bool branch_taken_0x195478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195478u;
        // 0x19547c: 0x37a5000c  ori         $a1, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195478) {
            ctx->pc = 0x1954C4u;
            goto label_1954c4;
        }
    }
    ctx->pc = 0x195480u;
    // 0x195480: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x195480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195484: 0xc093546  jal         func_24D518
    ctx->pc = 0x195484u;
    SET_GPR_U32(ctx, 31, 0x19548Cu);
    ctx->pc = 0x195488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195484u;
    // 0x195488: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195484u, 0x19548Cu)) {
        return;
    }
    ctx->pc = 0x19548Cu;
label_19548c:
    // 0x19548c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x19548cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x195490: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x195490u;
    {
        const bool branch_taken_0x195490 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x195494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195490u;
        // 0x195494: 0x8fb00008  lw          $s0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195490) {
            ctx->pc = 0x1954C8u;
            goto label_1954c8;
        }
    }
    ctx->pc = 0x195498u;
    // 0x195498: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x195498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19549c: 0xc080924  jal         func_202490
    ctx->pc = 0x19549Cu;
    SET_GPR_U32(ctx, 31, 0x1954A4u);
    ctx->pc = 0x1954A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19549Cu;
    // 0x1954a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x19549Cu, 0x1954A4u)) {
        return;
    }
    ctx->pc = 0x1954A4u;
label_1954a4:
    // 0x1954a4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1954a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1954a8: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1954a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1954ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1954acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1954b0: 0xc093546  jal         func_24D518
    ctx->pc = 0x1954B0u;
    SET_GPR_U32(ctx, 31, 0x1954B8u);
    ctx->pc = 0x1954B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1954B0u;
    // 0x1954b4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1954B0u, 0x1954B8u)) {
        return;
    }
    ctx->pc = 0x1954B8u;
label_1954b8:
    // 0x1954b8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1954b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1954bc: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x1954bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1954c0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1954c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1954c4:
    // 0x1954c4: 0x8fb00008  lw          $s0, 0x8($sp)
    ctx->pc = 0x1954c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1954c8:
    // 0x1954c8: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x1954c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1954cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1954ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1954d0: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1954d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1954d4: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x1954d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
    // 0x1954d8: 0x2612ffff  addiu       $s2, $s0, -0x1
    ctx->pc = 0x1954d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1954dc: 0xc080924  jal         func_202490
    ctx->pc = 0x1954DCu;
    SET_GPR_U32(ctx, 31, 0x1954E4u);
    ctx->pc = 0x1954E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1954DCu;
    // 0x1954e0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1954DCu, 0x1954E4u)) {
        return;
    }
    ctx->pc = 0x1954E4u;
label_1954e4:
    // 0x1954e4: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x1954e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1954e8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1954e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1954ec: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1954ECu;
    {
        const bool branch_taken_0x1954ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954ECu;
        // 0x1954f0: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954ec) {
            ctx->pc = 0x195510u;
            goto label_195510;
        }
    }
    ctx->pc = 0x1954F4u;
    // 0x1954f4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1954f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1954f8:
    // 0x1954f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1954f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1954fc: 0xc042bf8  jal         func_10AFE0
    ctx->pc = 0x1954FCu;
    SET_GPR_U32(ctx, 31, 0x195504u);
    ctx->pc = 0x195500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1954FCu;
    // 0x195500: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10AFE0u, 0x1954FCu, 0x195504u)) {
        return;
    }
    ctx->pc = 0x195504u;
label_195504:
    // 0x195504: 0x0  nop
    ctx->pc = 0x195504u;
    // NOP
    // 0x195508: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x195508u;
    {
        const bool branch_taken_0x195508 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x19550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195508u;
        // 0x19550c: 0x26310038  addiu       $s1, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195508) {
            ctx->pc = 0x1954F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1954f8;
        }
    }
    ctx->pc = 0x195510u;
label_195510:
    // 0x195510: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x195510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x195514: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x195514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x195518: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x195518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19551c: 0xaed40004  sw          $s4, 0x4($s6)
    ctx->pc = 0x19551cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 20));
    // 0x195520: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x195520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x195524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195528: 0x3012  mflo        $a2
    ctx->pc = 0x195528u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x19552c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x19552Cu;
    SET_GPR_U32(ctx, 31, 0x195534u);
    ctx->pc = 0x195530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19552Cu;
    // 0x195530: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x19552Cu, 0x195534u)) {
        return;
    }
    ctx->pc = 0x195534u;
label_195534:
    // 0x195534: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x195534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x195538: 0x18600076  blez        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x195538u;
    {
        const bool branch_taken_0x195538 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x19553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195538u;
        // 0x19553c: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195538) {
            ctx->pc = 0x195714u;
            goto label_195714;
        }
    }
    ctx->pc = 0x195540u;
label_195540:
    // 0x195540: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x195540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x195544: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x195544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x195548: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x195548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19554c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x19554cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x195550: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x195550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195554: 0xc093546  jal         func_24D518
    ctx->pc = 0x195554u;
    SET_GPR_U32(ctx, 31, 0x19555Cu);
    ctx->pc = 0x195558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195554u;
    // 0x195558: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195554u, 0x19555Cu)) {
        return;
    }
    ctx->pc = 0x19555Cu;
label_19555c:
    // 0x19555c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19555cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195560: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x195560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195564: 0xc080924  jal         func_202490
    ctx->pc = 0x195564u;
    SET_GPR_U32(ctx, 31, 0x19556Cu);
    ctx->pc = 0x195568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195564u;
    // 0x195568: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x195564u, 0x19556Cu)) {
        return;
    }
    ctx->pc = 0x19556Cu;
label_19556c:
    // 0x19556c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x19556cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x195570: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x195570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195574: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x195574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195578: 0xc093546  jal         func_24D518
    ctx->pc = 0x195578u;
    SET_GPR_U32(ctx, 31, 0x195580u);
    ctx->pc = 0x19557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195578u;
    // 0x19557c: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195578u, 0x195580u)) {
        return;
    }
    ctx->pc = 0x195580u;
label_195580:
    // 0x195580: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195584: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x195584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x195588: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x195588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19558c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19558cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x195590: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x195590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x195594: 0x2842fffe  slti        $v0, $v0, -0x2
    ctx->pc = 0x195594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967294) ? 1 : 0);
    // 0x195598: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195598u;
    {
        const bool branch_taken_0x195598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195598u;
        // 0x19559c: 0x27a50014  addiu       $a1, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195598) {
            ctx->pc = 0x1955B4u;
            goto label_1955b4;
        }
    }
    ctx->pc = 0x1955A0u;
    // 0x1955a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1955a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955a4: 0xc093546  jal         func_24D518
    ctx->pc = 0x1955A4u;
    SET_GPR_U32(ctx, 31, 0x1955ACu);
    ctx->pc = 0x1955A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955A4u;
    // 0x1955a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1955A4u, 0x1955ACu)) {
        return;
    }
    ctx->pc = 0x1955ACu;
label_1955ac:
    // 0x1955ac: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1955acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1955b0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1955b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_1955b4:
    // 0x1955b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1955b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955b8: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x1955b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1955bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1955bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1955c0: 0xc093546  jal         func_24D518
    ctx->pc = 0x1955C0u;
    SET_GPR_U32(ctx, 31, 0x1955C8u);
    ctx->pc = 0x1955C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955C0u;
    // 0x1955c4: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1955C0u, 0x1955C8u)) {
        return;
    }
    ctx->pc = 0x1955C8u;
label_1955c8:
    // 0x1955c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1955c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1955ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955d0: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x1955d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1955d4: 0xc093546  jal         func_24D518
    ctx->pc = 0x1955D4u;
    SET_GPR_U32(ctx, 31, 0x1955DCu);
    ctx->pc = 0x1955D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955D4u;
    // 0x1955d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1955D4u, 0x1955DCu)) {
        return;
    }
    ctx->pc = 0x1955DCu;
label_1955dc:
    // 0x1955dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1955dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955e0: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x1955e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1955e4: 0xc093546  jal         func_24D518
    ctx->pc = 0x1955E4u;
    SET_GPR_U32(ctx, 31, 0x1955ECu);
    ctx->pc = 0x1955E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955E4u;
    // 0x1955e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1955E4u, 0x1955ECu)) {
        return;
    }
    ctx->pc = 0x1955ECu;
label_1955ec:
    // 0x1955ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1955ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955f0: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x1955f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1955f4: 0xc093546  jal         func_24D518
    ctx->pc = 0x1955F4u;
    SET_GPR_U32(ctx, 31, 0x1955FCu);
    ctx->pc = 0x1955F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955F4u;
    // 0x1955f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1955F4u, 0x1955FCu)) {
        return;
    }
    ctx->pc = 0x1955FCu;
label_1955fc:
    // 0x1955fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1955fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195600: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x195600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x195604: 0xc093546  jal         func_24D518
    ctx->pc = 0x195604u;
    SET_GPR_U32(ctx, 31, 0x19560Cu);
    ctx->pc = 0x195608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195604u;
    // 0x195608: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195604u, 0x19560Cu)) {
        return;
    }
    ctx->pc = 0x19560Cu;
label_19560c:
    // 0x19560c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19560cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195610: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x195610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x195614: 0xc093546  jal         func_24D518
    ctx->pc = 0x195614u;
    SET_GPR_U32(ctx, 31, 0x19561Cu);
    ctx->pc = 0x195618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195614u;
    // 0x195618: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195614u, 0x19561Cu)) {
        return;
    }
    ctx->pc = 0x19561Cu;
label_19561c:
    // 0x19561c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19561cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195620: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x195620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x195624: 0xc093546  jal         func_24D518
    ctx->pc = 0x195624u;
    SET_GPR_U32(ctx, 31, 0x19562Cu);
    ctx->pc = 0x195628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195624u;
    // 0x195628: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195624u, 0x19562Cu)) {
        return;
    }
    ctx->pc = 0x19562Cu;
label_19562c:
    // 0x19562c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19562cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195630: 0x26450024  addiu       $a1, $s2, 0x24
    ctx->pc = 0x195630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x195634: 0xc093546  jal         func_24D518
    ctx->pc = 0x195634u;
    SET_GPR_U32(ctx, 31, 0x19563Cu);
    ctx->pc = 0x195638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195634u;
    // 0x195638: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195634u, 0x19563Cu)) {
        return;
    }
    ctx->pc = 0x19563Cu;
label_19563c:
    // 0x19563c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19563cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195640: 0x26450028  addiu       $a1, $s2, 0x28
    ctx->pc = 0x195640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x195644: 0xc093546  jal         func_24D518
    ctx->pc = 0x195644u;
    SET_GPR_U32(ctx, 31, 0x19564Cu);
    ctx->pc = 0x195648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195644u;
    // 0x195648: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195644u, 0x19564Cu)) {
        return;
    }
    ctx->pc = 0x19564Cu;
label_19564c:
    // 0x19564c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195650: 0x2645002c  addiu       $a1, $s2, 0x2C
    ctx->pc = 0x195650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x195654: 0xc093546  jal         func_24D518
    ctx->pc = 0x195654u;
    SET_GPR_U32(ctx, 31, 0x19565Cu);
    ctx->pc = 0x195658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195654u;
    // 0x195658: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195654u, 0x19565Cu)) {
        return;
    }
    ctx->pc = 0x19565Cu;
label_19565c:
    // 0x19565c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19565cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195660: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x195660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x195664: 0xc093546  jal         func_24D518
    ctx->pc = 0x195664u;
    SET_GPR_U32(ctx, 31, 0x19566Cu);
    ctx->pc = 0x195668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195664u;
    // 0x195668: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195664u, 0x19566Cu)) {
        return;
    }
    ctx->pc = 0x19566Cu;
label_19566c:
    // 0x19566c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x19566cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x195670: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x195670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195674: 0xc080924  jal         func_202490
    ctx->pc = 0x195674u;
    SET_GPR_U32(ctx, 31, 0x19567Cu);
    ctx->pc = 0x195678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195674u;
    // 0x195678: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x195674u, 0x19567Cu)) {
        return;
    }
    ctx->pc = 0x19567Cu;
label_19567c:
    // 0x19567c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x19567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x195680: 0x1860001f  blez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x195680u;
    {
        const bool branch_taken_0x195680 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x195684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195680u;
        // 0x195684: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195680) {
            ctx->pc = 0x195700u;
            goto label_195700;
        }
    }
    ctx->pc = 0x195688u;
    // 0x195688: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x195688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x19568c: 0x0  nop
    ctx->pc = 0x19568cu;
    // NOP
label_195690:
    // 0x195690: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x195690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x195694: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x195694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195698: 0xc093546  jal         func_24D518
    ctx->pc = 0x195698u;
    SET_GPR_U32(ctx, 31, 0x1956A0u);
    ctx->pc = 0x19569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195698u;
    // 0x19569c: 0x148880  sll         $s1, $s4, 2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x195698u, 0x1956A0u)) {
        return;
    }
    ctx->pc = 0x1956A0u;
label_1956a0:
    // 0x1956a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1956a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1956a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1956a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1956a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1956a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1956ac: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x1956acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1956b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1956b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1956b4: 0xc080924  jal         func_202490
    ctx->pc = 0x1956B4u;
    SET_GPR_U32(ctx, 31, 0x1956BCu);
    ctx->pc = 0x1956B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1956B4u;
    // 0x1956b8: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1956B4u, 0x1956BCu)) {
        return;
    }
    ctx->pc = 0x1956BCu;
label_1956bc:
    // 0x1956bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1956bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1956c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1956c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1956c4: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1956c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1956c8: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1956c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1956cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1956ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1956d0: 0xc093546  jal         func_24D518
    ctx->pc = 0x1956D0u;
    SET_GPR_U32(ctx, 31, 0x1956D8u);
    ctx->pc = 0x1956D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1956D0u;
    // 0x1956d4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1956D0u, 0x1956D8u)) {
        return;
    }
    ctx->pc = 0x1956D8u;
label_1956d8:
    // 0x1956d8: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1956d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1956dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1956dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1956e0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1956e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1956e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1956e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1956e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1956e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1956ec: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1956ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1956f0: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1956f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1956f4: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x1956f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1956f8: 0x5460ffe5  bnel        $v1, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1956F8u;
    {
        const bool branch_taken_0x1956f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1956f8) {
            ctx->pc = 0x1956FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1956F8u;
            // 0x1956fc: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195690;
        }
    }
    ctx->pc = 0x195700u;
label_195700:
    // 0x195700: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x195700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x195704: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x195704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195708: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x195708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19570c: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x19570Cu;
    {
        const bool branch_taken_0x19570c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19570Cu;
        // 0x195710: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19570c) {
            ctx->pc = 0x195540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195540;
        }
    }
    ctx->pc = 0x195714u;
label_195714:
    // 0x195714: 0x13c0000e  beqz        $fp, . + 4 + (0xE << 2)
    ctx->pc = 0x195714u;
    {
        const bool branch_taken_0x195714 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x195718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195714u;
        // 0x195718: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195714) {
            ctx->pc = 0x195750u;
            goto label_195750;
        }
    }
    ctx->pc = 0x19571Cu;
    // 0x19571c: 0x83c20000  lb          $v0, 0x0($fp)
    ctx->pc = 0x19571cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x195720: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x195720u;
    {
        const bool branch_taken_0x195720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195720u;
        // 0x195724: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195720) {
            ctx->pc = 0x195744u;
            goto label_195744;
        }
    }
    ctx->pc = 0x195728u;
    // 0x195728: 0xc080fe2  jal         func_203F88
    ctx->pc = 0x195728u;
    SET_GPR_U32(ctx, 31, 0x195730u);
    ctx->pc = 0x19572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195728u;
    // 0x19572c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203F88u, 0x195728u, 0x195730u)) {
        return;
    }
    ctx->pc = 0x195730u;
label_195730:
    // 0x195730: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x195730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x195734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x195734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195738: 0x24c69db0  addiu       $a2, $a2, -0x6250
    ctx->pc = 0x195738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942128));
    // 0x19573c: 0xc08185e  jal         func_206178
    ctx->pc = 0x19573Cu;
    SET_GPR_U32(ctx, 31, 0x195744u);
    ctx->pc = 0x195740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19573Cu;
    // 0x195740: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206178u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206178u, 0x19573Cu, 0x195744u)) {
        return;
    }
    ctx->pc = 0x195744u;
label_195744:
    // 0x195744: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x195744u;
    SET_GPR_U32(ctx, 31, 0x19574Cu);
    ctx->pc = 0x195748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195744u;
    // 0x195748: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x195744u, 0x19574Cu)) {
        return;
    }
    ctx->pc = 0x19574Cu;
label_19574c:
    // 0x19574c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x19574cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_195750:
    // 0x195750: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x195750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x195754: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x195754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x195758: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x195758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19575c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x19575cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195760: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x195760u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x195764: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x195764u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195768: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x195768u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19576c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x19576cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195770: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x195770u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195774: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195778: 0x3e00008  jr          $ra
    ctx->pc = 0x195778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195778u;
        // 0x19577c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195780u;
}
