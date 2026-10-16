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

// Function: sub_00235FA8
// Address: 0x235fa8 - 0x2360f8
void sub_00235FA8_0x235fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235FA8_0x235fa8");
#endif

    switch (ctx->pc) {
        case 0x235fa8u: goto label_235fa8;
        case 0x235facu: goto label_235fac;
        case 0x235fb0u: goto label_235fb0;
        case 0x235fb4u: goto label_235fb4;
        case 0x235fb8u: goto label_235fb8;
        case 0x235fbcu: goto label_235fbc;
        case 0x235fc0u: goto label_235fc0;
        case 0x235fc4u: goto label_235fc4;
        case 0x235fc8u: goto label_235fc8;
        case 0x235fccu: goto label_235fcc;
        case 0x235fd0u: goto label_235fd0;
        case 0x235fd4u: goto label_235fd4;
        case 0x235fd8u: goto label_235fd8;
        case 0x235fdcu: goto label_235fdc;
        case 0x235fe0u: goto label_235fe0;
        case 0x235fe4u: goto label_235fe4;
        case 0x235fe8u: goto label_235fe8;
        case 0x235fecu: goto label_235fec;
        case 0x235ff0u: goto label_235ff0;
        case 0x235ff4u: goto label_235ff4;
        case 0x235ff8u: goto label_235ff8;
        case 0x235ffcu: goto label_235ffc;
        case 0x236000u: goto label_236000;
        case 0x236004u: goto label_236004;
        case 0x236008u: goto label_236008;
        case 0x23600cu: goto label_23600c;
        case 0x236010u: goto label_236010;
        case 0x236014u: goto label_236014;
        case 0x236018u: goto label_236018;
        case 0x23601cu: goto label_23601c;
        case 0x236020u: goto label_236020;
        case 0x236024u: goto label_236024;
        case 0x236028u: goto label_236028;
        case 0x23602cu: goto label_23602c;
        case 0x236030u: goto label_236030;
        case 0x236034u: goto label_236034;
        case 0x236038u: goto label_236038;
        case 0x23603cu: goto label_23603c;
        case 0x236040u: goto label_236040;
        case 0x236044u: goto label_236044;
        case 0x236048u: goto label_236048;
        case 0x23604cu: goto label_23604c;
        case 0x236050u: goto label_236050;
        case 0x236054u: goto label_236054;
        case 0x236058u: goto label_236058;
        case 0x23605cu: goto label_23605c;
        case 0x236060u: goto label_236060;
        case 0x236064u: goto label_236064;
        case 0x236068u: goto label_236068;
        case 0x23606cu: goto label_23606c;
        case 0x236070u: goto label_236070;
        case 0x236074u: goto label_236074;
        case 0x236078u: goto label_236078;
        case 0x23607cu: goto label_23607c;
        case 0x236080u: goto label_236080;
        case 0x236084u: goto label_236084;
        case 0x236088u: goto label_236088;
        case 0x23608cu: goto label_23608c;
        case 0x236090u: goto label_236090;
        case 0x236094u: goto label_236094;
        case 0x236098u: goto label_236098;
        case 0x23609cu: goto label_23609c;
        case 0x2360a0u: goto label_2360a0;
        case 0x2360a4u: goto label_2360a4;
        case 0x2360a8u: goto label_2360a8;
        case 0x2360acu: goto label_2360ac;
        case 0x2360b0u: goto label_2360b0;
        case 0x2360b4u: goto label_2360b4;
        case 0x2360b8u: goto label_2360b8;
        case 0x2360bcu: goto label_2360bc;
        case 0x2360c0u: goto label_2360c0;
        case 0x2360c4u: goto label_2360c4;
        case 0x2360c8u: goto label_2360c8;
        case 0x2360ccu: goto label_2360cc;
        case 0x2360d0u: goto label_2360d0;
        case 0x2360d4u: goto label_2360d4;
        case 0x2360d8u: goto label_2360d8;
        case 0x2360dcu: goto label_2360dc;
        case 0x2360e0u: goto label_2360e0;
        case 0x2360e4u: goto label_2360e4;
        case 0x2360e8u: goto label_2360e8;
        case 0x2360ecu: goto label_2360ec;
        case 0x2360f0u: goto label_2360f0;
        case 0x2360f4u: goto label_2360f4;
        default: break;
    }

    ctx->pc = 0x235fa8u;

