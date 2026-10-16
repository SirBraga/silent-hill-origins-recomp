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

// Function: sub_0019C810
// Address: 0x19c810 - 0x19cd28
void sub_0019C810_0x19c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C810_0x19c810");
#endif

    switch (ctx->pc) {
        case 0x19c828u: goto label_19c828;
        case 0x19c83cu: goto label_19c83c;
        case 0x19c84cu: goto label_19c84c;
        case 0x19c860u: goto label_19c860;
        case 0x19c88cu: goto label_19c88c;
        case 0x19c894u: goto label_19c894;
        case 0x19c8c0u: goto label_19c8c0;
        case 0x19c8c8u: goto label_19c8c8;
        case 0x19c8f4u: goto label_19c8f4;
        case 0x19c8fcu: goto label_19c8fc;
        case 0x19c928u: goto label_19c928;
        case 0x19c930u: goto label_19c930;
        case 0x19c95cu: goto label_19c95c;
        case 0x19c964u: goto label_19c964;
        case 0x19c990u: goto label_19c990;
        case 0x19c998u: goto label_19c998;
        case 0x19c9c4u: goto label_19c9c4;
        case 0x19c9ccu: goto label_19c9cc;
        case 0x19c9f8u: goto label_19c9f8;
        case 0x19ca00u: goto label_19ca00;
        case 0x19ca2cu: goto label_19ca2c;
        case 0x19ca34u: goto label_19ca34;
        case 0x19ca60u: goto label_19ca60;
        case 0x19ca68u: goto label_19ca68;
        case 0x19ca94u: goto label_19ca94;
        case 0x19ca9cu: goto label_19ca9c;
        case 0x19cac8u: goto label_19cac8;
        case 0x19cad0u: goto label_19cad0;
        case 0x19cafcu: goto label_19cafc;
        case 0x19cb04u: goto label_19cb04;
        case 0x19cb30u: goto label_19cb30;
        case 0x19cb38u: goto label_19cb38;
        case 0x19cb64u: goto label_19cb64;
        case 0x19cb6cu: goto label_19cb6c;
        case 0x19cb98u: goto label_19cb98;
        case 0x19cba0u: goto label_19cba0;
        case 0x19cbccu: goto label_19cbcc;
        case 0x19cbd4u: goto label_19cbd4;
        case 0x19cc00u: goto label_19cc00;
        case 0x19cc08u: goto label_19cc08;
        case 0x19cc34u: goto label_19cc34;
        case 0x19cc3cu: goto label_19cc3c;
        case 0x19cc68u: goto label_19cc68;
        case 0x19cc70u: goto label_19cc70;
        case 0x19cc9cu: goto label_19cc9c;
        case 0x19cca4u: goto label_19cca4;
        case 0x19ccd0u: goto label_19ccd0;
        case 0x19ccd8u: goto label_19ccd8;
        case 0x19cd04u: goto label_19cd04;
        case 0x19cd0cu: goto label_19cd0c;
        default: break;
    }

    ctx->pc = 0x19c810u;

    // 0x19c810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c814: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19c814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19c818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c81c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c820: 0xc08aab2  jal         func_22AAC8
    ctx->pc = 0x19C820u;
    SET_GPR_U32(ctx, 31, 0x19C828u);
    ctx->pc = 0x19C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C820u;
    // 0x19c824: 0x3c110070  lui         $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AAC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AAC8u, 0x19C820u, 0x19C828u)) {
        return;
    }
    ctx->pc = 0x19C828u;
label_19c828:
    // 0x19c828: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x19c828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x19c82c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x19c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x19c830: 0xac629078  sw          $v0, -0x6F88($v1)
    ctx->pc = 0x19c830u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x339078u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339078u, _value); } while (0);
    // 0x19c834: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19C834u;
    SET_GPR_U32(ctx, 31, 0x19C83Cu);
    ctx->pc = 0x19C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C834u;
    // 0x19c838: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19C834u, 0x19C83Cu)) {
        return;
    }
    ctx->pc = 0x19C83Cu;
