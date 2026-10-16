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

// Function: sub_001E5000
// Address: 0x1e5000 - 0x1e5218
void sub_001E5000_0x1e5000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5000_0x1e5000");
#endif

    switch (ctx->pc) {
        case 0x1e5040u: goto label_1e5040;
        case 0x1e5088u: goto label_1e5088;
        case 0x1e5090u: goto label_1e5090;
        case 0x1e50d0u: goto label_1e50d0;
        case 0x1e50e8u: goto label_1e50e8;
        case 0x1e5130u: goto label_1e5130;
        case 0x1e5144u: goto label_1e5144;
        case 0x1e5188u: goto label_1e5188;
        case 0x1e51a8u: goto label_1e51a8;
        case 0x1e51e4u: goto label_1e51e4;
        default: break;
    }

    ctx->pc = 0x1e5000u;

    // 0x1e5000: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e5000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e5004: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e5004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e5008: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1e5008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1e500c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1e500cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5010: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1e5010u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5014: 0x24050156  addiu       $a1, $zero, 0x156
    ctx->pc = 0x1e5014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x1e5018: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1e5018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1e501c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1e501cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1e5020: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1e5020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1e5024: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1e5024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1e5028: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1e5028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1e502c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1e502cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1e5030: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1e5030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1e5034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e5034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e5038: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5038u;
    SET_GPR_U32(ctx, 31, 0x1E5040u);
    ctx->pc = 0x1E503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5038u;
    // 0x1e503c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5038u, 0x1E5040u)) {
        return;
    }
    ctx->pc = 0x1E5040u;
label_1e5040:
    // 0x1e5040: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5044: 0x26a20003  addiu       $v0, $s5, 0x3
    ctx->pc = 0x1e5044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x1e5048: 0x75202a  slt         $a0, $v1, $s5
    ctx->pc = 0x1e5048u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1e504c: 0x26e50003  addiu       $a1, $s7, 0x3
    ctx->pc = 0x1e504cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 3));
    // 0x1e5050: 0x77182a  slt         $v1, $v1, $s7
    ctx->pc = 0x1e5050u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1e5054: 0x2a4100b  movn        $v0, $s5, $a0
    ctx->pc = 0x1e5054u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21));
    // 0x1e5058: 0x2e3280b  movn        $a1, $s7, $v1
    ctx->pc = 0x1e5058u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23));
    // 0x1e505c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e505cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1e5060: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1e5060u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1e5064: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e5064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e5068: 0x24a5013f  addiu       $a1, $a1, 0x13F
    ctx->pc = 0x1e5068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 319));
    // 0x1e506c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1e506cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1e5070: 0x2403140a  addiu       $v1, $zero, 0x140A
    ctx->pc = 0x1e5070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5130));
    // 0x1e5074: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x1e5074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x1e5078: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e5078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e507c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1e507cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e5080: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5080u;
    SET_GPR_U32(ctx, 31, 0x1E5088u);
    ctx->pc = 0x1E5084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5080u;
    // 0x1e5084: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5080u, 0x1E5088u)) {
        return;
    }
    ctx->pc = 0x1E5088u;
label_1e5088:
    // 0x1e5088: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e5088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e508c: 0x41240  sll         $v0, $a0, 9
    ctx->pc = 0x1e508cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
label_1e5090:
    // 0x1e5090: 0x4a1c0  sll         $s4, $a0, 7
    ctx->pc = 0x1e5090u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1e5094: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e5094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e5098: 0x41ac0  sll         $v1, $a0, 11
    ctx->pc = 0x1e5098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x1e509c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e509cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e50a0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e50a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1e50a4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e50a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1e50a8: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x1e50a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1e50ac: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1e50acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x1e50b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e50b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e50b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e50b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e50b8: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x1e50b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1e50bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e50bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e50c0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1e50c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1e50c4: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1e50c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1e50c8: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x1e50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e50cc: 0x0  nop
    ctx->pc = 0x1e50ccu;
    // NOP
label_1e50d0:
    // 0x1e50d0: 0x247e0001  addiu       $fp, $v1, 0x1
    ctx->pc = 0x1e50d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e50d4: 0x24530140  addiu       $s3, $v0, 0x140
    ctx->pc = 0x1e50d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1e50d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e50d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e50dc: 0x3b200  sll         $s6, $v1, 8
    ctx->pc = 0x1e50dcu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1e50e0: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x1e50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1e50e4: 0x0  nop
    ctx->pc = 0x1e50e4u;
    // NOP
