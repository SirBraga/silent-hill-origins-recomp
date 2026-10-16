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

// Function: sub_0016C978
// Address: 0x16c978 - 0x16cae8
void sub_0016C978_0x16c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C978_0x16c978");
#endif

    switch (ctx->pc) {
        case 0x16c9dcu: goto label_16c9dc;
        case 0x16c9e8u: goto label_16c9e8;
        case 0x16c9f4u: goto label_16c9f4;
        case 0x16c9fcu: goto label_16c9fc;
        case 0x16ca08u: goto label_16ca08;
        case 0x16ca10u: goto label_16ca10;
        case 0x16ca1cu: goto label_16ca1c;
        case 0x16ca24u: goto label_16ca24;
        case 0x16ca28u: goto label_16ca28;
        case 0x16ca34u: goto label_16ca34;
        case 0x16ca54u: goto label_16ca54;
        case 0x16ca64u: goto label_16ca64;
        case 0x16ca70u: goto label_16ca70;
        case 0x16ca88u: goto label_16ca88;
        case 0x16ca94u: goto label_16ca94;
        case 0x16caacu: goto label_16caac;
        case 0x16cab8u: goto label_16cab8;
        default: break;
    }

    ctx->pc = 0x16c978u;

    // 0x16c978: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16c978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16c97c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16c980: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x16c980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x16c984: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16c984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16c988: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x16c988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x16c98c: 0x24424c20  addiu       $v0, $v0, 0x4C20
    ctx->pc = 0x16c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19488));
    // 0x16c990: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x16c990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x16c994: 0x24634bd8  addiu       $v1, $v1, 0x4BD8
    ctx->pc = 0x16c994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19416));
    // 0x16c998: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x16c998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x16c99c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16c99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16c9a0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x16c9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x16c9a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16c9a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c9a8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x16c9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x16c9ac: 0x26900038  addiu       $s0, $s4, 0x38
    ctx->pc = 0x16c9acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x16c9b0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x16c9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x16c9b4: 0x26910044  addiu       $s1, $s4, 0x44
    ctx->pc = 0x16c9b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
    // 0x16c9b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c9bc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x16c9bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c9c0: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x16c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x16c9c4: 0x269200b8  addiu       $s2, $s4, 0xB8
    ctx->pc = 0x16c9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 184));
    // 0x16c9c8: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x16c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x16c9cc: 0x269300c0  addiu       $s3, $s4, 0xC0
    ctx->pc = 0x16c9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x16c9d0: 0xae830034  sw          $v1, 0x34($s4)
    ctx->pc = 0x16c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
    // 0x16c9d4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x16C9D4u;
    SET_GPR_U32(ctx, 31, 0x16C9DCu);
    ctx->pc = 0x16C9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9D4u;
    // 0x16c9d8: 0x2695004c  addiu       $s5, $s4, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x16C9D4u, 0x16C9DCu)) {
        return;
    }
    ctx->pc = 0x16C9DCu;
label_16c9dc:
    // 0x16c9dc: 0x24160009  addiu       $s6, $zero, 0x9
    ctx->pc = 0x16c9dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16c9e0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x16C9E0u;
    SET_GPR_U32(ctx, 31, 0x16C9E8u);
    ctx->pc = 0x16C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9E0u;
    // 0x16c9e4: 0x8e8400d0  lw          $a0, 0xD0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x16C9E0u, 0x16C9E8u)) {
        return;
    }
    ctx->pc = 0x16C9E8u;
label_16c9e8:
    // 0x16c9e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16c9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c9ec: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16C9ECu;
    SET_GPR_U32(ctx, 31, 0x16C9F4u);
    ctx->pc = 0x16C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9ECu;
    // 0x16c9f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16C9ECu, 0x16C9F4u)) {
        return;
    }
    ctx->pc = 0x16C9F4u;
label_16c9f4:
    // 0x16c9f4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16C9F4u;
    SET_GPR_U32(ctx, 31, 0x16C9FCu);
    ctx->pc = 0x16C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9F4u;
    // 0x16c9f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16C9F4u, 0x16C9FCu)) {
        return;
    }
    ctx->pc = 0x16C9FCu;
label_16c9fc:
    // 0x16c9fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16c9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ca00: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16CA00u;
    SET_GPR_U32(ctx, 31, 0x16CA08u);
    ctx->pc = 0x16CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA00u;
    // 0x16ca04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16CA00u, 0x16CA08u)) {
        return;
    }
    ctx->pc = 0x16CA08u;
label_16ca08:
    // 0x16ca08: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16CA08u;
    SET_GPR_U32(ctx, 31, 0x16CA10u);
    ctx->pc = 0x16CA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA08u;
    // 0x16ca0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16CA08u, 0x16CA10u)) {
        return;
    }
    ctx->pc = 0x16CA10u;
label_16ca10:
    // 0x16ca10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ca10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ca14: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16CA14u;
    SET_GPR_U32(ctx, 31, 0x16CA1Cu);
    ctx->pc = 0x16CA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA14u;
    // 0x16ca18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16CA14u, 0x16CA1Cu)) {
        return;
    }
    ctx->pc = 0x16CA1Cu;
label_16ca1c:
    // 0x16ca1c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16CA1Cu;
    SET_GPR_U32(ctx, 31, 0x16CA24u);
    ctx->pc = 0x16CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA1Cu;
    // 0x16ca20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16CA1Cu, 0x16CA24u)) {
        return;
    }
    ctx->pc = 0x16CA24u;