label_19c83c:
    // 0x19c83c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19c83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c844: 0xc0802a6  jal         func_200A98
    ctx->pc = 0x19C844u;
    SET_GPR_U32(ctx, 31, 0x19C84Cu);
    ctx->pc = 0x19C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C844u;
    // 0x19c848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200A98u, 0x19C844u, 0x19C84Cu)) {
        return;
    }
    ctx->pc = 0x19C84Cu;
label_19c84c:
    // 0x19c84c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19c84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19c850: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x19c850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x19c854: 0x2463a500  addiu       $v1, $v1, -0x5B00
    ctx->pc = 0x19c854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944000));
    // 0x19c858: 0xc080858  jal         func_202160
    ctx->pc = 0x19C858u;
    SET_GPR_U32(ctx, 31, 0x19C860u);
    ctx->pc = 0x19C85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C858u;
    // 0x19c85c: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19C858u, 0x19C860u)) {
        return;
    }
    ctx->pc = 0x19C860u;
label_19c860:
    // 0x19c860: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19c860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19c864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c868: 0x2463ac10  addiu       $v1, $v1, -0x53F0
    ctx->pc = 0x19c868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945808));
    // 0x19c86c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19c86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c870: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19c870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19c874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c878: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19c87c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19c880: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19c880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19c884: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19C884u;
    SET_GPR_U32(ctx, 31, 0x19C88Cu);
    ctx->pc = 0x19C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C884u;
    // 0x19c888: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19C884u, 0x19C88Cu)) {
        return;
    }
    ctx->pc = 0x19C88Cu;
label_19c88c:
    // 0x19c88c: 0xc080858  jal         func_202160
    ctx->pc = 0x19C88Cu;
    SET_GPR_U32(ctx, 31, 0x19C894u);
    ctx->pc = 0x19C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C88Cu;
    // 0x19c890: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19C88Cu, 0x19C894u)) {
        return;
    }
    ctx->pc = 0x19C894u;
label_19c894:
    // 0x19c894: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19c894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19c898: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c89c: 0x2463abc0  addiu       $v1, $v1, -0x5440
    ctx->pc = 0x19c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945728));
    // 0x19c8a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19c8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c8a4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19c8a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c8ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19c8b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19c8b4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19c8b8: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19C8B8u;
    SET_GPR_U32(ctx, 31, 0x19C8C0u);
    ctx->pc = 0x19C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C8B8u;
    // 0x19c8bc: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19C8B8u, 0x19C8C0u)) {
        return;
    }
    ctx->pc = 0x19C8C0u;
label_19c8c0:
    // 0x19c8c0: 0xc080858  jal         func_202160
    ctx->pc = 0x19C8C0u;
    SET_GPR_U32(ctx, 31, 0x19C8C8u);
    ctx->pc = 0x19C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C8C0u;
    // 0x19c8c4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19C8C0u, 0x19C8C8u)) {
        return;
    }
    ctx->pc = 0x19C8C8u;
label_19c8c8:
    // 0x19c8c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19c8cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c8d0: 0x2463ab70  addiu       $v1, $v1, -0x5490
    ctx->pc = 0x19c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945648));
    // 0x19c8d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19c8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c8d8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19c8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c8e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19c8e4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19c8e8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19c8ec: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19C8ECu;
    SET_GPR_U32(ctx, 31, 0x19C8F4u);
    ctx->pc = 0x19C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C8ECu;
    // 0x19c8f0: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19C8ECu, 0x19C8F4u)) {
        return;
    }
    ctx->pc = 0x19C8F4u;
label_19c8f4:
    // 0x19c8f4: 0xc080858  jal         func_202160
    ctx->pc = 0x19C8F4u;
    SET_GPR_U32(ctx, 31, 0x19C8FCu);
    ctx->pc = 0x19C8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C8F4u;
    // 0x19c8f8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19C8F4u, 0x19C8FCu)) {
        return;
    }
    ctx->pc = 0x19C8FCu;
