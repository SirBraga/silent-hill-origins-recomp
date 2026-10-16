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

// Function: sub_0028ACE8
// Address: 0x28ace8 - 0x28af48
void sub_0028ACE8_0x28ace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ACE8_0x28ace8");
#endif

    switch (ctx->pc) {
        case 0x28ace8u: goto label_28ace8;
        case 0x28acecu: goto label_28acec;
        case 0x28acf0u: goto label_28acf0;
        case 0x28acf4u: goto label_28acf4;
        case 0x28acf8u: goto label_28acf8;
        case 0x28acfcu: goto label_28acfc;
        case 0x28ad00u: goto label_28ad00;
        case 0x28ad04u: goto label_28ad04;
        case 0x28ad08u: goto label_28ad08;
        case 0x28ad0cu: goto label_28ad0c;
        case 0x28ad10u: goto label_28ad10;
        case 0x28ad14u: goto label_28ad14;
        case 0x28ad18u: goto label_28ad18;
        case 0x28ad1cu: goto label_28ad1c;
        case 0x28ad20u: goto label_28ad20;
        case 0x28ad24u: goto label_28ad24;
        case 0x28ad28u: goto label_28ad28;
        case 0x28ad2cu: goto label_28ad2c;
        case 0x28ad30u: goto label_28ad30;
        case 0x28ad34u: goto label_28ad34;
        case 0x28ad38u: goto label_28ad38;
        case 0x28ad3cu: goto label_28ad3c;
        case 0x28ad40u: goto label_28ad40;
        case 0x28ad44u: goto label_28ad44;
        case 0x28ad48u: goto label_28ad48;
        case 0x28ad4cu: goto label_28ad4c;
        case 0x28ad50u: goto label_28ad50;
        case 0x28ad54u: goto label_28ad54;
        case 0x28ad58u: goto label_28ad58;
        case 0x28ad5cu: goto label_28ad5c;
        case 0x28ad60u: goto label_28ad60;
        case 0x28ad64u: goto label_28ad64;
        case 0x28ad68u: goto label_28ad68;
        case 0x28ad6cu: goto label_28ad6c;
        case 0x28ad70u: goto label_28ad70;
        case 0x28ad74u: goto label_28ad74;
        case 0x28ad78u: goto label_28ad78;
        case 0x28ad7cu: goto label_28ad7c;
        case 0x28ad80u: goto label_28ad80;
        case 0x28ad84u: goto label_28ad84;
        case 0x28ad88u: goto label_28ad88;
        case 0x28ad8cu: goto label_28ad8c;
        case 0x28ad90u: goto label_28ad90;
        case 0x28ad94u: goto label_28ad94;
        case 0x28ad98u: goto label_28ad98;
        case 0x28ad9cu: goto label_28ad9c;
        case 0x28ada0u: goto label_28ada0;
        case 0x28ada4u: goto label_28ada4;
        case 0x28ada8u: goto label_28ada8;
        case 0x28adacu: goto label_28adac;
        case 0x28adb0u: goto label_28adb0;
        case 0x28adb4u: goto label_28adb4;
        case 0x28adb8u: goto label_28adb8;
        case 0x28adbcu: goto label_28adbc;
        case 0x28adc0u: goto label_28adc0;
        case 0x28adc4u: goto label_28adc4;
        case 0x28adc8u: goto label_28adc8;
        case 0x28adccu: goto label_28adcc;
        case 0x28add0u: goto label_28add0;
        case 0x28add4u: goto label_28add4;
        case 0x28add8u: goto label_28add8;
        case 0x28addcu: goto label_28addc;
        case 0x28ade0u: goto label_28ade0;
        case 0x28ade4u: goto label_28ade4;
        case 0x28ade8u: goto label_28ade8;
        case 0x28adecu: goto label_28adec;
        case 0x28adf0u: goto label_28adf0;
        case 0x28adf4u: goto label_28adf4;
        case 0x28adf8u: goto label_28adf8;
        case 0x28adfcu: goto label_28adfc;
        case 0x28ae00u: goto label_28ae00;
        case 0x28ae04u: goto label_28ae04;
        case 0x28ae08u: goto label_28ae08;
        case 0x28ae0cu: goto label_28ae0c;
        case 0x28ae10u: goto label_28ae10;
        case 0x28ae14u: goto label_28ae14;
        case 0x28ae18u: goto label_28ae18;
        case 0x28ae1cu: goto label_28ae1c;
        case 0x28ae20u: goto label_28ae20;
        case 0x28ae24u: goto label_28ae24;
        case 0x28ae28u: goto label_28ae28;
        case 0x28ae2cu: goto label_28ae2c;
        case 0x28ae30u: goto label_28ae30;
        case 0x28ae34u: goto label_28ae34;
        case 0x28ae38u: goto label_28ae38;
        case 0x28ae3cu: goto label_28ae3c;
        case 0x28ae40u: goto label_28ae40;
        case 0x28ae44u: goto label_28ae44;
        case 0x28ae48u: goto label_28ae48;
        case 0x28ae4cu: goto label_28ae4c;
        case 0x28ae50u: goto label_28ae50;
        case 0x28ae54u: goto label_28ae54;
        case 0x28ae58u: goto label_28ae58;
        case 0x28ae5cu: goto label_28ae5c;
        case 0x28ae60u: goto label_28ae60;
        case 0x28ae64u: goto label_28ae64;
        case 0x28ae68u: goto label_28ae68;
        case 0x28ae6cu: goto label_28ae6c;
        case 0x28ae70u: goto label_28ae70;
        case 0x28ae74u: goto label_28ae74;
        case 0x28ae78u: goto label_28ae78;
        case 0x28ae7cu: goto label_28ae7c;
        case 0x28ae80u: goto label_28ae80;
        case 0x28ae84u: goto label_28ae84;
        case 0x28ae88u: goto label_28ae88;
        case 0x28ae8cu: goto label_28ae8c;
        case 0x28ae90u: goto label_28ae90;
        case 0x28ae94u: goto label_28ae94;
        case 0x28ae98u: goto label_28ae98;
        case 0x28ae9cu: goto label_28ae9c;
        case 0x28aea0u: goto label_28aea0;
        case 0x28aea4u: goto label_28aea4;
        case 0x28aea8u: goto label_28aea8;
        case 0x28aeacu: goto label_28aeac;
        case 0x28aeb0u: goto label_28aeb0;
        case 0x28aeb4u: goto label_28aeb4;
        case 0x28aeb8u: goto label_28aeb8;
        case 0x28aebcu: goto label_28aebc;
        case 0x28aec0u: goto label_28aec0;
        case 0x28aec4u: goto label_28aec4;
        case 0x28aec8u: goto label_28aec8;
        case 0x28aeccu: goto label_28aecc;
        case 0x28aed0u: goto label_28aed0;
        case 0x28aed4u: goto label_28aed4;
        case 0x28aed8u: goto label_28aed8;
        case 0x28aedcu: goto label_28aedc;
        case 0x28aee0u: goto label_28aee0;
        case 0x28aee4u: goto label_28aee4;
        case 0x28aee8u: goto label_28aee8;
        case 0x28aeecu: goto label_28aeec;
        case 0x28aef0u: goto label_28aef0;
        case 0x28aef4u: goto label_28aef4;
        case 0x28aef8u: goto label_28aef8;
        case 0x28aefcu: goto label_28aefc;
        case 0x28af00u: goto label_28af00;
        case 0x28af04u: goto label_28af04;
        case 0x28af08u: goto label_28af08;
        case 0x28af0cu: goto label_28af0c;
        case 0x28af10u: goto label_28af10;
        case 0x28af14u: goto label_28af14;
        case 0x28af18u: goto label_28af18;
        case 0x28af1cu: goto label_28af1c;
        case 0x28af20u: goto label_28af20;
        case 0x28af24u: goto label_28af24;
        case 0x28af28u: goto label_28af28;
        case 0x28af2cu: goto label_28af2c;
        case 0x28af30u: goto label_28af30;
        case 0x28af34u: goto label_28af34;
        case 0x28af38u: goto label_28af38;
        case 0x28af3cu: goto label_28af3c;
        case 0x28af40u: goto label_28af40;
        case 0x28af44u: goto label_28af44;
        default: break;
    }

    ctx->pc = 0x28ace8u;

