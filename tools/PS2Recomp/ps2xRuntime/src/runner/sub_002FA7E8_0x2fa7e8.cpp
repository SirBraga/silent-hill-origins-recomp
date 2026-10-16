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

// Function: sub_002FA7E8
// Address: 0x2fa7e8 - 0x2fa9a8
void sub_002FA7E8_0x2fa7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA7E8_0x2fa7e8");
#endif

    switch (ctx->pc) {
        case 0x2fa858u: goto label_2fa858;
        case 0x2fa888u: goto label_2fa888;
        case 0x2fa8a4u: goto label_2fa8a4;
        case 0x2fa8acu: goto label_2fa8ac;
        case 0x2fa8f4u: goto label_2fa8f4;
        case 0x2fa91cu: goto label_2fa91c;
        case 0x2fa928u: goto label_2fa928;
        case 0x2fa958u: goto label_2fa958;
        case 0x2fa960u: goto label_2fa960;
        case 0x2fa984u: goto label_2fa984;
        case 0x2fa990u: goto label_2fa990;
        default: break;
    }

    ctx->pc = 0x2fa7e8u;

    // 0x2fa7e8: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x2fa7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2fa7ec: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2fa7ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2fa7f0: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x2fa7f0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fa7f4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2fa7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2fa7f8: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2fa7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2fa7fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fa7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa800: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x2fa800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x2fa804: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x2fa804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x2fa808: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2fa808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2fa80c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fa80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fa810: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2fa810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2fa814: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fa814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fa818: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2fa818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2fa81c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fa81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fa820: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA820u;
    {
        const bool branch_taken_0x2fa820 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa820) {
            ctx->pc = 0x2FA824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA820u;
            // 0x2fa824: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA828u;
            goto label_2fa828;
        }
    }
    ctx->pc = 0x2FA828u;
label_2fa828:
    // 0x2fa828: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fa828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fa82c: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x2fa82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x2fa830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fa830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa834: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2fa834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2fa838: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2fa838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fa83c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2fa83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2fa840: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2fa840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x2fa844: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2fa844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2fa848: 0x4012  mflo        $t0
    ctx->pc = 0x2fa848u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x2fa84c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2fa84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2fa850: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x2fa850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x2fa854: 0x0  nop
    ctx->pc = 0x2fa854u;
    // NOP
label_2fa858:
    // 0x2fa858: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fa858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fa85c: 0x0  nop
    ctx->pc = 0x2fa85cu;
    // NOP
    // 0x2fa860: 0x0  nop
    ctx->pc = 0x2fa860u;
    // NOP
    // 0x2fa864: 0x0  nop
    ctx->pc = 0x2fa864u;
    // NOP
    // 0x2fa868: 0x0  nop
    ctx->pc = 0x2fa868u;
    // NOP
    // 0x2fa86c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FA86Cu;
    {
        const bool branch_taken_0x2fa86c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2fa86c) {
            ctx->pc = 0x2FA858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fa858;
        }
    }
    ctx->pc = 0x2FA874u;
    // 0x2fa874: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fa874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fa878: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2fa878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fa87c: 0x24a5ae80  addiu       $a1, $a1, -0x5180
    ctx->pc = 0x2fa87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946432));
    // 0x2fa880: 0xc0c8410  jal         func_321040
    ctx->pc = 0x2FA880u;
    SET_GPR_U32(ctx, 31, 0x2FA888u);
    ctx->pc = 0x2FA884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA880u;
    // 0x2fa884: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321040u, 0x2FA880u, 0x2FA888u)) {
        return;
    }
    ctx->pc = 0x2FA888u;
label_2fa888:
    // 0x2fa888: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fa888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa88c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2fa88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fa890: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fa890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2fa894: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2fa894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fa898: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x2fa898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x2fa89c: 0xc0c87a4  jal         func_321E90
    ctx->pc = 0x2FA89Cu;
    SET_GPR_U32(ctx, 31, 0x2FA8A4u);
    ctx->pc = 0x2FA8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA89Cu;
    // 0x2fa8a0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321E90u, 0x2FA89Cu, 0x2FA8A4u)) {
        return;
    }
    ctx->pc = 0x2FA8A4u;
label_2fa8a4:
    // 0x2fa8a4: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2FA8A4u;
    SET_GPR_U32(ctx, 31, 0x2FA8ACu);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2FA8A4u, 0x2FA8ACu)) {
        return;
    }
    ctx->pc = 0x2FA8ACu;