label_16ca24:
    // 0x16ca24: 0x0  nop
    ctx->pc = 0x16ca24u;
    // NOP
label_16ca28:
    // 0x16ca28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16ca28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ca2c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16CA2Cu;
    SET_GPR_U32(ctx, 31, 0x16CA34u);
    ctx->pc = 0x16CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA2Cu;
    // 0x16ca30: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16CA2Cu, 0x16CA34u)) {
        return;
    }
    ctx->pc = 0x16CA34u;
label_16ca34:
    // 0x16ca34: 0x0  nop
    ctx->pc = 0x16ca34u;
    // NOP
    // 0x16ca38: 0x6c1fffb  bgez        $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x16CA38u;
    {
        const bool branch_taken_0x16ca38 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x16CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA38u;
        // 0x16ca3c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca38) {
            ctx->pc = 0x16CA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ca28;
        }
    }
    ctx->pc = 0x16CA40u;
    // 0x16ca40: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16ca44: 0x26840038  addiu       $a0, $s4, 0x38
    ctx->pc = 0x16ca44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x16ca48: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x16ca48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x16ca4c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16CA4Cu;
    SET_GPR_U32(ctx, 31, 0x16CA54u);
    ctx->pc = 0x16CA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA4Cu;
    // 0x16ca50: 0x26920044  addiu       $s2, $s4, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16CA4Cu, 0x16CA54u)) {
        return;
    }
    ctx->pc = 0x16CA54u;
label_16ca54:
    // 0x16ca54: 0x2691004c  addiu       $s1, $s4, 0x4C
    ctx->pc = 0x16ca54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
    // 0x16ca58: 0x268400c0  addiu       $a0, $s4, 0xC0
    ctx->pc = 0x16ca58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x16ca5c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16CA5Cu;
    SET_GPR_U32(ctx, 31, 0x16CA64u);
    ctx->pc = 0x16CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA5Cu;
    // 0x16ca60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16CA5Cu, 0x16CA64u)) {
        return;
    }
    ctx->pc = 0x16CA64u;
label_16ca64:
    // 0x16ca64: 0x268400b8  addiu       $a0, $s4, 0xB8
    ctx->pc = 0x16ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 184));
    // 0x16ca68: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16CA68u;
    SET_GPR_U32(ctx, 31, 0x16CA70u);
    ctx->pc = 0x16CA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA68u;
    // 0x16ca6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16CA68u, 0x16CA70u)) {
        return;
    }
    ctx->pc = 0x16CA70u;
label_16ca70:
    // 0x16ca70: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x16CA70u;
    {
        const bool branch_taken_0x16ca70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA70u;
        // 0x16ca74: 0x2690009c  addiu       $s0, $s4, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca70) {
            ctx->pc = 0x16CAA0u;
            goto label_16caa0;
        }
    }
    ctx->pc = 0x16CA78u;
    // 0x16ca78: 0x1230000a  beq         $s1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x16CA78u;
    {
        const bool branch_taken_0x16ca78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x16CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA78u;
        // 0x16ca7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca78) {
            ctx->pc = 0x16CAA4u;
            goto label_16caa4;
        }
    }
    ctx->pc = 0x16CA80u;
    // 0x16ca80: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x16ca80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x16ca84: 0x0  nop
    ctx->pc = 0x16ca84u;
    // NOP
label_16ca88:
    // 0x16ca88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ca88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ca8c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16CA8Cu;
    SET_GPR_U32(ctx, 31, 0x16CA94u);
    ctx->pc = 0x16CA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA8Cu;
    // 0x16ca90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16CA8Cu, 0x16CA94u)) {
        return;
    }
    ctx->pc = 0x16CA94u;
label_16ca94:
    // 0x16ca94: 0x0  nop
    ctx->pc = 0x16ca94u;
    // NOP
    // 0x16ca98: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x16CA98u;
    {
        const bool branch_taken_0x16ca98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x16CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA98u;
        // 0x16ca9c: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca98) {
            ctx->pc = 0x16CA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ca88;
        }
    }
    ctx->pc = 0x16CAA0u;
label_16caa0:
    // 0x16caa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16caa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16caa4:
    // 0x16caa4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16CAA4u;
    SET_GPR_U32(ctx, 31, 0x16CAACu);
    ctx->pc = 0x16CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CAA4u;
    // 0x16caa8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16CAA4u, 0x16CAACu)) {
        return;
    }
    ctx->pc = 0x16CAACu;
label_16caac:
    // 0x16caac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16caacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cab0: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16CAB0u;
    SET_GPR_U32(ctx, 31, 0x16CAB8u);
    ctx->pc = 0x16CAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CAB0u;
    // 0x16cab4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16CAB0u, 0x16CAB8u)) {
        return;
    }
    ctx->pc = 0x16CAB8u;
label_16cab8:
    // 0x16cab8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x16cab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16cabc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x16cabcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16cac0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x16cac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16cac4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x16cac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16cac8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16cac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16cacc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x16caccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cad0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x16cad0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16cad4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x16cad4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16cad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cadc: 0x3e00008  jr          $ra
    ctx->pc = 0x16CADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CADCu;
        // 0x16cae0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CAE4u;
    // 0x16cae4: 0x0  nop
    ctx->pc = 0x16cae4u;
    // NOP
    ctx->pc = 0x16cae8u;
}