label_19c8fc:
    // 0x19c8fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19c8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19c900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c904: 0x2463ab20  addiu       $v1, $v1, -0x54E0
    ctx->pc = 0x19c904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945568));
    // 0x19c908: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19c908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c90c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19c910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c914: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19c918: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19c91c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19c920: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19C920u;
    SET_GPR_U32(ctx, 31, 0x19C928u);
    ctx->pc = 0x19C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C920u;
    // 0x19c924: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19C920u, 0x19C928u)) {
        return;
    }
    ctx->pc = 0x19C928u;
label_19c928:
    // 0x19c928: 0xc080858  jal         func_202160
    ctx->pc = 0x19C928u;
    SET_GPR_U32(ctx, 31, 0x19C930u);
    ctx->pc = 0x19C92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C928u;
    // 0x19c92c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19C928u, 0x19C930u)) {
        return;
    }
    ctx->pc = 0x19C930u;
label_19c930:
    // 0x19c930: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19c930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19c934: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c938: 0x2463aad0  addiu       $v1, $v1, -0x5530
    ctx->pc = 0x19c938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945488));
    // 0x19c93c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19c93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c940: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19c940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19c944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c948: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19c94c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19c950: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19c950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19c954: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19C954u;
    SET_GPR_U32(ctx, 31, 0x19C95Cu);
    ctx->pc = 0x19C958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C954u;
    // 0x19c958: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19C954u, 0x19C95Cu)) {
        return;
    }
    ctx->pc = 0x19C95Cu;
label_19c95c:
    // 0x19c95c: 0xc080858  jal         func_202160
    ctx->pc = 0x19C95Cu;
    SET_GPR_U32(ctx, 31, 0x19C964u);
    ctx->pc = 0x19C960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C95Cu;
    // 0x19c960: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19C95Cu, 0x19C964u)) {
        return;
    }
    ctx->pc = 0x19C964u;
label_19c964:
    // 0x19c964: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19c964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19c968: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c96c: 0x2463aa80  addiu       $v1, $v1, -0x5580
    ctx->pc = 0x19c96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945408));
    // 0x19c970: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19c970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c974: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19c974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19c978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c97c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19c980: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19c984: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19c984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19c988: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19C988u;
    SET_GPR_U32(ctx, 31, 0x19C990u);
    ctx->pc = 0x19C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C988u;
    // 0x19c98c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19C988u, 0x19C990u)) {
        return;
    }
    ctx->pc = 0x19C990u;
label_19c990:
    // 0x19c990: 0xc080858  jal         func_202160
    ctx->pc = 0x19C990u;
    SET_GPR_U32(ctx, 31, 0x19C998u);
    ctx->pc = 0x19C994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C990u;
    // 0x19c994: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19C990u, 0x19C998u)) {
        return;
    }
    ctx->pc = 0x19C998u;
label_19c998:
    // 0x19c998: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19c998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19c99c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9a0: 0x2463aa30  addiu       $v1, $v1, -0x55D0
    ctx->pc = 0x19c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945328));
    // 0x19c9a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19c9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c9a8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19c9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19c9b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19c9b8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19c9bc: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19C9BCu;
    SET_GPR_U32(ctx, 31, 0x19C9C4u);
    ctx->pc = 0x19C9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C9BCu;
    // 0x19c9c0: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19C9BCu, 0x19C9C4u)) {
        return;
    }
    ctx->pc = 0x19C9C4u;
label_19c9c4:
    // 0x19c9c4: 0xc080858  jal         func_202160
    ctx->pc = 0x19C9C4u;
    SET_GPR_U32(ctx, 31, 0x19C9CCu);
    ctx->pc = 0x19C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C9C4u;
    // 0x19c9c8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19C9C4u, 0x19C9CCu)) {
        return;
    }
    ctx->pc = 0x19C9CCu;
label_19c9cc:
    // 0x19c9cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19c9d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9d4: 0x2463a940  addiu       $v1, $v1, -0x56C0
    ctx->pc = 0x19c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945088));
    // 0x19c9d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19c9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c9dc: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19c9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19c9e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19c9ec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19c9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19c9f0: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19C9F0u;
    SET_GPR_U32(ctx, 31, 0x19C9F8u);
    ctx->pc = 0x19C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C9F0u;
    // 0x19c9f4: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19C9F0u, 0x19C9F8u)) {
        return;
    }
    ctx->pc = 0x19C9F8u;