label_235fa8:
    // 0x235fa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_235fac:
    // 0x235fac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x235facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_235fb0:
    // 0x235fb0: 0x8c42416c  lw          $v0, 0x416C($v0)
    ctx->pc = 0x235fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16748)));
label_235fb4:
    // 0x235fb4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x235fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_235fb8:
    // 0x235fb8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x235fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_235fbc:
    // 0x235fbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x235fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235fc0:
    // 0x235fc0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x235fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_235fc4:
    // 0x235fc4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x235fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_235fc8:
    // 0x235fc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235fcc:
    // 0x235fcc: 0x90430017  lbu         $v1, 0x17($v0)
    ctx->pc = 0x235fccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
label_235fd0:
    // 0x235fd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_235fd4:
    if (ctx->pc == 0x235FD4u) {
        ctx->pc = 0x235FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FD0u;
        // 0x235fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FD8u;
        goto label_235fd8;
    }
    ctx->pc = 0x235FD0u;
    {
        const bool branch_taken_0x235fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FD0u;
        // 0x235fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fd0) {
            ctx->pc = 0x235FE0u;
            goto label_235fe0;
        }
    }
    ctx->pc = 0x235FD8u;
label_235fd8:
    // 0x235fd8: 0xc091c52  jal         func_247148
label_235fdc:
    if (ctx->pc == 0x235FDCu) {
        ctx->pc = 0x235FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FD8u;
        // 0x235fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FE0u;
        goto label_235fe0;
    }
    ctx->pc = 0x235FD8u;
    SET_GPR_U32(ctx, 31, 0x235FE0u);
    ctx->pc = 0x235FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235FD8u;
    // 0x235fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247148u, 0x235FD8u, 0x235FE0u)) {
        return;
    }
    ctx->pc = 0x235FE0u;
label_235fe0:
    // 0x235fe0: 0xc091bd0  jal         func_246F40
label_235fe4:
    if (ctx->pc == 0x235FE4u) {
        ctx->pc = 0x235FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FE0u;
        // 0x235fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FE8u;
        goto label_235fe8;
    }
    ctx->pc = 0x235FE0u;
    SET_GPR_U32(ctx, 31, 0x235FE8u);
    ctx->pc = 0x235FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235FE0u;
    // 0x235fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246F40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246F40u, 0x235FE0u, 0x235FE8u)) {
        return;
    }
    ctx->pc = 0x235FE8u;
label_235fe8:
    // 0x235fe8: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x235fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
label_235fec:
    // 0x235fec: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x235fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_235ff0:
    // 0x235ff0: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_235ff4:
    if (ctx->pc == 0x235FF4u) {
        ctx->pc = 0x235FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FF0u;
        // 0x235ff4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FF8u;
        goto label_235ff8;
    }
    ctx->pc = 0x235FF0u;
    {
        const bool branch_taken_0x235ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FF0u;
        // 0x235ff4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ff0) {
            ctx->pc = 0x2360DCu;
            goto label_2360dc;
        }
    }
    ctx->pc = 0x235FF8u;
label_235ff8:
    // 0x235ff8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x235ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_235ffc:
    // 0x235ffc: 0x8c42416c  lw          $v0, 0x416C($v0)
    ctx->pc = 0x235ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16748)));
label_236000:
    // 0x236000: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x236000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_236004:
    // 0x236004: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x236004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_236008:
    // 0x236008: 0x58600009  blezl       $v1, . + 4 + (0x9 << 2)
label_23600c:
    if (ctx->pc == 0x23600Cu) {
        ctx->pc = 0x23600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236008u;
        // 0x23600c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236010u;
        goto label_236010;
    }
    ctx->pc = 0x236008u;
    {
        const bool branch_taken_0x236008 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x236008) {
            ctx->pc = 0x23600Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236008u;
            // 0x23600c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236030u;
            goto label_236030;
        }
    }
    ctx->pc = 0x236010u;
label_236010:
    // 0x236010: 0xc08b848  jal         func_22E120
label_236014:
    if (ctx->pc == 0x236014u) {
        ctx->pc = 0x236018u;
        goto label_236018;
    }
    ctx->pc = 0x236010u;
    SET_GPR_U32(ctx, 31, 0x236018u);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x236010u, 0x236018u)) {
        return;
    }
    ctx->pc = 0x236018u;
