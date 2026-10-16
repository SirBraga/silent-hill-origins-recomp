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

// Function: sub_00181FE0
// Address: 0x181fe0 - 0x1821a0
void sub_00181FE0_0x181fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181FE0_0x181fe0");
#endif

    switch (ctx->pc) {
        case 0x182060u: goto label_182060;
        case 0x182070u: goto label_182070;
        case 0x18207cu: goto label_18207c;
        case 0x182098u: goto label_182098;
        default: break;
    }

    ctx->pc = 0x181fe0u;

    // 0x181fe0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x181fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x181fe4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x181fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x181fe8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x181fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x181fec: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x181fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x181ff0: 0x8c46fa8c  lw          $a2, -0x574($v0)
    ctx->pc = 0x181ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BFA8Cu));
    // 0x181ff4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x181ff4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ff8: 0x8ca2fa84  lw          $v0, -0x57C($a1)
    ctx->pc = 0x181ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BFA84u));
    // 0x181ffc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x181ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x182000: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x182000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x182004: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x182004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x182008: 0x468023  subu        $s0, $v0, $a2
    ctx->pc = 0x182008u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18200c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x18200cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x182010: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x182010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182014: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x182014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x182018: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x182018u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18201c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x18201cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x182020: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x182020u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182024: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x182024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x182028: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x182028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x18202c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x18202cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x182030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182034: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x182034u;
    {
        const bool branch_taken_0x182034 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x182038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182034u;
        // 0x182038: 0xac66fa88  sw          $a2, -0x578($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965896), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182034) {
            ctx->pc = 0x182044u;
            goto label_182044;
        }
    }
    ctx->pc = 0x18203Cu;
    // 0x18203c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x18203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x182040: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x182040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_182044:
    // 0x182044: 0x2a021000  slti        $v0, $s0, 0x1000
    ctx->pc = 0x182044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x182048: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x182048u;
    {
        const bool branch_taken_0x182048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182048u;
        // 0x18204c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182048) {
            ctx->pc = 0x1820D8u;
            goto label_1820d8;
        }
    }
    ctx->pc = 0x182050u;
    // 0x182050: 0x3c12006c  lui         $s2, 0x6C
    ctx->pc = 0x182050u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
    // 0x182054: 0x24563b80  addiu       $s6, $v0, 0x3B80
    ctx->pc = 0x182054u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
    // 0x182058: 0x3c150003  lui         $s5, 0x3
    ctx->pc = 0x182058u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)3 << 16));
    // 0x18205c: 0x8e453b80  lw          $a1, 0x3B80($s2)
    ctx->pc = 0x18205cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6C3B80u));
label_182060:
    // 0x182060: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x182060u;
    {
        const bool branch_taken_0x182060 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x182064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182060u;
        // 0x182064: 0x2c52823  subu        $a1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182060) {
            ctx->pc = 0x18208Cu;
            goto label_18208c;
        }
    }
    ctx->pc = 0x182068u;
    // 0x182068: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x182068u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x18206c: 0x0  nop
    ctx->pc = 0x18206cu;
    // NOP
label_182070:
    // 0x182070: 0x2624fb80  addiu       $a0, $s1, -0x480
    ctx->pc = 0x182070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966144));
    // 0x182074: 0xc060bb4  jal         func_182ED0
    ctx->pc = 0x182074u;
    SET_GPR_U32(ctx, 31, 0x18207Cu);
    ctx->pc = 0x182078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182074u;
    // 0x182078: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182ED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182ED0u, 0x182074u, 0x18207Cu)) {
        return;
    }
    ctx->pc = 0x18207Cu;
label_18207c:
    // 0x18207c: 0x0  nop
    ctx->pc = 0x18207cu;
    // NOP
    // 0x182080: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x182080u;
    {
        const bool branch_taken_0x182080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182080u;
        // 0x182084: 0xae423b80  sw          $v0, 0x3B80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 15232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182080) {
            ctx->pc = 0x182070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182070;
        }
    }
    ctx->pc = 0x182088u;
    // 0x182088: 0x2625fb80  addiu       $a1, $s1, -0x480
    ctx->pc = 0x182088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966144));
label_18208c:
    // 0x18208c: 0x8e463b80  lw          $a2, 0x3B80($s2)
    ctx->pc = 0x18208cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15232)));
    // 0x182090: 0xc0bf6aa  jal         func_2FDAA8
    ctx->pc = 0x182090u;
    SET_GPR_U32(ctx, 31, 0x182098u);
    ctx->pc = 0x182094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182090u;
    // 0x182094: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDAA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDAA8u, 0x182090u, 0x182098u)) {
        return;
    }
    ctx->pc = 0x182098u;
