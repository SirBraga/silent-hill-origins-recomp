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

// Function: sub_00212048
// Address: 0x212048 - 0x212168
void sub_00212048_0x212048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212048_0x212048");
#endif

    switch (ctx->pc) {
        case 0x212048u: goto label_212048;
        case 0x21204cu: goto label_21204c;
        case 0x212050u: goto label_212050;
        case 0x212054u: goto label_212054;
        case 0x212058u: goto label_212058;
        case 0x21205cu: goto label_21205c;
        case 0x212060u: goto label_212060;
        case 0x212064u: goto label_212064;
        case 0x212068u: goto label_212068;
        case 0x21206cu: goto label_21206c;
        case 0x212070u: goto label_212070;
        case 0x212074u: goto label_212074;
        case 0x212078u: goto label_212078;
        case 0x21207cu: goto label_21207c;
        case 0x212080u: goto label_212080;
        case 0x212084u: goto label_212084;
        case 0x212088u: goto label_212088;
        case 0x21208cu: goto label_21208c;
        case 0x212090u: goto label_212090;
        case 0x212094u: goto label_212094;
        case 0x212098u: goto label_212098;
        case 0x21209cu: goto label_21209c;
        case 0x2120a0u: goto label_2120a0;
        case 0x2120a4u: goto label_2120a4;
        case 0x2120a8u: goto label_2120a8;
        case 0x2120acu: goto label_2120ac;
        case 0x2120b0u: goto label_2120b0;
        case 0x2120b4u: goto label_2120b4;
        case 0x2120b8u: goto label_2120b8;
        case 0x2120bcu: goto label_2120bc;
        case 0x2120c0u: goto label_2120c0;
        case 0x2120c4u: goto label_2120c4;
        case 0x2120c8u: goto label_2120c8;
        case 0x2120ccu: goto label_2120cc;
        case 0x2120d0u: goto label_2120d0;
        case 0x2120d4u: goto label_2120d4;
        case 0x2120d8u: goto label_2120d8;
        case 0x2120dcu: goto label_2120dc;
        case 0x2120e0u: goto label_2120e0;
        case 0x2120e4u: goto label_2120e4;
        case 0x2120e8u: goto label_2120e8;
        case 0x2120ecu: goto label_2120ec;
        case 0x2120f0u: goto label_2120f0;
        case 0x2120f4u: goto label_2120f4;
        case 0x2120f8u: goto label_2120f8;
        case 0x2120fcu: goto label_2120fc;
        case 0x212100u: goto label_212100;
        case 0x212104u: goto label_212104;
        case 0x212108u: goto label_212108;
        case 0x21210cu: goto label_21210c;
        case 0x212110u: goto label_212110;
        case 0x212114u: goto label_212114;
        case 0x212118u: goto label_212118;
        case 0x21211cu: goto label_21211c;
        case 0x212120u: goto label_212120;
        case 0x212124u: goto label_212124;
        case 0x212128u: goto label_212128;
        case 0x21212cu: goto label_21212c;
        case 0x212130u: goto label_212130;
        case 0x212134u: goto label_212134;
        case 0x212138u: goto label_212138;
        case 0x21213cu: goto label_21213c;
        case 0x212140u: goto label_212140;
        case 0x212144u: goto label_212144;
        case 0x212148u: goto label_212148;
        case 0x21214cu: goto label_21214c;
        case 0x212150u: goto label_212150;
        case 0x212154u: goto label_212154;
        case 0x212158u: goto label_212158;
        case 0x21215cu: goto label_21215c;
        case 0x212160u: goto label_212160;
        case 0x212164u: goto label_212164;
        default: break;
    }

    ctx->pc = 0x212048u;

label_212048:
    // 0x212048: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x212048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_21204c:
    // 0x21204c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x21204cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_212050:
    // 0x212050: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x212050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_212054:
    // 0x212054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x212054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212058:
    // 0x212058: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x212058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_21205c:
    // 0x21205c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21205cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_212060:
    // 0x212060: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x212060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_212064:
    // 0x212064: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x212064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_212068:
    // 0x212068: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x212068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_21206c:
    // 0x21206c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21206cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_212070:
    // 0x212070: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x212070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_212074:
    // 0x212074: 0x8e5501cc  lw          $s5, 0x1CC($s2)
    ctx->pc = 0x212074u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 460)));
label_212078:
    // 0x212078: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x212078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_21207c:
    // 0x21207c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x21207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_212080:
    // 0x212080: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x212080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
label_212084:
    // 0x212084: 0x8eb00014  lw          $s0, 0x14($s5)
    ctx->pc = 0x212084u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_212088:
    // 0x212088: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x212088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21208c:
    // 0x21208c: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x21208cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_212090:
    // 0x212090: 0x3012  mflo        $a2
    ctx->pc = 0x212090u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_212094:
    // 0x212094: 0x40f809  jalr        $v0
label_212098:
    if (ctx->pc == 0x212098u) {
        ctx->pc = 0x212098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212094u;
        // 0x212098: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21209Cu;
        goto label_21209c;
    }
    ctx->pc = 0x212094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21209Cu);
        ctx->pc = 0x212098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212094u;
        // 0x212098: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212094u, 0x21209Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21209Cu;