label_19c9f8:
    // 0x19c9f8: 0xc080858  jal         func_202160
    ctx->pc = 0x19C9F8u;
    SET_GPR_U32(ctx, 31, 0x19CA00u);
    ctx->pc = 0x19C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C9F8u;
    // 0x19c9fc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19C9F8u, 0x19CA00u)) {
        return;
    }
    ctx->pc = 0x19CA00u;
label_19ca00:
    // 0x19ca00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19ca04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19ca04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca08: 0x2463a8f0  addiu       $v1, $v1, -0x5710
    ctx->pc = 0x19ca08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945008));
    // 0x19ca0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19ca0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ca10: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19ca14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ca14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca18: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19ca1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19ca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19ca20: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19ca24: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CA24u;
    SET_GPR_U32(ctx, 31, 0x19CA2Cu);
    ctx->pc = 0x19CA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA24u;
    // 0x19ca28: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CA24u, 0x19CA2Cu)) {
        return;
    }
    ctx->pc = 0x19CA2Cu;
label_19ca2c:
    // 0x19ca2c: 0xc080858  jal         func_202160
    ctx->pc = 0x19CA2Cu;
    SET_GPR_U32(ctx, 31, 0x19CA34u);
    ctx->pc = 0x19CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA2Cu;
    // 0x19ca30: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19CA2Cu, 0x19CA34u)) {
        return;
    }
    ctx->pc = 0x19CA34u;
label_19ca34:
    // 0x19ca34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19ca38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19ca38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca3c: 0x2463a7b0  addiu       $v1, $v1, -0x5850
    ctx->pc = 0x19ca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944688));
    // 0x19ca40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19ca40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ca44: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19ca44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19ca48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ca48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19ca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19ca50: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19ca54: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19ca58: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CA58u;
    SET_GPR_U32(ctx, 31, 0x19CA60u);
    ctx->pc = 0x19CA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA58u;
    // 0x19ca5c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CA58u, 0x19CA60u)) {
        return;
    }
    ctx->pc = 0x19CA60u;
label_19ca60:
    // 0x19ca60: 0xc080858  jal         func_202160
    ctx->pc = 0x19CA60u;
    SET_GPR_U32(ctx, 31, 0x19CA68u);
    ctx->pc = 0x19CA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA60u;
    // 0x19ca64: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19CA60u, 0x19CA68u)) {
        return;
    }
    ctx->pc = 0x19CA68u;
label_19ca68:
    // 0x19ca68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19ca6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19ca6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca70: 0x2463a760  addiu       $v1, $v1, -0x58A0
    ctx->pc = 0x19ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944608));
    // 0x19ca74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19ca74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ca78: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19ca7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19ca84: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19ca88: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19ca8c: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CA8Cu;
    SET_GPR_U32(ctx, 31, 0x19CA94u);
    ctx->pc = 0x19CA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA8Cu;
    // 0x19ca90: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CA8Cu, 0x19CA94u)) {
        return;
    }
    ctx->pc = 0x19CA94u;
label_19ca94:
    // 0x19ca94: 0xc080858  jal         func_202160
    ctx->pc = 0x19CA94u;
    SET_GPR_U32(ctx, 31, 0x19CA9Cu);
    ctx->pc = 0x19CA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA94u;
    // 0x19ca98: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19CA94u, 0x19CA9Cu)) {
        return;
    }
    ctx->pc = 0x19CA9Cu;
label_19ca9c:
    // 0x19ca9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19caa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19caa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19caa4: 0x2463a710  addiu       $v1, $v1, -0x58F0
    ctx->pc = 0x19caa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944528));
    // 0x19caa8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19caa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19caac: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19caacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19cab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cab4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19cab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19cab8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19cabc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19cabcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19cac0: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CAC0u;
    SET_GPR_U32(ctx, 31, 0x19CAC8u);
    ctx->pc = 0x19CAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CAC0u;
    // 0x19cac4: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CAC0u, 0x19CAC8u)) {
        return;
    }
    ctx->pc = 0x19CAC8u;