label_28ace8:
    // 0x28ace8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x28ace8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_28acec:
    // 0x28acec: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x28acecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_28acf0:
    // 0x28acf0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x28acf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_28acf4:
    // 0x28acf4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28acf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28acf8:
    // 0x28acf8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x28acf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_28acfc:
    // 0x28acfc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x28acfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_28ad00:
    // 0x28ad00: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x28ad00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_28ad04:
    // 0x28ad04: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x28ad04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_28ad08:
    // 0x28ad08: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x28ad08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_28ad0c:
    // 0x28ad0c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28ad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_28ad10:
    // 0x28ad10: 0xc0a25b2  jal         func_2896C8
label_28ad14:
    if (ctx->pc == 0x28AD14u) {
        ctx->pc = 0x28AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD10u;
        // 0x28ad14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD18u;
        goto label_28ad18;
    }
    ctx->pc = 0x28AD10u;
    SET_GPR_U32(ctx, 31, 0x28AD18u);
    ctx->pc = 0x28AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD10u;
    // 0x28ad14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2896C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2896C8u, 0x28AD10u, 0x28AD18u)) {
        return;
    }
    ctx->pc = 0x28AD18u;
label_28ad18:
    // 0x28ad18: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_28ad1c:
    if (ctx->pc == 0x28AD1Cu) {
        ctx->pc = 0x28AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD18u;
        // 0x28ad1c: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD20u;
        goto label_28ad20;
    }
    ctx->pc = 0x28AD18u;
    {
        const bool branch_taken_0x28ad18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD18u;
        // 0x28ad1c: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad18) {
            ctx->pc = 0x28AD84u;
            goto label_28ad84;
        }
    }
    ctx->pc = 0x28AD20u;