label_182098:
    // 0x182098: 0x8e433b80  lw          $v1, 0x3B80($s2)
    ctx->pc = 0x182098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15232)));
    // 0x18209c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18209cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1820a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1820A0u;
    {
        const bool branch_taken_0x1820a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1820A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820A0u;
        // 0x1820a4: 0xae433b80  sw          $v1, 0x3B80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 15232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820a0) {
            ctx->pc = 0x1820B0u;
            goto label_1820b0;
        }
    }
    ctx->pc = 0x1820A8u;
    // 0x1820a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1820A8u;
    {
        const bool branch_taken_0x1820a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1820ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820A8u;
        // 0x1820ac: 0x2610000f  addiu       $s0, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820a8) {
            ctx->pc = 0x1820D8u;
            goto label_1820d8;
        }
    }
    ctx->pc = 0x1820B0u;
label_1820b0:
    // 0x1820b0: 0x8ee3fa84  lw          $v1, -0x57C($s7)
    ctx->pc = 0x1820b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294965892)));
    // 0x1820b4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1820b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1820b8: 0x8e82fa8c  lw          $v0, -0x574($s4)
    ctx->pc = 0x1820b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965900)));
    // 0x1820bc: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x1820bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1820c0: 0x90202a  slt         $a0, $a0, $s0
    ctx->pc = 0x1820c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1820c4: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x1820c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x1820c8: 0x44800a  movz        $s0, $v0, $a0
    ctx->pc = 0x1820c8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
    // 0x1820cc: 0x2a031000  slti        $v1, $s0, 0x1000
    ctx->pc = 0x1820ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x1820d0: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1820D0u;
    {
        const bool branch_taken_0x1820d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1820D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820D0u;
        // 0x1820d4: 0x8e453b80  lw          $a1, 0x3B80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820d0) {
            ctx->pc = 0x182060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182060;
        }
    }
    ctx->pc = 0x1820D8u;
label_1820d8:
    // 0x1820d8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1820d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1820dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1820dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1820e0: 0x2032824  and         $a1, $s0, $v1
    ctx->pc = 0x1820e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1820e4: 0x8c44fa80  lw          $a0, -0x580($v0)
    ctx->pc = 0x1820e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965888)));
    // 0x1820e8: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1820e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1820ec: 0x8fc6fa88  lw          $a2, -0x578($fp)
    ctx->pc = 0x1820ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294965896)));
    // 0x1820f0: 0x28a31001  slti        $v1, $a1, 0x1001
    ctx->pc = 0x1820f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x1820f4: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x1820f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x1820f8: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x1820f8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
    // 0x1820fc: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x1820fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x182100: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x182100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x182104: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x182104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x182108: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x182108u;
    {
        const bool branch_taken_0x182108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182108u;
        // 0x18210c: 0xc71023  subu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182108) {
            ctx->pc = 0x182114u;
            goto label_182114;
        }
    }
    ctx->pc = 0x182110u;
    // 0x182110: 0x822823  subu        $a1, $a0, $v0
    ctx->pc = 0x182110u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_182114:
    // 0x182114: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x182114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x182118: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x182118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x18211c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x18211cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x182120: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x182120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x182124: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x182124u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5));
    // 0x182128: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x182128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x18212c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x18212cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x182130: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x182130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x182134: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x182138: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x182138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x18213c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x18213cu;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 6)); // MMIO: 0x1000b410
    // 0x182140: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x182140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x182144: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x182144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x182148: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x182148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x18214c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18214cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x182150: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x182150u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 2)); // MMIO: 0x1000b400
    // 0x182154: 0xa8202b  sltu        $a0, $a1, $t0
    ctx->pc = 0x182154u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x182158: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x182158u;
    {
        const bool branch_taken_0x182158 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182158u;
        // 0x18215c: 0xae85fa8c  sw          $a1, -0x574($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294965900), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182158) {
            ctx->pc = 0x182168u;
            goto label_182168;
        }
    }
    ctx->pc = 0x182160u;
    // 0x182160: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x182160u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x182164: 0xae82fa8c  sw          $v0, -0x574($s4)
    ctx->pc = 0x182164u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965900), GPR_U32(ctx, 2));
label_182168:
    // 0x182168: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x182168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18216c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18216cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182170: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x182170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x182174: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x182174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182178: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x182178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18217c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18217cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182180: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x182180u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182184: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x182184u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182188: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x182188u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18218c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x18218cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182194: 0x3e00008  jr          $ra
    ctx->pc = 0x182194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182194u;
        // 0x182198: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18219Cu;
    // 0x18219c: 0x0  nop
    ctx->pc = 0x18219cu;
    // NOP
    ctx->pc = 0x1821a0u;
}