label_236018:
    // 0x236018: 0xc08b848  jal         func_22E120
label_23601c:
    if (ctx->pc == 0x23601Cu) {
        ctx->pc = 0x236020u;
        goto label_236020;
    }
    ctx->pc = 0x236018u;
    SET_GPR_U32(ctx, 31, 0x236020u);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x236018u, 0x236020u)) {
        return;
    }
    ctx->pc = 0x236020u;
label_236020:
    // 0x236020: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x236020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_236024:
    // 0x236024: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_236028:
    if (ctx->pc == 0x236028u) {
        ctx->pc = 0x23602Cu;
        goto label_23602c;
    }
    ctx->pc = 0x236024u;
    {
        const bool branch_taken_0x236024 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x236024) {
            ctx->pc = 0x236010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236010;
        }
    }
    ctx->pc = 0x23602Cu;
label_23602c:
    // 0x23602c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x23602cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_236030:
    // 0x236030: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x236030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_236034:
    // 0x236034: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_236038:
    if (ctx->pc == 0x236038u) {
        ctx->pc = 0x236038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236034u;
        // 0x236038: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23603Cu;
        goto label_23603c;
    }
    ctx->pc = 0x236034u;
    {
        const bool branch_taken_0x236034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236034u;
        // 0x236038: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236034) {
            ctx->pc = 0x236048u;
            goto label_236048;
        }
    }
    ctx->pc = 0x23603Cu;
label_23603c:
    // 0x23603c: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x23603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_236040:
    // 0x236040: 0x40f809  jalr        $v0
label_236044:
    if (ctx->pc == 0x236044u) {
        ctx->pc = 0x236048u;
        goto label_236048;
    }
    ctx->pc = 0x236040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236048u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236040u, 0x236048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236048u;
label_236048:
    // 0x236048: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x236048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23604c:
    // 0x23604c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_236050:
    if (ctx->pc == 0x236050u) {
        ctx->pc = 0x236050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23604Cu;
        // 0x236050: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236054u;
        goto label_236054;
    }
    ctx->pc = 0x23604Cu;
    {
        const bool branch_taken_0x23604c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23604c) {
            ctx->pc = 0x236050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23604Cu;
            // 0x236050: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2360ACu;
            goto label_2360ac;
        }
    }
    ctx->pc = 0x236054u;
label_236054:
    // 0x236054: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x236054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_236058:
    // 0x236058: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_23605c:
    if (ctx->pc == 0x23605Cu) {
        ctx->pc = 0x23605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236058u;
        // 0x23605c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236060u;
        goto label_236060;
    }
    ctx->pc = 0x236058u;
    {
        const bool branch_taken_0x236058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236058u;
        // 0x23605c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236058) {
            ctx->pc = 0x236070u;
            goto label_236070;
        }
    }
    ctx->pc = 0x236060u;
label_236060:
    // 0x236060: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x236060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_236064:
    // 0x236064: 0x40f809  jalr        $v0
label_236068:
    if (ctx->pc == 0x236068u) {
        ctx->pc = 0x23606Cu;
        goto label_23606c;
    }
    ctx->pc = 0x236064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23606Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236064u, 0x23606Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23606Cu;
label_23606c:
    // 0x23606c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x23606cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_236070:
    // 0x236070: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x236070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_236074:
    // 0x236074: 0x2610003c  addiu       $s0, $s0, 0x3C
    ctx->pc = 0x236074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_236078:
    // 0x236078: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x236078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_23607c:
    // 0x23607c: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x23607cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_236080:
    // 0x236080: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x236080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_236084:
    // 0x236084: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_236088:
    if (ctx->pc == 0x236088u) {
        ctx->pc = 0x236088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236084u;
        // 0x236088: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23608Cu;
        goto label_23608c;
    }
    ctx->pc = 0x236084u;
    {
        const bool branch_taken_0x236084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236084u;
        // 0x236088: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236084) {
            ctx->pc = 0x23609Cu;
            goto label_23609c;
        }
    }
    ctx->pc = 0x23608Cu;
label_23608c:
    // 0x23608c: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x23608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_236090:
    // 0x236090: 0x40f809  jalr        $v0