label_28ad20:
    // 0x28ad20: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x28ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_28ad24:
    // 0x28ad24: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x28ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_28ad28:
    // 0x28ad28: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x28ad28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_28ad2c:
    // 0x28ad2c: 0x2455bcd0  addiu       $s5, $v0, -0x4330
    ctx->pc = 0x28ad2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950096));
label_28ad30:
    // 0x28ad30: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28ad30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_28ad34:
    // 0x28ad34: 0xc09292a  jal         func_24A4A8
label_28ad38:
    if (ctx->pc == 0x28AD38u) {
        ctx->pc = 0x28AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD34u;
        // 0x28ad38: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD3Cu;
        goto label_28ad3c;
    }
    ctx->pc = 0x28AD34u;
    SET_GPR_U32(ctx, 31, 0x28AD3Cu);
    ctx->pc = 0x28AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD34u;
    // 0x28ad38: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28AD34u, 0x28AD3Cu)) {
        return;
    }
    ctx->pc = 0x28AD3Cu;
label_28ad3c:
    // 0x28ad3c: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x28ad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_28ad40:
    // 0x28ad40: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x28ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_28ad44:
    // 0x28ad44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ad44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ad48:
    // 0x28ad48: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x28ad48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_28ad4c:
    // 0x28ad4c: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x28ad4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28ad50:
    // 0x28ad50: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
label_28ad54:
    if (ctx->pc == 0x28AD54u) {
        ctx->pc = 0x28AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD50u;
        // 0x28ad54: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD58u;
        goto label_28ad58;
    }
    ctx->pc = 0x28AD50u;
    {
        const bool branch_taken_0x28ad50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x28AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD50u;
        // 0x28ad54: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad50) {
            ctx->pc = 0x28AD7Cu;
            goto label_28ad7c;
        }
    }
    ctx->pc = 0x28AD58u;
label_28ad58:
    // 0x28ad58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ad58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ad5c:
    // 0x28ad5c: 0x0  nop
    ctx->pc = 0x28ad5cu;
    // NOP
label_28ad60:
    // 0x28ad60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28ad60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ad64:
    // 0x28ad64: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28ad64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28ad68:
    // 0x28ad68: 0x2a0f809  jalr        $s5
label_28ad6c:
    if (ctx->pc == 0x28AD6Cu) {
        ctx->pc = 0x28AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD68u;
        // 0x28ad6c: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD70u;
        goto label_28ad70;
    }
    ctx->pc = 0x28AD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x28AD70u);
        ctx->pc = 0x28AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD68u;
        // 0x28ad6c: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AD68u, 0x28AD70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28AD70u;
label_28ad70:
    // 0x28ad70: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_28ad74:
    if (ctx->pc == 0x28AD74u) {
        ctx->pc = 0x28AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD70u;
        // 0x28ad74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD78u;
        goto label_28ad78;
    }
    ctx->pc = 0x28AD70u;
    {
        const bool branch_taken_0x28ad70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x28AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD70u;
        // 0x28ad74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad70) {
            ctx->pc = 0x28AD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ad60;
        }
    }
    ctx->pc = 0x28AD78u;