label_1e50e8:
    // 0x1e50e8: 0x2b48023  subu        $s0, $s5, $s4
    ctx->pc = 0x1e50e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x1e50ec: 0x2c28821  addu        $s1, $s6, $v0
    ctx->pc = 0x1e50ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1e50f0: 0x2a030081  slti        $v1, $s0, 0x81
    ctx->pc = 0x1e50f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1e50f4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e50f8: 0x237202a  slt         $a0, $s1, $s7
    ctx->pc = 0x1e50f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1e50fc: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x1e50fcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
    // 0x1e5100: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1E5100u;
    {
        const bool branch_taken_0x1e5100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5100u;
        // 0x1e5104: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5100) {
            ctx->pc = 0x1E51A8u;
            goto label_1e51a8;
        }
    }
    ctx->pc = 0x1E5108u;
    // 0x1e5108: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e5108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e510c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E510Cu;
    {
        const bool branch_taken_0x1e510c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E510Cu;
        // 0x1e5110: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e510c) {
            ctx->pc = 0x1E51A8u;
            goto label_1e51a8;
        }
    }
    ctx->pc = 0x1E5114u;
    // 0x1e5114: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x1e5114u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5118: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e5118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e511c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e511cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5120: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e5120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e5124: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e5124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e5128: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5128u;
    SET_GPR_U32(ctx, 31, 0x1E5130u);
    ctx->pc = 0x1E512Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5128u;
    // 0x1e512c: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5128u, 0x1E5130u)) {
        return;
    }
    ctx->pc = 0x1E5130u;
label_1e5130:
    // 0x1e5130: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x1e5130u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5134: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1e5134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1e5138: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e5138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e513c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E513Cu;
    SET_GPR_U32(ctx, 31, 0x1E5144u);
    ctx->pc = 0x1E5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E513Cu;
    // 0x1e5140: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E513Cu, 0x1E5144u)) {
        return;
    }
    ctx->pc = 0x1E5144u;
label_1e5144:
    // 0x1e5144: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e5144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5148: 0x26050003  addiu       $a1, $s0, 0x3
    ctx->pc = 0x1e5148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1e514c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1e514cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1e5150: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1e5150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1e5154: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x1e5154u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16));
    // 0x1e5158: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1e5158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1e515c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1e515cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5160: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1e5160u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1e5164: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e5164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e5168: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e5168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e516c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1e516cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e5170: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1e5170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e5174: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e5174u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e5178: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e5178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e517c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e517cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e5180: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5180u;
    SET_GPR_U32(ctx, 31, 0x1E5188u);
    ctx->pc = 0x1E5184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5180u;
    // 0x1e5184: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5180u, 0x1E5188u)) {
        return;
    }
    ctx->pc = 0x1E5188u;
label_1e5188:
    // 0x1e5188: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x1e5188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1e518c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1e518cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1e5190: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e5190u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e5194: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1e5194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1e5198: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e5198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e519c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e519cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e51a0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E51A0u;
    SET_GPR_U32(ctx, 31, 0x1E51A8u);
    ctx->pc = 0x1E51A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E51A0u;
    // 0x1e51a4: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E51A0u, 0x1E51A8u)) {
        return;
    }
    ctx->pc = 0x1E51A8u;
label_1e51a8:
    // 0x1e51a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e51a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e51ac: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1e51acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e51b0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1E51B0u;
    {
        const bool branch_taken_0x1e51b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51B0u;
        // 0x1e51b4: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51b0) {
            ctx->pc = 0x1E50E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e50e8;
        }
    }
    ctx->pc = 0x1E51B8u;
    // 0x1e51b8: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x1e51b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e51bc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1e51bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e51c0: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1E51C0u;
    {
        const bool branch_taken_0x1e51c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51C0u;
        // 0x1e51c4: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51c0) {
            ctx->pc = 0x1E50D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e50d0;
        }
    }
    ctx->pc = 0x1E51C8u;
    // 0x1e51c8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1e51c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e51cc: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1e51ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e51d0: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1E51D0u;
    {
        const bool branch_taken_0x1e51d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51D0u;
        // 0x1e51d4: 0x41240  sll         $v0, $a0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51d0) {
            ctx->pc = 0x1E5090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5090;
        }
    }
    ctx->pc = 0x1E51D8u;
    // 0x1e51d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1e51d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e51dc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E51DCu;
    SET_GPR_U32(ctx, 31, 0x1E51E4u);
    ctx->pc = 0x1E51E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E51DCu;
    // 0x1e51e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E51DCu, 0x1E51E4u)) {
        return;
    }
    ctx->pc = 0x1E51E4u;
label_1e51e4:
    // 0x1e51e4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1e51e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e51e8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1e51e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e51ec: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1e51ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e51f0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1e51f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e51f4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1e51f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e51f8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e51f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e51fc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1e51fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5200: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1e5200u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5204: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1e5204u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5208: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e5208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e520c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E520Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E520Cu;
        // 0x1e5210: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E520Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5214u;
    // 0x1e5214: 0x0  nop
    ctx->pc = 0x1e5214u;
    // NOP
    ctx->pc = 0x1e5218u;
}
