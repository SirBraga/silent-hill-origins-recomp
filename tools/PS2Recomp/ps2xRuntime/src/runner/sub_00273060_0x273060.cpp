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

// Function: sub_00273060
// Address: 0x273060 - 0x2731a0
void sub_00273060_0x273060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273060_0x273060");
#endif

    switch (ctx->pc) {
        case 0x273060u: goto label_273060;
        case 0x273064u: goto label_273064;
        case 0x273068u: goto label_273068;
        case 0x27306cu: goto label_27306c;
        case 0x273070u: goto label_273070;
        case 0x273074u: goto label_273074;
        case 0x273078u: goto label_273078;
        case 0x27307cu: goto label_27307c;
        case 0x273080u: goto label_273080;
        case 0x273084u: goto label_273084;
        case 0x273088u: goto label_273088;
        case 0x27308cu: goto label_27308c;
        case 0x273090u: goto label_273090;
        case 0x273094u: goto label_273094;
        case 0x273098u: goto label_273098;
        case 0x27309cu: goto label_27309c;
        case 0x2730a0u: goto label_2730a0;
        case 0x2730a4u: goto label_2730a4;
        case 0x2730a8u: goto label_2730a8;
        case 0x2730acu: goto label_2730ac;
        case 0x2730b0u: goto label_2730b0;
        case 0x2730b4u: goto label_2730b4;
        case 0x2730b8u: goto label_2730b8;
        case 0x2730bcu: goto label_2730bc;
        case 0x2730c0u: goto label_2730c0;
        case 0x2730c4u: goto label_2730c4;
        case 0x2730c8u: goto label_2730c8;
        case 0x2730ccu: goto label_2730cc;
        case 0x2730d0u: goto label_2730d0;
        case 0x2730d4u: goto label_2730d4;
        case 0x2730d8u: goto label_2730d8;
        case 0x2730dcu: goto label_2730dc;
        case 0x2730e0u: goto label_2730e0;
        case 0x2730e4u: goto label_2730e4;
        case 0x2730e8u: goto label_2730e8;
        case 0x2730ecu: goto label_2730ec;
        case 0x2730f0u: goto label_2730f0;
        case 0x2730f4u: goto label_2730f4;
        case 0x2730f8u: goto label_2730f8;
        case 0x2730fcu: goto label_2730fc;
        case 0x273100u: goto label_273100;
        case 0x273104u: goto label_273104;
        case 0x273108u: goto label_273108;
        case 0x27310cu: goto label_27310c;
        case 0x273110u: goto label_273110;
        case 0x273114u: goto label_273114;
        case 0x273118u: goto label_273118;
        case 0x27311cu: goto label_27311c;
        case 0x273120u: goto label_273120;
        case 0x273124u: goto label_273124;
        case 0x273128u: goto label_273128;
        case 0x27312cu: goto label_27312c;
        case 0x273130u: goto label_273130;
        case 0x273134u: goto label_273134;
        case 0x273138u: goto label_273138;
        case 0x27313cu: goto label_27313c;
        case 0x273140u: goto label_273140;
        case 0x273144u: goto label_273144;
        case 0x273148u: goto label_273148;
        case 0x27314cu: goto label_27314c;
        case 0x273150u: goto label_273150;
        case 0x273154u: goto label_273154;
        case 0x273158u: goto label_273158;
        case 0x27315cu: goto label_27315c;
        case 0x273160u: goto label_273160;
        case 0x273164u: goto label_273164;
        case 0x273168u: goto label_273168;
        case 0x27316cu: goto label_27316c;
        case 0x273170u: goto label_273170;
        case 0x273174u: goto label_273174;
        case 0x273178u: goto label_273178;
        case 0x27317cu: goto label_27317c;
        case 0x273180u: goto label_273180;
        case 0x273184u: goto label_273184;
        case 0x273188u: goto label_273188;
        case 0x27318cu: goto label_27318c;
        case 0x273190u: goto label_273190;
        case 0x273194u: goto label_273194;
        case 0x273198u: goto label_273198;
        case 0x27319cu: goto label_27319c;
        default: break;
    }

    ctx->pc = 0x273060u;

label_273060:
    // 0x273060: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x273060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_273064:
    // 0x273064: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x273064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_273068:
    // 0x273068: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x273068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_27306c:
    // 0x27306c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x27306cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_273070:
    // 0x273070: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x273070u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273074:
    // 0x273074: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x273074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_273078:
    // 0x273078: 0x244253c8  addiu       $v0, $v0, 0x53C8
    ctx->pc = 0x273078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21448));