label_28ad78:
    // 0x28ad78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28ad7c:
    // 0x28ad7c: 0x10000066  b           . + 4 + (0x66 << 2)
label_28ad80:
    if (ctx->pc == 0x28AD80u) {
        ctx->pc = 0x28AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD7Cu;
        // 0x28ad80: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD84u;
        goto label_28ad84;
    }
    ctx->pc = 0x28AD7Cu;
    {
        const bool branch_taken_0x28ad7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD7Cu;
        // 0x28ad80: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad7c) {
            ctx->pc = 0x28AF18u;
            goto label_28af18;
        }
    }
    ctx->pc = 0x28AD84u;
label_28ad84:
    // 0x28ad84: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_28ad88:
    // 0x28ad88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28ad88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ad8c:
    // 0x28ad8c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x28ad8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_28ad90:
    // 0x28ad90: 0x24a5bae0  addiu       $a1, $a1, -0x4520
    ctx->pc = 0x28ad90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949600));
label_28ad94:
    // 0x28ad94: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x28ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_28ad98:
    // 0x28ad98: 0xc0a2db6  jal         func_28B6D8
label_28ad9c:
    if (ctx->pc == 0x28AD9Cu) {
        ctx->pc = 0x28AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD98u;
        // 0x28ad9c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADA0u;
        goto label_28ada0;
    }
    ctx->pc = 0x28AD98u;
    SET_GPR_U32(ctx, 31, 0x28ADA0u);
    ctx->pc = 0x28AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD98u;
    // 0x28ad9c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B6D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28B6D8u, 0x28AD98u, 0x28ADA0u)) {
        return;
    }
    ctx->pc = 0x28ADA0u;
label_28ada0:
    // 0x28ada0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x28ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_28ada4:
    // 0x28ada4: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_28ada8:
    if (ctx->pc == 0x28ADA8u) {
        ctx->pc = 0x28ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADA4u;
        // 0x28ada8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADACu;
        goto label_28adac;
    }
    ctx->pc = 0x28ADA4u;
    {
        const bool branch_taken_0x28ada4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADA4u;
        // 0x28ada8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ada4) {
            ctx->pc = 0x28ADF8u;
            goto label_28adf8;
        }
    }
    ctx->pc = 0x28ADACu;
label_28adac:
    // 0x28adac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28adacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28adb0:
    // 0x28adb0: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x28adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_28adb4:
    // 0x28adb4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x28adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28adb8:
    // 0x28adb8: 0x40f809  jalr        $v0
label_28adbc:
    if (ctx->pc == 0x28ADBCu) {
        ctx->pc = 0x28ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADB8u;
        // 0x28adbc: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADC0u;
        goto label_28adc0;
    }
    ctx->pc = 0x28ADB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28ADC0u);
        ctx->pc = 0x28ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADB8u;
        // 0x28adbc: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ADB8u, 0x28ADC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28ADC0u;
label_28adc0:
    // 0x28adc0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_28adc4:
    if (ctx->pc == 0x28ADC4u) {
        ctx->pc = 0x28ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADC0u;
        // 0x28adc4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADC8u;
        goto label_28adc8;
    }
    ctx->pc = 0x28ADC0u;
    {
        const bool branch_taken_0x28adc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADC0u;
        // 0x28adc4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28adc0) {
            ctx->pc = 0x28ADFCu;
            goto label_28adfc;
        }
    }
    ctx->pc = 0x28ADC8u;
label_28adc8:
    // 0x28adc8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_28adcc:
    // 0x28adcc: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x28adccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_28add0:
    // 0x28add0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x28add0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_28add4:
    // 0x28add4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x28add4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_28add8:
    // 0x28add8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x28add8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_28addc:
    // 0x28addc: 0xc092848  jal         func_24A120
label_28ade0:
    if (ctx->pc == 0x28ADE0u) {
        ctx->pc = 0x28ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADDCu;
        // 0x28ade0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADE4u;
        goto label_28ade4;
    }
    ctx->pc = 0x28ADDCu;
    SET_GPR_U32(ctx, 31, 0x28ADE4u);
    ctx->pc = 0x28ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ADDCu;
    // 0x28ade0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x28ADDCu, 0x28ADE4u)) {
        return;
    }
    ctx->pc = 0x28ADE4u;
label_28ade4:
    // 0x28ade4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x28ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_28ade8:
    // 0x28ade8: 0xc09281a  jal         func_24A068