label_2fa8ac:
    // 0x2fa8ac: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x2fa8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x2fa8b0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2fa8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2fa8b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fa8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fa8b8: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x2fa8b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x2fa8bc: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x2fa8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x2fa8c0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2fa8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2fa8c4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2fa8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2fa8c8: 0x34a5b020  ori         $a1, $a1, 0xB020
    ctx->pc = 0x2fa8c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45088);
    // 0x2fa8cc: 0x3403ffc0  ori         $v1, $zero, 0xFFC0
    ctx->pc = 0x2fa8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2fa8d0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2fa8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2fa8d4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2fa8d4u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3)); // MMIO: 0x1000b020
    // 0x2fa8d8: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x2fa8d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x2fa8dc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2fa8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2fa8e0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2fa8e0u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3)); // MMIO: 0x1000b000
    // 0x2fa8e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA8E4u;
    {
        const bool branch_taken_0x2fa8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA8E4u;
        // 0x2fa8e8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa8e4) {
            ctx->pc = 0x2FA8F8u;
            goto label_2fa8f8;
        }
    }
    ctx->pc = 0x2FA8ECu;
    // 0x2fa8ec: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2FA8ECu;
    SET_GPR_U32(ctx, 31, 0x2FA8F4u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2FA8ECu, 0x2FA8F4u)) {
        return;
    }
    ctx->pc = 0x2FA8F4u;
label_2fa8f4:
    // 0x2fa8f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fa8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2fa8f8:
    // 0x2fa8f8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2fa8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x2fa8fc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2fa8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2fa900: 0x346303ff  ori         $v1, $v1, 0x3FF
    ctx->pc = 0x2fa900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1023);
    // 0x2fa904: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2fa904u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x2fa908: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2fa908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fa90c: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x2fa90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x2fa910: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fa910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa914: 0xc0be66a  jal         func_2F99A8
    ctx->pc = 0x2FA914u;
    SET_GPR_U32(ctx, 31, 0x2FA91Cu);
    ctx->pc = 0x2FA918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA914u;
    // 0x2fa918: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F99A8u, 0x2FA914u, 0x2FA91Cu)) {
        return;
    }
    ctx->pc = 0x2FA91Cu;
label_2fa91c:
    // 0x2fa91c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2fa91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2fa920: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2fa920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fa924: 0x0  nop
    ctx->pc = 0x2fa924u;
    // NOP
label_2fa928:
    // 0x2fa928: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2fa928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa92c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2fa92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fa930: 0x0  nop
    ctx->pc = 0x2fa930u;
    // NOP
    // 0x2fa934: 0x0  nop
    ctx->pc = 0x2fa934u;
    // NOP
    // 0x2fa938: 0x0  nop
    ctx->pc = 0x2fa938u;
    // NOP
    // 0x2fa93c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FA93Cu;
    {
        const bool branch_taken_0x2fa93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa93c) {
            ctx->pc = 0x2FA928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fa928;
        }
    }
    ctx->pc = 0x2FA944u;
    // 0x2fa944: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA944u;
    {
        const bool branch_taken_0x2fa944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA944u;
        // 0x2fa948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa944) {
            ctx->pc = 0x2FA958u;
            goto label_2fa958;
        }
    }
    ctx->pc = 0x2FA94Cu;
    // 0x2fa94c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2fa94cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2fa950: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x2FA950u;
    SET_GPR_U32(ctx, 31, 0x2FA958u);
    ctx->pc = 0x2FA954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA950u;
    // 0x2fa954: 0x24a50728  addiu       $a1, $a1, 0x728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x2FA950u, 0x2FA958u)) {
        return;
    }
    ctx->pc = 0x2FA958u;
label_2fa958:
    // 0x2fa958: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fa958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fa95c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2fa95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_2fa960:
    // 0x2fa960: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fa960u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x2fa964: 0x0  nop
    ctx->pc = 0x2fa964u;
    // NOP
    // 0x2fa968: 0x0  nop
    ctx->pc = 0x2fa968u;
    // NOP
    // 0x2fa96c: 0x0  nop
    ctx->pc = 0x2fa96cu;
    // NOP
    // 0x2fa970: 0x0  nop
    ctx->pc = 0x2fa970u;
    // NOP
    // 0x2fa974: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FA974u;
    {
        const bool branch_taken_0x2fa974 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2fa974) {
            ctx->pc = 0x2FA960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fa960;
        }
    }
    ctx->pc = 0x2FA97Cu;
    // 0x2fa97c: 0xc0c878a  jal         func_321E28
    ctx->pc = 0x2FA97Cu;
    SET_GPR_U32(ctx, 31, 0x2FA984u);
    ctx->pc = 0x2FA980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA97Cu;
    // 0x2fa980: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321E28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321E28u, 0x2FA97Cu, 0x2FA984u)) {
        return;
    }
    ctx->pc = 0x2FA984u;
label_2fa984:
    // 0x2fa984: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fa984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa988: 0xc0c8414  jal         func_321050
    ctx->pc = 0x2FA988u;
    SET_GPR_U32(ctx, 31, 0x2FA990u);
    ctx->pc = 0x2FA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA988u;
    // 0x2fa98c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321050u, 0x2FA988u, 0x2FA990u)) {
        return;
    }
    ctx->pc = 0x2FA990u;
label_2fa990:
    // 0x2fa990: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2fa990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fa994: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2fa994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fa998: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2fa998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fa99c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2fa99cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fa9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA9A0u;
        // 0x2fa9a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA9A8u;
}