label_236094:
    if (ctx->pc == 0x236094u) {
        ctx->pc = 0x236098u;
        goto label_236098;
    }
    ctx->pc = 0x236090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236098u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236090u, 0x236098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236098u;
label_236098:
    // 0x236098: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x236098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_23609c:
    // 0x23609c: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
label_2360a0:
    if (ctx->pc == 0x2360A0u) {
        ctx->pc = 0x2360A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23609Cu;
        // 0x2360a0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360A4u;
        goto label_2360a4;
    }
    ctx->pc = 0x23609Cu;
    {
        const bool branch_taken_0x23609c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2360A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23609Cu;
        // 0x2360a0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23609c) {
            ctx->pc = 0x236080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236080;
        }
    }
    ctx->pc = 0x2360A4u;
label_2360a4:
    // 0x2360a4: 0x1000000d  b           . + 4 + (0xD << 2)
label_2360a8:
    if (ctx->pc == 0x2360A8u) {
        ctx->pc = 0x2360A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360A4u;
        // 0x2360a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360ACu;
        goto label_2360ac;
    }
    ctx->pc = 0x2360A4u;
    {
        const bool branch_taken_0x2360a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2360A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360A4u;
        // 0x2360a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360a4) {
            ctx->pc = 0x2360DCu;
            goto label_2360dc;
        }
    }
    ctx->pc = 0x2360ACu;
label_2360ac:
    // 0x2360ac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2360b0:
    if (ctx->pc == 0x2360B0u) {
        ctx->pc = 0x2360B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360ACu;
        // 0x2360b0: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360B4u;
        goto label_2360b4;
    }
    ctx->pc = 0x2360ACu;
    {
        const bool branch_taken_0x2360ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2360ac) {
            ctx->pc = 0x2360B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2360ACu;
            // 0x2360b0: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2360B4u;
            goto label_2360b4;
        }
    }
    ctx->pc = 0x2360B4u;
label_2360b4:
    // 0x2360b4: 0x2603003c  addiu       $v1, $s0, 0x3C
    ctx->pc = 0x2360b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_2360b8:
    // 0x2360b8: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x2360b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2360bc:
    // 0x2360bc: 0x0  nop
    ctx->pc = 0x2360bcu;
    // NOP
label_2360c0:
    // 0x2360c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2360c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2360c4:
    // 0x2360c4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2360c8:
    if (ctx->pc == 0x2360C8u) {
        ctx->pc = 0x2360C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360C4u;
        // 0x2360c8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360CCu;
        goto label_2360cc;
    }
    ctx->pc = 0x2360C4u;
    {
        const bool branch_taken_0x2360c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2360c4) {
            ctx->pc = 0x2360C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2360C4u;
            // 0x2360c8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2360CCu;
            goto label_2360cc;
        }
    }
    ctx->pc = 0x2360CCu;
label_2360cc:
    // 0x2360cc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2360ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2360d0:
    // 0x2360d0: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
label_2360d4:
    if (ctx->pc == 0x2360D4u) {
        ctx->pc = 0x2360D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360D0u;
        // 0x2360d4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360D8u;
        goto label_2360d8;
    }
    ctx->pc = 0x2360D0u;
    {
        const bool branch_taken_0x2360d0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2360D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360D0u;
        // 0x2360d4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360d0) {
            ctx->pc = 0x2360C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2360c0;
        }
    }
    ctx->pc = 0x2360D8u;
label_2360d8:
    // 0x2360d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2360d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2360dc:
    // 0x2360dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2360dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2360e0:
    // 0x2360e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2360e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2360e4:
    // 0x2360e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2360e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2360e8:
    // 0x2360e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2360e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2360ec:
    // 0x2360ec: 0x3e00008  jr          $ra
label_2360f0:
    if (ctx->pc == 0x2360F0u) {
        ctx->pc = 0x2360F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360ECu;
        // 0x2360f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360F4u;
        goto label_2360f4;
    }
    ctx->pc = 0x2360ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2360F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360ECu;
        // 0x2360f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2360ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2360F4u;
label_2360f4:
    // 0x2360f4: 0x0  nop
    ctx->pc = 0x2360f4u;
    // NOP
    ctx->pc = 0x2360f8u;
}