label_28adec:
    if (ctx->pc == 0x28ADECu) {
        ctx->pc = 0x28ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADE8u;
        // 0x28adec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADF0u;
        goto label_28adf0;
    }
    ctx->pc = 0x28ADE8u;
    SET_GPR_U32(ctx, 31, 0x28ADF0u);
    ctx->pc = 0x28ADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ADE8u;
    // 0x28adec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x28ADE8u, 0x28ADF0u)) {
        return;
    }
    ctx->pc = 0x28ADF0u;
label_28adf0:
    // 0x28adf0: 0x10000009  b           . + 4 + (0x9 << 2)
label_28adf4:
    if (ctx->pc == 0x28ADF4u) {
        ctx->pc = 0x28ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADF0u;
        // 0x28adf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADF8u;
        goto label_28adf8;
    }
    ctx->pc = 0x28ADF0u;
    {
        const bool branch_taken_0x28adf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADF0u;
        // 0x28adf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28adf0) {
            ctx->pc = 0x28AE18u;
            goto label_28ae18;
        }
    }
    ctx->pc = 0x28ADF8u;
label_28adf8:
    // 0x28adf8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28adf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_28adfc:
    // 0x28adfc: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_28ae00:
    // 0x28ae00: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x28ae00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_28ae04:
    // 0x28ae04: 0x24a5bb50  addiu       $a1, $a1, -0x44B0
    ctx->pc = 0x28ae04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949712));
label_28ae08:
    // 0x28ae08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28ae08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ae0c:
    // 0x28ae0c: 0xc0a2db6  jal         func_28B6D8
label_28ae10:
    if (ctx->pc == 0x28AE10u) {
        ctx->pc = 0x28AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE0Cu;
        // 0x28ae10: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE14u;
        goto label_28ae14;
    }
    ctx->pc = 0x28AE0Cu;
    SET_GPR_U32(ctx, 31, 0x28AE14u);
    ctx->pc = 0x28AE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE0Cu;
    // 0x28ae10: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B6D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28B6D8u, 0x28AE0Cu, 0x28AE14u)) {
        return;
    }
    ctx->pc = 0x28AE14u;
label_28ae14:
    // 0x28ae14: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x28ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28ae18:
    // 0x28ae18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28ae1c:
    if (ctx->pc == 0x28AE1Cu) {
        ctx->pc = 0x28AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE18u;
        // 0x28ae1c: 0x2676000c  addiu       $s6, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE20u;
        goto label_28ae20;
    }
    ctx->pc = 0x28AE18u;
    {
        const bool branch_taken_0x28ae18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE18u;
        // 0x28ae1c: 0x2676000c  addiu       $s6, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae18) {
            ctx->pc = 0x28AE28u;
            goto label_28ae28;
        }
    }
    ctx->pc = 0x28AE20u;
label_28ae20:
    // 0x28ae20: 0x1000003e  b           . + 4 + (0x3E << 2)
label_28ae24:
    if (ctx->pc == 0x28AE24u) {
        ctx->pc = 0x28AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE20u;
        // 0x28ae24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE28u;
        goto label_28ae28;
    }
    ctx->pc = 0x28AE20u;
    {
        const bool branch_taken_0x28ae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE20u;
        // 0x28ae24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae20) {
            ctx->pc = 0x28AF1Cu;
            goto label_28af1c;
        }
    }
    ctx->pc = 0x28AE28u;
label_28ae28:
    // 0x28ae28: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x28ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_28ae2c:
    // 0x28ae2c: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x28ae2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28ae30:
    // 0x28ae30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28ae30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ae34:
    // 0x28ae34: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_28ae38:
    if (ctx->pc == 0x28AE38u) {
        ctx->pc = 0x28AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE34u;
        // 0x28ae38: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE3Cu;
        goto label_28ae3c;
    }
    ctx->pc = 0x28AE34u;
    {
        const bool branch_taken_0x28ae34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE34u;
        // 0x28ae38: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae34) {
            ctx->pc = 0x28AE68u;
            goto label_28ae68;
        }
    }
    ctx->pc = 0x28AE3Cu;
label_28ae3c:
    // 0x28ae3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28ae3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ae40:
    // 0x28ae40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_28ae44:
    // 0x28ae44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28ae44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28ae48:
    // 0x28ae48: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28ae4c:
    // 0x28ae4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28ae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28ae50:
    // 0x28ae50: 0xc0a35c2  jal         func_28D708