label_27307c:
    // 0x27307c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x27307cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_273080:
    // 0x273080: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x273080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_273084:
    // 0x273084: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x273084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_273088:
    // 0x273088: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x273088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_27308c:
    // 0x27308c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x27308cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_273090:
    // 0x273090: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x273090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_273094:
    // 0x273094: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x273094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_273098:
    // 0x273098: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x273098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_27309c:
    // 0x27309c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_2730a0:
    if (ctx->pc == 0x2730A0u) {
        ctx->pc = 0x2730A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27309Cu;
        // 0x2730a0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2730A4u;
        goto label_2730a4;
    }
    ctx->pc = 0x27309Cu;
    {
        const bool branch_taken_0x27309c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27309Cu;
        // 0x2730a0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27309c) {
            ctx->pc = 0x273150u;
            goto label_273150;
        }
    }
    ctx->pc = 0x2730A4u;
label_2730a4:
    // 0x2730a4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x2730a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_2730a8:
    // 0x2730a8: 0x26030fc8  addiu       $v1, $s0, 0xFC8
    ctx->pc = 0x2730a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_2730ac:
    // 0x2730ac: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2730acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2730b0:
    // 0x2730b0: 0x40f809  jalr        $v0
label_2730b4:
    if (ctx->pc == 0x2730B4u) {
        ctx->pc = 0x2730B8u;
        goto label_2730b8;
    }
    ctx->pc = 0x2730B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2730B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2730B0u, 0x2730B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2730B8u;
label_2730b8:
    // 0x2730b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2730b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2730bc:
    // 0x2730bc: 0x12a00021  beqz        $s5, . + 4 + (0x21 << 2)
label_2730c0:
    if (ctx->pc == 0x2730C0u) {
        ctx->pc = 0x2730C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730BCu;
        // 0x2730c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2730C4u;
        goto label_2730c4;
    }
    ctx->pc = 0x2730BCu;
    {
        const bool branch_taken_0x2730bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730BCu;
        // 0x2730c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730bc) {
            ctx->pc = 0x273144u;
            goto label_273144;
        }
    }
    ctx->pc = 0x2730C4u;
label_2730c4:
    // 0x2730c4: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x2730c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2730c8:
    // 0x2730c8: 0x2417003a  addiu       $s7, $zero, 0x3A
    ctx->pc = 0x2730c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_2730cc:
    // 0x2730cc: 0x2861821  addu        $v1, $s4, $a2
    ctx->pc = 0x2730ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_2730d0:
    // 0x2730d0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2730d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2730d4:
    // 0x2730d4: 0x14570017  bne         $v0, $s7, . + 4 + (0x17 << 2)
label_2730d8:
    if (ctx->pc == 0x2730D8u) {
        ctx->pc = 0x2730D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730D4u;
        // 0x2730d8: 0x24d10001  addiu       $s1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2730DCu;
        goto label_2730dc;
    }
    ctx->pc = 0x2730D4u;
    {
        const bool branch_taken_0x2730d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x2730D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730D4u;
        // 0x2730d8: 0x24d10001  addiu       $s1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730d4) {
            ctx->pc = 0x273134u;
            goto label_273134;
        }
    }
    ctx->pc = 0x2730DCu;
label_2730dc:
    // 0x2730dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2730dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2730e0:
    // 0x2730e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2730e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2730e4:
    // 0x2730e4: 0xc0c4bea  jal         func_312FA8
label_2730e8:
    if (ctx->pc == 0x2730E8u) {
        ctx->pc = 0x2730E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730E4u;
        // 0x2730e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2730ECu;
        goto label_2730ec;
    }
    ctx->pc = 0x2730E4u;
    SET_GPR_U32(ctx, 31, 0x2730ECu);
    ctx->pc = 0x2730E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2730E4u;
    // 0x2730e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x2730E4u, 0x2730ECu)) {
        return;
    }
    ctx->pc = 0x2730ECu;
label_2730ec:
    // 0x2730ec: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x2730ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
label_2730f0:
    // 0x2730f0: 0x8ed053c8  lw          $s0, 0x53C8($s6)
    ctx->pc = 0x2730f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 21448)));
label_2730f4:
    // 0x2730f4: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x2730f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2730f8:
    // 0x2730f8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_2730fc:
    if (ctx->pc == 0x2730FCu) {
        ctx->pc = 0x2730FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730F8u;
        // 0x2730fc: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273100u;
        goto label_273100;
    }
    ctx->pc = 0x2730F8u;
    {
        const bool branch_taken_0x2730f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730F8u;
        // 0x2730fc: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730f8) {
            ctx->pc = 0x273128u;
            goto label_273128;
        }
    }
    ctx->pc = 0x273100u;
label_273100:
    // 0x273100: 0x27d30fc8  addiu       $s3, $fp, 0xFC8
    ctx->pc = 0x273100u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4040));
label_273104:
    // 0x273104: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x273104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_273108:
    // 0x273108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27310c:
    // 0x27310c: 0x40f809  jalr        $v0
label_273110:
    if (ctx->pc == 0x273110u) {
        ctx->pc = 0x273110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27310Cu;
        // 0x273110: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273114u;
        goto label_273114;
    }
    ctx->pc = 0x27310Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273114u);
        ctx->pc = 0x273110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27310Cu;
        // 0x273110: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27310Cu, 0x273114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273114u;
