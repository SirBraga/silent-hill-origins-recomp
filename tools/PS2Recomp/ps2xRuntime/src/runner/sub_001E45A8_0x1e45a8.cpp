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

// Function: sub_001E45A8
// Address: 0x1e45a8 - 0x1e4778
void sub_001E45A8_0x1e45a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E45A8_0x1e45a8");
#endif

    switch (ctx->pc) {
        case 0x1e45d0u: goto label_1e45d0;
        case 0x1e45e0u: goto label_1e45e0;
        case 0x1e45f0u: goto label_1e45f0;
        case 0x1e45fcu: goto label_1e45fc;
        case 0x1e4614u: goto label_1e4614;
        case 0x1e462cu: goto label_1e462c;
        case 0x1e4660u: goto label_1e4660;
        case 0x1e4670u: goto label_1e4670;
        case 0x1e469cu: goto label_1e469c;
        case 0x1e46a8u: goto label_1e46a8;
        case 0x1e46b4u: goto label_1e46b4;
        case 0x1e46c8u: goto label_1e46c8;
        case 0x1e46d8u: goto label_1e46d8;
        case 0x1e46e4u: goto label_1e46e4;
        case 0x1e46f4u: goto label_1e46f4;
        case 0x1e470cu: goto label_1e470c;
        case 0x1e471cu: goto label_1e471c;
        case 0x1e472cu: goto label_1e472c;
        case 0x1e473cu: goto label_1e473c;
        case 0x1e4748u: goto label_1e4748;
        case 0x1e4750u: goto label_1e4750;
        default: break;
    }

    ctx->pc = 0x1e45a8u;

    // 0x1e45a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e45a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e45ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e45acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e45b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e45b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1e45b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e45b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e45b8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e45b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1e45bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e45bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e45c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e45c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1e45c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e45c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e45c8: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x1E45C8u;
    SET_GPR_U32(ctx, 31, 0x1E45D0u);
    ctx->pc = 0x1E45CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E45C8u;
    // 0x1e45cc: 0x3c13006b  lui         $s3, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x1E45C8u, 0x1E45D0u)) {
        return;
    }
    ctx->pc = 0x1E45D0u;
label_1e45d0:
    // 0x1e45d0: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x1e45d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1e45d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e45d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e45d8: 0xc091de2  jal         func_247788
    ctx->pc = 0x1E45D8u;
    SET_GPR_U32(ctx, 31, 0x1E45E0u);
    ctx->pc = 0x1E45DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E45D8u;
    // 0x1e45dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247788u, 0x1E45D8u, 0x1E45E0u)) {
        return;
    }
    ctx->pc = 0x1E45E0u;
label_1e45e0:
    // 0x1e45e0: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x1e45e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e45e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e45e8: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E45E8u;
    SET_GPR_U32(ctx, 31, 0x1E45F0u);
    ctx->pc = 0x1E45ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E45E8u;
    // 0x1e45ec: 0x8e12000c  lw          $s2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E45E8u, 0x1E45F0u)) {
        return;
    }
    ctx->pc = 0x1E45F0u;
label_1e45f0:
    // 0x1e45f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e45f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e45f4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E45F4u;
    SET_GPR_U32(ctx, 31, 0x1E45FCu);
    ctx->pc = 0x1E45F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E45F4u;
    // 0x1e45f8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E45F4u, 0x1E45FCu)) {
        return;
    }
    ctx->pc = 0x1E45FCu;
label_1e45fc:
    // 0x1e45fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e45fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4600: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1e4600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1e4604: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e4604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e4608: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e4608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e460c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E460Cu;
    SET_GPR_U32(ctx, 31, 0x1E4614u);
    ctx->pc = 0x1E4610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E460Cu;
    // 0x1e4610: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E460Cu, 0x1E4614u)) {
        return;
    }
    ctx->pc = 0x1E4614u;