label_19cac8:
    // 0x19cac8: 0xc080858  jal         func_202160
    ctx->pc = 0x19CAC8u;
    SET_GPR_U32(ctx, 31, 0x19CAD0u);
    ctx->pc = 0x19CACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CAC8u;
    // 0x19cacc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19CAC8u, 0x19CAD0u)) {
        return;
    }
    ctx->pc = 0x19CAD0u;
label_19cad0:
    // 0x19cad0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19cad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19cad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cad8: 0x2463a8a0  addiu       $v1, $v1, -0x5760
    ctx->pc = 0x19cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944928));
    // 0x19cadc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19cadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cae0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19cae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cae8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19caec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19caecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19caf0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19caf4: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CAF4u;
    SET_GPR_U32(ctx, 31, 0x19CAFCu);
    ctx->pc = 0x19CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CAF4u;
    // 0x19caf8: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CAF4u, 0x19CAFCu)) {
        return;
    }
    ctx->pc = 0x19CAFCu;
label_19cafc:
    // 0x19cafc: 0xc080858  jal         func_202160
    ctx->pc = 0x19CAFCu;
    SET_GPR_U32(ctx, 31, 0x19CB04u);
    ctx->pc = 0x19CB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CAFCu;
    // 0x19cb00: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19CAFCu, 0x19CB04u)) {
        return;
    }
    ctx->pc = 0x19CB04u;
label_19cb04:
    // 0x19cb04: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19cb08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19cb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb0c: 0x2463a850  addiu       $v1, $v1, -0x57B0
    ctx->pc = 0x19cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944848));
    // 0x19cb10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19cb10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cb14: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19cb14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19cb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb1c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19cb20: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19cb24: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19cb28: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CB28u;
    SET_GPR_U32(ctx, 31, 0x19CB30u);
    ctx->pc = 0x19CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB28u;
    // 0x19cb2c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CB28u, 0x19CB30u)) {
        return;
    }
    ctx->pc = 0x19CB30u;
label_19cb30:
    // 0x19cb30: 0xc080858  jal         func_202160
    ctx->pc = 0x19CB30u;
    SET_GPR_U32(ctx, 31, 0x19CB38u);
    ctx->pc = 0x19CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB30u;
    // 0x19cb34: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19CB30u, 0x19CB38u)) {
        return;
    }
    ctx->pc = 0x19CB38u;
label_19cb38:
    // 0x19cb38: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19cb3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19cb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb40: 0x2463a800  addiu       $v1, $v1, -0x5800
    ctx->pc = 0x19cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944768));
    // 0x19cb44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19cb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cb48: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19cb48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19cb4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19cb54: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19cb54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19cb58: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19cb5c: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CB5Cu;
    SET_GPR_U32(ctx, 31, 0x19CB64u);
    ctx->pc = 0x19CB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB5Cu;
    // 0x19cb60: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CB5Cu, 0x19CB64u)) {
        return;
    }
    ctx->pc = 0x19CB64u;
label_19cb64:
    // 0x19cb64: 0xc080858  jal         func_202160
    ctx->pc = 0x19CB64u;
    SET_GPR_U32(ctx, 31, 0x19CB6Cu);
    ctx->pc = 0x19CB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB64u;
    // 0x19cb68: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19CB64u, 0x19CB6Cu)) {
        return;
    }
    ctx->pc = 0x19CB6Cu;
label_19cb6c:
    // 0x19cb6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19cb70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19cb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb74: 0x2463a670  addiu       $v1, $v1, -0x5990
    ctx->pc = 0x19cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944368));
    // 0x19cb78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19cb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cb7c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19cb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19cb80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb84: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19cb88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19cb88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19cb8c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19cb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19cb90: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CB90u;
    SET_GPR_U32(ctx, 31, 0x19CB98u);
    ctx->pc = 0x19CB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB90u;
    // 0x19cb94: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CB90u, 0x19CB98u)) {
        return;
    }
    ctx->pc = 0x19CB98u;