label_273114:
    // 0x273114: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_273118:
    if (ctx->pc == 0x273118u) {
        ctx->pc = 0x273118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273114u;
        // 0x273118: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27311Cu;
        goto label_27311c;
    }
    ctx->pc = 0x273114u;
    {
        const bool branch_taken_0x273114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273114u;
        // 0x273118: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273114) {
            ctx->pc = 0x27312Cu;
            goto label_27312c;
        }
    }
    ctx->pc = 0x27311Cu;
label_27311c:
    // 0x27311c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x27311cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_273120:
    // 0x273120: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_273124:
    if (ctx->pc == 0x273124u) {
        ctx->pc = 0x273124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273120u;
        // 0x273124: 0x8e6200f0  lw          $v0, 0xF0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273128u;
        goto label_273128;
    }
    ctx->pc = 0x273120u;
    {
        const bool branch_taken_0x273120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x273120) {
            ctx->pc = 0x273124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273120u;
            // 0x273124: 0x8e6200f0  lw          $v0, 0xF0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273108;
        }
    }
    ctx->pc = 0x273128u;
label_273128:
    // 0x273128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27312c:
    // 0x27312c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_273130:
    if (ctx->pc == 0x273130u) {
        ctx->pc = 0x273130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27312Cu;
        // 0x273130: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273134u;
        goto label_273134;
    }
    ctx->pc = 0x27312Cu;
    {
        const bool branch_taken_0x27312c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27312Cu;
        // 0x273130: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27312c) {
            ctx->pc = 0x273170u;
            goto label_273170;
        }
    }
    ctx->pc = 0x273134u;
label_273134:
    // 0x273134: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x273134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273138:
    // 0x273138: 0xd5102b  sltu        $v0, $a2, $s5
    ctx->pc = 0x273138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_27313c:
    // 0x27313c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_273140:
    if (ctx->pc == 0x273140u) {
        ctx->pc = 0x273140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27313Cu;
        // 0x273140: 0x2861821  addu        $v1, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273144u;
        goto label_273144;
    }
    ctx->pc = 0x27313Cu;
    {
        const bool branch_taken_0x27313c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27313Cu;
        // 0x273140: 0x2861821  addu        $v1, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27313c) {
            ctx->pc = 0x2730D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2730d0;
        }
    }
    ctx->pc = 0x273144u;
label_273144:
    // 0x273144: 0x8f828f84  lw          $v0, -0x707C($gp)
    ctx->pc = 0x273144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938500)));
label_273148:
    // 0x273148: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_27314c:
    if (ctx->pc == 0x27314Cu) {
        ctx->pc = 0x27314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273148u;
        // 0x27314c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273150u;
        goto label_273150;
    }
    ctx->pc = 0x273148u;
    {
        const bool branch_taken_0x273148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273148u;
        // 0x27314c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273148) {
            ctx->pc = 0x273170u;
            goto label_273170;
        }
    }
    ctx->pc = 0x273150u;
label_273150:
    // 0x273150: 0x26c253c8  addiu       $v0, $s6, 0x53C8
    ctx->pc = 0x273150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 21448));
label_273154:
    // 0x273154: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x273154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_273158:
    // 0x273158: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_27315c:
    if (ctx->pc == 0x27315Cu) {
        ctx->pc = 0x27315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273158u;
        // 0x27315c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273160u;
        goto label_273160;
    }
    ctx->pc = 0x273158u;
    {
        const bool branch_taken_0x273158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273158) {
            ctx->pc = 0x27315Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273158u;
            // 0x27315c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27316Cu;
            goto label_27316c;
        }
    }
    ctx->pc = 0x273160u;
label_273160:
    // 0x273160: 0x40f809  jalr        $v0
label_273164:
    if (ctx->pc == 0x273164u) {
        ctx->pc = 0x273164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273160u;
        // 0x273164: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273168u;
        goto label_273168;
    }
    ctx->pc = 0x273160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273168u);
        ctx->pc = 0x273164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273160u;
        // 0x273164: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273160u, 0x273168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273168u;
label_273168:
    // 0x273168: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27316c:
    // 0x27316c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x27316cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_273170:
    // 0x273170: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x273170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_273174:
    // 0x273174: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x273174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_273178:
    // 0x273178: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x273178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_27317c:
    // 0x27317c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x27317cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_273180:
    // 0x273180: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x273180u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_273184:
    // 0x273184: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x273184u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_273188:
    // 0x273188: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x273188u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27318c:
    // 0x27318c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27318cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_273190:
    // 0x273190: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x273190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_273194:
    // 0x273194: 0x3e00008  jr          $ra
label_273198:
    if (ctx->pc == 0x273198u) {
        ctx->pc = 0x273198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273194u;
        // 0x273198: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27319Cu;
        goto label_27319c;
    }
    ctx->pc = 0x273194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273194u;
        // 0x273198: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27319Cu;
label_27319c:
    // 0x27319c: 0x0  nop
    ctx->pc = 0x27319cu;
    // NOP
    ctx->pc = 0x2731a0u;
}