label_1e4614:
    // 0x1e4614: 0xde6234c0  ld          $v0, 0x34C0($s3)
    ctx->pc = 0x1e4614u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 13504)));
    // 0x1e4618: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e4618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e461c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x1e461cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x1e4620: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1e4620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1e4624: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4624u;
    SET_GPR_U32(ctx, 31, 0x1E462Cu);
    ctx->pc = 0x1E4628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4624u;
    // 0x1e4628: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4624u, 0x1E462Cu)) {
        return;
    }
    ctx->pc = 0x1E462Cu;
label_1e462c:
    // 0x1e462c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1e462cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e4630: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1e4630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1e4634: 0x51382  srl         $v0, $a1, 14
    ctx->pc = 0x1e4634u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 14));
    // 0x1e4638: 0x51d02  srl         $v1, $a1, 20
    ctx->pc = 0x1e4638u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 20));
    // 0x1e463c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1e463cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1e4640: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x1e4640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x1e4644: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e4644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e4648: 0x52942  srl         $a1, $a1, 5
    ctx->pc = 0x1e4648u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x1e464c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1e464cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1e4650: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1e4650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1e4654: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1e4654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1e4658: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4658u;
    SET_GPR_U32(ctx, 31, 0x1E4660u);
    ctx->pc = 0x1E465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4658u;
    // 0x1e465c: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4658u, 0x1E4660u)) {
        return;
    }
    ctx->pc = 0x1E4660u;
label_1e4660:
    // 0x1e4660: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e4660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e4664: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e4664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e4668: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4668u;
    SET_GPR_U32(ctx, 31, 0x1E4670u);
    ctx->pc = 0x1E466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4668u;
    // 0x1e466c: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4668u, 0x1E4670u)) {
        return;
    }
    ctx->pc = 0x1E4670u;
label_1e4670:
    // 0x1e4670: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e4670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e4674: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x1e4674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x1e4678: 0xdc4534c8  ld          $a1, 0x34C8($v0)
    ctx->pc = 0x1e4678u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B34C8u));
    // 0x1e467c: 0x34039900  ori         $v1, $zero, 0x9900
    ctx->pc = 0x1e467cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39168);
    // 0x1e4680: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x1e4680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x1e4684: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e4684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e4688: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x1e4688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x1e468c: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x1e468cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x1e4690: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1e4690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1e4694: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4694u;
    SET_GPR_U32(ctx, 31, 0x1E469Cu);
    ctx->pc = 0x1E4698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4694u;
    // 0x1e4698: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4694u, 0x1E469Cu)) {
        return;
    }
    ctx->pc = 0x1E469Cu;
label_1e469c:
    // 0x1e469c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e469cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e46a0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E46A0u;
    SET_GPR_U32(ctx, 31, 0x1E46A8u);
    ctx->pc = 0x1E46A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E46A0u;
    // 0x1e46a4: 0x24050261  addiu       $a1, $zero, 0x261 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E46A0u, 0x1E46A8u)) {
        return;
    }
    ctx->pc = 0x1E46A8u;
label_1e46a8:
    // 0x1e46a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e46a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e46ac: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E46ACu;
    SET_GPR_U32(ctx, 31, 0x1E46B4u);
    ctx->pc = 0x1E46B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E46ACu;
    // 0x1e46b0: 0x24050116  addiu       $a1, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E46ACu, 0x1E46B4u)) {
        return;
    }
    ctx->pc = 0x1E46B4u;
label_1e46b4:
    // 0x1e46b4: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x1e46b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1e46b8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e46b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e46bc: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1e46bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1e46c0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E46C0u;
    SET_GPR_U32(ctx, 31, 0x1E46C8u);
    ctx->pc = 0x1E46C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E46C0u;
    // 0x1e46c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E46C0u, 0x1E46C8u)) {
        return;
    }
    ctx->pc = 0x1E46C8u;
label_1e46c8:
    // 0x1e46c8: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1e46c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1e46cc: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x1e46ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x1e46d0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E46D0u;
    SET_GPR_U32(ctx, 31, 0x1E46D8u);
    ctx->pc = 0x1E46D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E46D0u;
    // 0x1e46d4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E46D0u, 0x1E46D8u)) {
        return;
    }
    ctx->pc = 0x1E46D8u;