label_28ae54:
    if (ctx->pc == 0x28AE54u) {
        ctx->pc = 0x28AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE50u;
        // 0x28ae54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE58u;
        goto label_28ae58;
    }
    ctx->pc = 0x28AE50u;
    SET_GPR_U32(ctx, 31, 0x28AE58u);
    ctx->pc = 0x28AE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE50u;
    // 0x28ae54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D708u, 0x28AE50u, 0x28AE58u)) {
        return;
    }
    ctx->pc = 0x28AE58u;
label_28ae58:
    // 0x28ae58: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x28ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_28ae5c:
    // 0x28ae5c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x28ae5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28ae60:
    // 0x28ae60: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_28ae64:
    if (ctx->pc == 0x28AE64u) {
        ctx->pc = 0x28AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE60u;
        // 0x28ae64: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE68u;
        goto label_28ae68;
    }
    ctx->pc = 0x28AE60u;
    {
        const bool branch_taken_0x28ae60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE60u;
        // 0x28ae64: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae60) {
            ctx->pc = 0x28AE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ae40;
        }
    }
    ctx->pc = 0x28AE68u;
label_28ae68:
    // 0x28ae68: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x28ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_28ae6c:
    // 0x28ae6c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x28ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_28ae70:
    // 0x28ae70: 0xafb50004  sw          $s5, 0x4($sp)
    ctx->pc = 0x28ae70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
label_28ae74:
    // 0x28ae74: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x28ae74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28ae78:
    // 0x28ae78: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_28ae7c:
    // 0x28ae7c: 0xc09292a  jal         func_24A4A8
label_28ae80:
    if (ctx->pc == 0x28AE80u) {
        ctx->pc = 0x28AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE7Cu;
        // 0x28ae80: 0x2455bcd0  addiu       $s5, $v0, -0x4330 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE84u;
        goto label_28ae84;
    }
    ctx->pc = 0x28AE7Cu;
    SET_GPR_U32(ctx, 31, 0x28AE84u);
    ctx->pc = 0x28AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE7Cu;
    // 0x28ae80: 0x2455bcd0  addiu       $s5, $v0, -0x4330 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28AE7Cu, 0x28AE84u)) {
        return;
    }
    ctx->pc = 0x28AE84u;
label_28ae84:
    // 0x28ae84: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x28ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_28ae88:
    // 0x28ae88: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x28ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_28ae8c:
    // 0x28ae8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ae8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ae90:
    // 0x28ae90: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x28ae90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_28ae94:
    // 0x28ae94: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x28ae94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28ae98:
    // 0x28ae98: 0x12110009  beq         $s0, $s1, . + 4 + (0x9 << 2)
label_28ae9c:
    if (ctx->pc == 0x28AE9Cu) {
        ctx->pc = 0x28AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE98u;
        // 0x28ae9c: 0x2d39821  addu        $s3, $s6, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AEA0u;
        goto label_28aea0;
    }
    ctx->pc = 0x28AE98u;
    {
        const bool branch_taken_0x28ae98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x28AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE98u;
        // 0x28ae9c: 0x2d39821  addu        $s3, $s6, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae98) {
            ctx->pc = 0x28AEC0u;
            goto label_28aec0;
        }
    }
    ctx->pc = 0x28AEA0u;
label_28aea0:
    // 0x28aea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28aea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28aea4:
    // 0x28aea4: 0x0  nop
    ctx->pc = 0x28aea4u;
    // NOP
label_28aea8:
    // 0x28aea8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28aea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28aeac:
    // 0x28aeac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28aeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28aeb0:
    // 0x28aeb0: 0x2a0f809  jalr        $s5
label_28aeb4:
    if (ctx->pc == 0x28AEB4u) {
        ctx->pc = 0x28AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEB0u;
        // 0x28aeb4: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AEB8u;
        goto label_28aeb8;
    }
    ctx->pc = 0x28AEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x28AEB8u);
        ctx->pc = 0x28AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEB0u;
        // 0x28aeb4: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AEB0u, 0x28AEB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28AEB8u;
label_28aeb8:
    // 0x28aeb8: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_28aebc:
    if (ctx->pc == 0x28AEBCu) {
        ctx->pc = 0x28AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEB8u;
        // 0x28aebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AEC0u;
        goto label_28aec0;
    }
    ctx->pc = 0x28AEB8u;
    {
        const bool branch_taken_0x28aeb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x28AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEB8u;
        // 0x28aebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aeb8) {
            ctx->pc = 0x28AEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28aea8;
        }
    }
    ctx->pc = 0x28AEC0u;