label_19cb98:
    // 0x19cb98: 0xc080858  jal         func_202160
    ctx->pc = 0x19CB98u;
    SET_GPR_U32(ctx, 31, 0x19CBA0u);
    ctx->pc = 0x19CB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB98u;
    // 0x19cb9c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19CB98u, 0x19CBA0u)) {
        return;
    }
    ctx->pc = 0x19CBA0u;
label_19cba0:
    // 0x19cba0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19cba4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19cba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cba8: 0x2463a620  addiu       $v1, $v1, -0x59E0
    ctx->pc = 0x19cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944288));
    // 0x19cbac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19cbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cbb0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19cbb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cbb8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19cbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19cbbc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19cbc0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19cbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19cbc4: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CBC4u;
    SET_GPR_U32(ctx, 31, 0x19CBCCu);
    ctx->pc = 0x19CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CBC4u;
    // 0x19cbc8: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CBC4u, 0x19CBCCu)) {
        return;
    }
    ctx->pc = 0x19CBCCu;
label_19cbcc:
    // 0x19cbcc: 0xc080858  jal         func_202160
    ctx->pc = 0x19CBCCu;
    SET_GPR_U32(ctx, 31, 0x19CBD4u);
    ctx->pc = 0x19CBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CBCCu;
    // 0x19cbd0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19CBCCu, 0x19CBD4u)) {
        return;
    }
    ctx->pc = 0x19CBD4u;
label_19cbd4:
    // 0x19cbd4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19cbd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19cbd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cbdc: 0x2463a5d0  addiu       $v1, $v1, -0x5A30
    ctx->pc = 0x19cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944208));
    // 0x19cbe0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19cbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cbe4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19cbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cbec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19cbf0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19cbf4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19cbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19cbf8: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CBF8u;
    SET_GPR_U32(ctx, 31, 0x19CC00u);
    ctx->pc = 0x19CBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CBF8u;
    // 0x19cbfc: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CBF8u, 0x19CC00u)) {
        return;
    }
    ctx->pc = 0x19CC00u;
label_19cc00:
    // 0x19cc00: 0xc080858  jal         func_202160
    ctx->pc = 0x19CC00u;
    SET_GPR_U32(ctx, 31, 0x19CC08u);
    ctx->pc = 0x19CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC00u;
    // 0x19cc04: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19CC00u, 0x19CC08u)) {
        return;
    }
    ctx->pc = 0x19CC08u;
label_19cc08:
    // 0x19cc08: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19cc0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19cc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc10: 0x2463a9e0  addiu       $v1, $v1, -0x5620
    ctx->pc = 0x19cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945248));
    // 0x19cc14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19cc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cc18: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19cc1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19cc24: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19cc28: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19cc2c: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CC2Cu;
    SET_GPR_U32(ctx, 31, 0x19CC34u);
    ctx->pc = 0x19CC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC2Cu;
    // 0x19cc30: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CC2Cu, 0x19CC34u)) {
        return;
    }
    ctx->pc = 0x19CC34u;
label_19cc34:
    // 0x19cc34: 0xc080858  jal         func_202160
    ctx->pc = 0x19CC34u;
    SET_GPR_U32(ctx, 31, 0x19CC3Cu);
    ctx->pc = 0x19CC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC34u;
    // 0x19cc38: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19CC34u, 0x19CC3Cu)) {
        return;
    }
    ctx->pc = 0x19CC3Cu;
label_19cc3c:
    // 0x19cc3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19cc40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19cc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc44: 0x2463a990  addiu       $v1, $v1, -0x5670
    ctx->pc = 0x19cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945168));
    // 0x19cc48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19cc48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cc4c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19cc50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc54: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19cc58: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19cc5c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19cc60: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CC60u;
    SET_GPR_U32(ctx, 31, 0x19CC68u);
    ctx->pc = 0x19CC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC60u;
    // 0x19cc64: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CC60u, 0x19CC68u)) {
        return;
    }
    ctx->pc = 0x19CC68u;