label_21209c:
    // 0x21209c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21209cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2120a0:
    // 0x2120a0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2120a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2120a4:
    // 0x2120a4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x2120a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_2120a8:
    // 0x2120a8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2120a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2120ac:
    // 0x2120ac: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2120acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2120b0:
    // 0x2120b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2120b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2120b4:
    // 0x2120b4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2120b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2120b8:
    // 0x2120b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2120b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2120bc:
    // 0x2120bc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2120bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2120c0:
    // 0x2120c0: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2120c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_2120c4:
    // 0x2120c4: 0xc08419e  jal         func_210678
label_2120c8:
    if (ctx->pc == 0x2120C8u) {
        ctx->pc = 0x2120C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120C4u;
        // 0x2120c8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120CCu;
        goto label_2120cc;
    }
    ctx->pc = 0x2120C4u;
    SET_GPR_U32(ctx, 31, 0x2120CCu);
    ctx->pc = 0x2120C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2120C4u;
    // 0x2120c8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x210678u, 0x2120C4u, 0x2120CCu)) {
        return;
    }
    ctx->pc = 0x2120CCu;
label_2120cc:
    // 0x2120cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2120ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2120d0:
    // 0x2120d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2120d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2120d4:
    // 0x2120d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2120d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2120d8:
    // 0x2120d8: 0xc0842e2  jal         func_210B88
label_2120dc:
    if (ctx->pc == 0x2120DCu) {
        ctx->pc = 0x2120DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120D8u;
        // 0x2120dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120E0u;
        goto label_2120e0;
    }
    ctx->pc = 0x2120D8u;
    SET_GPR_U32(ctx, 31, 0x2120E0u);
    ctx->pc = 0x2120DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2120D8u;
    // 0x2120dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x210B88u, 0x2120D8u, 0x2120E0u)) {
        return;
    }
    ctx->pc = 0x2120E0u;
label_2120e0:
    // 0x2120e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2120e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2120e4:
    // 0x2120e4: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
label_2120e8:
    if (ctx->pc == 0x2120E8u) {
        ctx->pc = 0x2120E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120E4u;
        // 0x2120e8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120ECu;
        goto label_2120ec;
    }
    ctx->pc = 0x2120E4u;
    {
        const bool branch_taken_0x2120e4 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x2120E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120E4u;
        // 0x2120e8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2120e4) {
            ctx->pc = 0x212110u;
            goto label_212110;
        }
    }
    ctx->pc = 0x2120ECu;
label_2120ec:
    // 0x2120ec: 0x0  nop
    ctx->pc = 0x2120ecu;
    // NOP
label_2120f0:
    // 0x2120f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2120f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2120f4:
    // 0x2120f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2120f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2120f8:
    // 0x2120f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2120f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2120fc:
    // 0x2120fc: 0xc08436c  jal         func_210DB0
label_212100:
    if (ctx->pc == 0x212100u) {
        ctx->pc = 0x212100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120FCu;
        // 0x212100: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212104u;
        goto label_212104;
    }
    ctx->pc = 0x2120FCu;
    SET_GPR_U32(ctx, 31, 0x212104u);
    ctx->pc = 0x212100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2120FCu;
    // 0x212100: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x210DB0u, 0x2120FCu, 0x212104u)) {
        return;
    }
    ctx->pc = 0x212104u;
label_212104:
    // 0x212104: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x212104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_212108:
    // 0x212108: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_21210c:
    if (ctx->pc == 0x21210Cu) {
        ctx->pc = 0x21210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212108u;
        // 0x21210c: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212110u;
        goto label_212110;
    }
    ctx->pc = 0x212108u;
    {
        const bool branch_taken_0x212108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212108u;
        // 0x21210c: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212108) {
            ctx->pc = 0x2120F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2120f0;
        }
    }
    ctx->pc = 0x212110u;
label_212110:
    // 0x212110: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x212110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_212114:
    // 0x212114: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x212114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_212118:
    // 0x212118: 0xae540084  sw          $s4, 0x84($s2)
    ctx->pc = 0x212118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 20));
label_21211c:
    // 0x21211c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_212120:
    // 0x212120: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x212120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_212124:
    // 0x212124: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x212124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_212128:
    // 0x212128: 0xac540018  sw          $s4, 0x18($v0)
    ctx->pc = 0x212128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 20));
label_21212c:
    // 0x21212c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21212cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_212130:
    // 0x212130: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x212130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_212134:
    // 0x212134: 0x40f809  jalr        $v0
label_212138:
    if (ctx->pc == 0x212138u) {
        ctx->pc = 0x212138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212134u;
        // 0x212138: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21213Cu;
        goto label_21213c;
    }
    ctx->pc = 0x212134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21213Cu);
        ctx->pc = 0x212138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212134u;
        // 0x212138: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212134u, 0x21213Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21213Cu;
label_21213c:
    // 0x21213c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21213cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212140:
    // 0x212140: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x212140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_212144:
    // 0x212144: 0xaea3001c  sw          $v1, 0x1C($s5)
    ctx->pc = 0x212144u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 3));
label_212148:
    // 0x212148: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x212148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21214c:
    // 0x21214c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x21214cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_212150:
    // 0x212150: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x212150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_212154:
    // 0x212154: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x212154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_212158:
    // 0x212158: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x212158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21215c:
    // 0x21215c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21215cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_212160:
    // 0x212160: 0x3e00008  jr          $ra
label_212164:
    if (ctx->pc == 0x212164u) {
        ctx->pc = 0x212164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212160u;
        // 0x212164: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212168u;
        goto label_fallthrough_0x212160;
    }
    ctx->pc = 0x212160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212160u;
        // 0x212164: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x212160:
    ctx->pc = 0x212168u;
}