label_28aec0:
    // 0x28aec0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28aec4:
    // 0x28aec4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x28aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_28aec8:
    // 0x28aec8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_28aecc:
    if (ctx->pc == 0x28AECCu) {
        ctx->pc = 0x28AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEC8u;
        // 0x28aecc: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AED0u;
        goto label_28aed0;
    }
    ctx->pc = 0x28AEC8u;
    {
        const bool branch_taken_0x28aec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEC8u;
        // 0x28aecc: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aec8) {
            ctx->pc = 0x28AF18u;
            goto label_28af18;
        }
    }
    ctx->pc = 0x28AED0u;
label_28aed0:
    // 0x28aed0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_28aed4:
    if (ctx->pc == 0x28AED4u) {
        ctx->pc = 0x28AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AED0u;
        // 0x28aed4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AED8u;
        goto label_28aed8;
    }
    ctx->pc = 0x28AED0u;
    {
        const bool branch_taken_0x28aed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AED0u;
        // 0x28aed4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aed0) {
            ctx->pc = 0x28AF04u;
            goto label_28af04;
        }
    }
    ctx->pc = 0x28AED8u;
label_28aed8:
    // 0x28aed8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28aed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28aedc:
    // 0x28aedc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_28aee0:
    // 0x28aee0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28aee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28aee4:
    // 0x28aee4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28aee8:
    // 0x28aee8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28aeec:
    // 0x28aeec: 0xc0a3434  jal         func_28D0D0
label_28aef0:
    if (ctx->pc == 0x28AEF0u) {
        ctx->pc = 0x28AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEECu;
        // 0x28aef0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AEF4u;
        goto label_28aef4;
    }
    ctx->pc = 0x28AEECu;
    SET_GPR_U32(ctx, 31, 0x28AEF4u);
    ctx->pc = 0x28AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AEECu;
    // 0x28aef0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D0D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D0D0u, 0x28AEECu, 0x28AEF4u)) {
        return;
    }
    ctx->pc = 0x28AEF4u;
label_28aef4:
    // 0x28aef4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x28aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_28aef8:
    // 0x28aef8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x28aef8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28aefc:
    // 0x28aefc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_28af00:
    if (ctx->pc == 0x28AF00u) {
        ctx->pc = 0x28AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEFCu;
        // 0x28af00: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF04u;
        goto label_28af04;
    }
    ctx->pc = 0x28AEFCu;
    {
        const bool branch_taken_0x28aefc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEFCu;
        // 0x28af00: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aefc) {
            ctx->pc = 0x28AEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28aee0;
        }
    }
    ctx->pc = 0x28AF04u;
label_28af04:
    // 0x28af04: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28af04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_28af08:
    // 0x28af08: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x28af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_28af0c:
    // 0x28af0c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x28af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_28af10:
    // 0x28af10: 0x60f809  jalr        $v1
label_28af14:
    if (ctx->pc == 0x28AF14u) {
        ctx->pc = 0x28AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF10u;
        // 0x28af14: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF18u;
        goto label_28af18;
    }
    ctx->pc = 0x28AF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28AF18u);
        ctx->pc = 0x28AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF10u;
        // 0x28af14: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AF10u, 0x28AF18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28AF18u;
label_28af18:
    // 0x28af18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x28af18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28af1c:
    // 0x28af1c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x28af1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_28af20:
    // 0x28af20: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x28af20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28af24:
    // 0x28af24: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x28af24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28af28:
    // 0x28af28: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x28af28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28af2c:
    // 0x28af2c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x28af2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28af30:
    // 0x28af30: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x28af30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28af34:
    // 0x28af34: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x28af34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28af38:
    // 0x28af38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28af38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28af3c:
    // 0x28af3c: 0x3e00008  jr          $ra
label_28af40:
    if (ctx->pc == 0x28AF40u) {
        ctx->pc = 0x28AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF3Cu;
        // 0x28af40: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF44u;
        goto label_28af44;
    }
    ctx->pc = 0x28AF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF3Cu;
        // 0x28af40: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AF44u;
label_28af44:
    // 0x28af44: 0x0  nop
    ctx->pc = 0x28af44u;
    // NOP
    ctx->pc = 0x28af48u;
}