label_1e46d8:
    // 0x1e46d8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e46d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e46dc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E46DCu;
    SET_GPR_U32(ctx, 31, 0x1E46E4u);
    ctx->pc = 0x1E46E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E46DCu;
    // 0x1e46e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E46DCu, 0x1E46E4u)) {
        return;
    }
    ctx->pc = 0x1E46E4u;
label_1e46e4:
    // 0x1e46e4: 0x3c051c08  lui         $a1, 0x1C08
    ctx->pc = 0x1e46e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7176 << 16));
    // 0x1e46e8: 0x34a52008  ori         $a1, $a1, 0x2008
    ctx->pc = 0x1e46e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8200);
    // 0x1e46ec: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E46ECu;
    SET_GPR_U32(ctx, 31, 0x1E46F4u);
    ctx->pc = 0x1E46F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E46ECu;
    // 0x1e46f0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E46ECu, 0x1E46F4u)) {
        return;
    }
    ctx->pc = 0x1E46F4u;
label_1e46f4:
    // 0x1e46f4: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x1e46f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1e46f8: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x1e46f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1e46fc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e46fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e4700: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x1e4700u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x1e4704: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4704u;
    SET_GPR_U32(ctx, 31, 0x1E470Cu);
    ctx->pc = 0x1E4708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4704u;
    // 0x1e4708: 0x2512825  or          $a1, $s2, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4704u, 0x1E470Cu)) {
        return;
    }
    ctx->pc = 0x1E470Cu;
label_1e470c:
    // 0x1e470c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e470cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e4710: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1e4710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e4714: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4714u;
    SET_GPR_U32(ctx, 31, 0x1E471Cu);
    ctx->pc = 0x1E4718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4714u;
    // 0x1e4718: 0xdc4534d8  ld          $a1, 0x34D8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4714u, 0x1E471Cu)) {
        return;
    }
    ctx->pc = 0x1E471Cu;
label_1e471c:
    // 0x1e471c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e471cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e4720: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e4720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e4724: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4724u;
    SET_GPR_U32(ctx, 31, 0x1E472Cu);
    ctx->pc = 0x1E4728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4724u;
    // 0x1e4728: 0xdc453500  ld          $a1, 0x3500($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4724u, 0x1E472Cu)) {
        return;
    }
    ctx->pc = 0x1E472Cu;
label_1e472c:
    // 0x1e472c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e472cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e4730: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e4730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e4734: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4734u;
    SET_GPR_U32(ctx, 31, 0x1E473Cu);
    ctx->pc = 0x1E4738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4734u;
    // 0x1e4738: 0xdc4534e0  ld          $a1, 0x34E0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4734u, 0x1E473Cu)) {
        return;
    }
    ctx->pc = 0x1E473Cu;
label_1e473c:
    // 0x1e473c: 0xde6534c0  ld          $a1, 0x34C0($s3)
    ctx->pc = 0x1e473cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 13504)));
    // 0x1e4740: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4740u;
    SET_GPR_U32(ctx, 31, 0x1E4748u);
    ctx->pc = 0x1E4744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4740u;
    // 0x1e4744: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4740u, 0x1E4748u)) {
        return;
    }
    ctx->pc = 0x1E4748u;
label_1e4748:
    // 0x1e4748: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E4748u;
    SET_GPR_U32(ctx, 31, 0x1E4750u);
    ctx->pc = 0x1E474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4748u;
    // 0x1e474c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E4748u, 0x1E4750u)) {
        return;
    }
    ctx->pc = 0x1E4750u;
label_1e4750:
    // 0x1e4750: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e4750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4754: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e4754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4758: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e4758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e475c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1e475cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4764: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4764u;
        // 0x1e4768: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E476Cu;
    // 0x1e476c: 0x0  nop
    ctx->pc = 0x1e476cu;
    // NOP
    // 0x1e4770: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e4770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e4774: 0x0  nop
    ctx->pc = 0x1e4774u;
    // NOP
    ctx->pc = 0x1e4778u;
}
