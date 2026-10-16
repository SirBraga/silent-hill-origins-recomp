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

// Function: sub_001F4510
// Address: 0x1f4510 - 0x1f46d8
void sub_001F4510_0x1f4510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4510_0x1f4510");
#endif

    switch (ctx->pc) {
        case 0x1f45c4u: goto label_1f45c4;
        case 0x1f45f0u: goto label_1f45f0;
        case 0x1f4624u: goto label_1f4624;
        case 0x1f4640u: goto label_1f4640;
        case 0x1f466cu: goto label_1f466c;
        case 0x1f4698u: goto label_1f4698;
        case 0x1f46a8u: goto label_1f46a8;
        default: break;
    }

    ctx->pc = 0x1f4510u;

label_1f4510:
    // 0x1f4510: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f4510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f4514: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1f4514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4518: 0x9493a  dsrl        $t1, $t1, 4
    ctx->pc = 0x1f4518u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 4);
    // 0x1f451c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1f451cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1f4520: 0x340af000  ori         $t2, $zero, 0xF000
    ctx->pc = 0x1f4520u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1f4524: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1f4524u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1f4528: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1f4528u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1f452c: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1f452cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1f4530: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1f4530u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1f4534: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1f4534u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1f4538: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1f4538u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1f453c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1f453cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1f4540: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1f4540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1f4544: 0x2411fffc  addiu       $s1, $zero, -0x4
    ctx->pc = 0x1f4544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1f4548: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1f4548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1f454c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f454cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4550: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f4550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f4554: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f4554u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4558: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1f4558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1f455c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f455cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4560: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f4560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f4564: 0x30f5ffff  andi        $s5, $a3, 0xFFFF
    ctx->pc = 0x1f4564u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1f4568: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f4568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f456c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1f456cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f4570: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1f4570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1f4574: 0x9e840014  lwu         $a0, 0x14($s4)
    ctx->pc = 0x1f4574u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1f4578: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f4578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1f457c: 0x4273c  dsll32      $a0, $a0, 28
    ctx->pc = 0x1f457cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 28));
    // 0x1f4580: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x1f4580u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4584: 0x9683001c  lhu         $v1, 0x1C($s4)
    ctx->pc = 0x1f4584u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1f4588: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1f4588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1f458c: 0x9e880000  lwu         $t0, 0x0($s4)
    ctx->pc = 0x1f458cu;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f4590: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f4590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f4594: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1f4594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1f4598: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f4598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1f459c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x1f459cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x1f45a0: 0xa7a30004  sh          $v1, 0x4($sp)
    ctx->pc = 0x1f45a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f45a4: 0x31080fff  andi        $t0, $t0, 0xFFF
    ctx->pc = 0x1f45a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4095);
    // 0x1f45a8: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x1f45a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1f45ac: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x1f45acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f45b0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f45b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f45b4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1f45b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1f45b8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1f45b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1f45bc: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x1F45BCu;
    SET_GPR_U32(ctx, 31, 0x1F45C4u);
    ctx->pc = 0x1F45C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F45BCu;
    // 0x1f45c0: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1F45BCu, 0x1F45C4u)) {
        return;
    }
    ctx->pc = 0x1F45C4u;
label_1f45c4:
    // 0x1f45c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f45c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f45c8: 0x97b00004  lhu         $s0, 0x4($sp)
    ctx->pc = 0x1f45c8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f45cc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1f45ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1f45d0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1f45d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1f45d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f45d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f45dc: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1f45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1f45e0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1f45e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1f45e4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f45e8: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x1F45E8u;
    SET_GPR_U32(ctx, 31, 0x1F45F0u);
    ctx->pc = 0x1F45ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F45E8u;
    // 0x1f45ec: 0x8e850018  lw          $a1, 0x18($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1F45E8u, 0x1F45F0u)) {
        return;
    }
    ctx->pc = 0x1F45F0u;
label_1f45f0:
    // 0x1f45f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f45f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f45f4: 0x32a40001  andi        $a0, $s5, 0x1
    ctx->pc = 0x1f45f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x1f45f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1f45f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1f45fc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1f45fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1f4600: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f4600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f4604: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1f4604u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f4608: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F4608u;
    {
        const bool branch_taken_0x1f4608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4608u;
        // 0x1f460c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4608) {
            ctx->pc = 0x1F4684u;
            goto label_1f4684;
        }
    }
    ctx->pc = 0x1F4610u;
    // 0x1f4610: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1f4610u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x1f4614: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1f4614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1f4618: 0x26102800  addiu       $s0, $s0, 0x2800
    ctx->pc = 0x1f4618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10240));
    // 0x1f461c: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x1F461Cu;
    SET_GPR_U32(ctx, 31, 0x1F4624u);
    ctx->pc = 0x1F4620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F461Cu;
    // 0x1f4620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1F461Cu, 0x1F4624u)) {
        return;
    }
    ctx->pc = 0x1F4624u;
label_1f4624:
    // 0x1f4624: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f4624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1f4628: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f4628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f462c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1f462cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1f4630: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1f4630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f4634: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f4634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1f4638: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x1F4638u;
    SET_GPR_U32(ctx, 31, 0x1F4640u);
    ctx->pc = 0x1F463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4638u;
    // 0x1f463c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1F4638u, 0x1F4640u)) {
        return;
    }
    ctx->pc = 0x1F4640u;
label_1f4640:
    // 0x1f4640: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f4640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4644: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4648: 0x8fb10010  lw          $s1, 0x10($sp)
    ctx->pc = 0x1f4648u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f464c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1f464cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f4650: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1f4650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1f4654: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f4654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4658: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f4658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f465c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1f465cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1f4660: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1f4660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1f4664: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x1F4664u;
    SET_GPR_U32(ctx, 31, 0x1F466Cu);
    ctx->pc = 0x1F4668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4664u;
    // 0x1f4668: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1F4664u, 0x1F466Cu)) {
        return;
    }
    ctx->pc = 0x1F466Cu;
label_1f466c:
    // 0x1f466c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f466cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4670: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f4670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f4674: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1f4674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1f4678: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f4678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f467c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1f467cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f4680: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1f4680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1f4684:
    // 0x1f4684: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x1f4684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1f4688: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F4688u;
    {
        const bool branch_taken_0x1f4688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4688) {
            ctx->pc = 0x1F468Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4688u;
            // 0x1f468c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F46B8u;
            goto label_1f46b8;
        }
    }
    ctx->pc = 0x1F4690u;
    // 0x1f4690: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f4690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f4694: 0x0  nop
    ctx->pc = 0x1f4694u;
    // NOP
label_1f4698:
    // 0x1f4698: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f4698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f469c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f469cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f46a0: 0xc07d144  jal         func_1F4510
    ctx->pc = 0x1F46A0u;
    SET_GPR_U32(ctx, 31, 0x1F46A8u);
    ctx->pc = 0x1F46A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F46A0u;
    // 0x1f46a4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4510u;
    goto label_1f4510;
    ctx->pc = 0x1F46A8u;
label_1f46a8:
    // 0x1f46a8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1f46a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f46ac: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F46ACu;
    {
        const bool branch_taken_0x1f46ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f46ac) {
            ctx->pc = 0x1F46B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F46ACu;
            // 0x1f46b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4698;
        }
    }
    ctx->pc = 0x1F46B4u;
    // 0x1f46b4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1f46b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f46b8:
    // 0x1f46b8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1f46b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f46bc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1f46bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f46c0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1f46c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f46c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f46c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f46c8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1f46c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f46cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f46ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f46d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F46D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F46D0u;
        // 0x1f46d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F46D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F46D8u;
}