label_19cc68:
    // 0x19cc68: 0xc080858  jal         func_202160
    ctx->pc = 0x19CC68u;
    SET_GPR_U32(ctx, 31, 0x19CC70u);
    ctx->pc = 0x19CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC68u;
    // 0x19cc6c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19CC68u, 0x19CC70u)) {
        return;
    }
    ctx->pc = 0x19CC70u;
label_19cc70:
    // 0x19cc70: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19cc74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19cc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc78: 0x2463a6c0  addiu       $v1, $v1, -0x5940
    ctx->pc = 0x19cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944448));
    // 0x19cc7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19cc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cc80: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19cc84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc88: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19cc88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19cc8c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19cc90: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19cc94: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CC94u;
    SET_GPR_U32(ctx, 31, 0x19CC9Cu);
    ctx->pc = 0x19CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC94u;
    // 0x19cc98: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CC94u, 0x19CC9Cu)) {
        return;
    }
    ctx->pc = 0x19CC9Cu;
label_19cc9c:
    // 0x19cc9c: 0xc080858  jal         func_202160
    ctx->pc = 0x19CC9Cu;
    SET_GPR_U32(ctx, 31, 0x19CCA4u);
    ctx->pc = 0x19CCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC9Cu;
    // 0x19cca0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19CC9Cu, 0x19CCA4u)) {
        return;
    }
    ctx->pc = 0x19CCA4u;
label_19cca4:
    // 0x19cca4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19cca8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19cca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ccac: 0x2463a530  addiu       $v1, $v1, -0x5AD0
    ctx->pc = 0x19ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944048));
    // 0x19ccb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19ccb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ccb4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19ccb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ccb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ccbc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19ccc0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19ccc4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19ccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19ccc8: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CCC8u;
    SET_GPR_U32(ctx, 31, 0x19CCD0u);
    ctx->pc = 0x19CCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CCC8u;
    // 0x19cccc: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CCC8u, 0x19CCD0u)) {
        return;
    }
    ctx->pc = 0x19CCD0u;
label_19ccd0:
    // 0x19ccd0: 0xc080858  jal         func_202160
    ctx->pc = 0x19CCD0u;
    SET_GPR_U32(ctx, 31, 0x19CCD8u);
    ctx->pc = 0x19CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CCD0u;
    // 0x19ccd4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x19CCD0u, 0x19CCD8u)) {
        return;
    }
    ctx->pc = 0x19CCD8u;
label_19ccd8:
    // 0x19ccd8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19ccdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19ccdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cce0: 0x2463a580  addiu       $v1, $v1, -0x5A80
    ctx->pc = 0x19cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944128));
    // 0x19cce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cce8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19cce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19ccec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19ccecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ccf0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19ccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19ccf4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19ccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19ccf8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19ccfc: 0xc0802de  jal         func_200B78
    ctx->pc = 0x19CCFCu;
    SET_GPR_U32(ctx, 31, 0x19CD04u);
    ctx->pc = 0x19CD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CCFCu;
    // 0x19cd00: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x19CCFCu, 0x19CD04u)) {
        return;
    }
    ctx->pc = 0x19CD04u;
label_19cd04:
    // 0x19cd04: 0xc06763e  jal         func_19D8F8
    ctx->pc = 0x19CD04u;
    SET_GPR_U32(ctx, 31, 0x19CD0Cu);
    ctx->pc = 0x19CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD04u;
    // 0x19cd08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D8F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19D8F8u, 0x19CD04u, 0x19CD0Cu)) {
        return;
    }
    ctx->pc = 0x19CD0Cu;
label_19cd0c:
    // 0x19cd0c: 0xae308170  sw          $s0, -0x7E90($s1)
    ctx->pc = 0x19cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294934896), GPR_U32(ctx, 16));
    // 0x19cd10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19cd10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cd14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19cd14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cd18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19cd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cd1c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD1Cu;
        // 0x19cd20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD24u;
    // 0x19cd24: 0x0  nop
    ctx->pc = 0x19cd24u;
    // NOP
    ctx->pc = 0x19cd28u;
}
