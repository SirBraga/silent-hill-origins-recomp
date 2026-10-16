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

// Function: sub_00194568
// Address: 0x194568 - 0x1947b0
void sub_00194568_0x194568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194568_0x194568");
#endif

    switch (ctx->pc) {
        case 0x194614u: goto label_194614;
        case 0x19461cu: goto label_19461c;
        case 0x194624u: goto label_194624;
        case 0x19462cu: goto label_19462c;
        case 0x194630u: goto label_194630;
        case 0x19463cu: goto label_19463c;
        case 0x19465cu: goto label_19465c;
        case 0x194684u: goto label_194684;
        case 0x19469cu: goto label_19469c;
        case 0x1946b4u: goto label_1946b4;
        case 0x1946ccu: goto label_1946cc;
        case 0x1946e4u: goto label_1946e4;
        case 0x1946fcu: goto label_1946fc;
        case 0x194714u: goto label_194714;
        case 0x19472cu: goto label_19472c;
        case 0x194744u: goto label_194744;
        case 0x19475cu: goto label_19475c;
        case 0x194774u: goto label_194774;
        case 0x194790u: goto label_194790;
        default: break;
    }

    ctx->pc = 0x194568u;

    // 0x194568: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x194568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19456c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19456cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x194570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x194574: 0x244235d0  addiu       $v0, $v0, 0x35D0
    ctx->pc = 0x194574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
    // 0x194578: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x194578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19457c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19457cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194580: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x194580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x194584: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x194584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194588: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x194588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19458c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19458cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x194590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194594: 0x246332d0  addiu       $v1, $v1, 0x32D0
    ctx->pc = 0x194594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13008));
    // 0x194598: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x194598u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x19459c: 0x26470028  addiu       $a3, $s2, 0x28
    ctx->pc = 0x19459cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x1945a0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1945a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1945a4: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x1945a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1945a8: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x1945a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x1945ac: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1945acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1945b0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1945b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1945b4: 0x26430018  addiu       $v1, $s2, 0x18
    ctx->pc = 0x1945b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x1945b8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1945b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1945bc: 0x2484f7a8  addiu       $a0, $a0, -0x858
    ctx->pc = 0x1945bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965160));
    // 0x1945c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1945c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1945c4: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1945c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1945c8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1945c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1945cc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1945ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1945d0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1945d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1945d4: 0x24c69a60  addiu       $a2, $a2, -0x65A0
    ctx->pc = 0x1945d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941280));
    // 0x1945d8: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x1945d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x1945dc: 0x24a59a40  addiu       $a1, $a1, -0x65C0
    ctx->pc = 0x1945dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941248));
    // 0x1945e0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1945e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1945e4: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x1945e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x1945e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1945e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1945ec: 0x265000b0  addiu       $s0, $s2, 0xB0
    ctx->pc = 0x1945ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x1945f0: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x1945f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x1945f4: 0x2413000f  addiu       $s3, $zero, 0xF
    ctx->pc = 0x1945f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1945f8: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1945f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x1945fc: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1945fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194600: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x194600u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x194604: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x194604u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x194608: 0xae460038  sw          $a2, 0x38($s2)
    ctx->pc = 0x194608u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 6));
    // 0x19460c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19460Cu;
    SET_GPR_U32(ctx, 31, 0x194614u);
    ctx->pc = 0x194610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19460Cu;
    // 0x194610: 0xae450004  sw          $a1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19460Cu, 0x194614u)) {
        return;
    }
    ctx->pc = 0x194614u;
label_194614:
    // 0x194614: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x194614u;
    SET_GPR_U32(ctx, 31, 0x19461Cu);
    ctx->pc = 0x194618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194614u;
    // 0x194618: 0x26440098  addiu       $a0, $s2, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x194614u, 0x19461Cu)) {
        return;
    }
    ctx->pc = 0x19461Cu;
label_19461c:
    // 0x19461c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19461Cu;
    SET_GPR_U32(ctx, 31, 0x194624u);
    ctx->pc = 0x194620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19461Cu;
    // 0x194620: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19461Cu, 0x194624u)) {
        return;
    }
    ctx->pc = 0x194624u;
label_194624:
    // 0x194624: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x194624u;
    SET_GPR_U32(ctx, 31, 0x19462Cu);
    ctx->pc = 0x194628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194624u;
    // 0x194628: 0x264400a8  addiu       $a0, $s2, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x194624u, 0x19462Cu)) {
        return;
    }
    ctx->pc = 0x19462Cu;
label_19462c:
    // 0x19462c: 0x0  nop
    ctx->pc = 0x19462cu;
    // NOP
label_194630:
    // 0x194630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194634: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x194634u;
    SET_GPR_U32(ctx, 31, 0x19463Cu);
    ctx->pc = 0x194638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194634u;
    // 0x194638: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x194634u, 0x19463Cu)) {
        return;
    }
    ctx->pc = 0x19463Cu;
label_19463c:
    // 0x19463c: 0x0  nop
    ctx->pc = 0x19463cu;
    // NOP
    // 0x194640: 0x1671fffb  bne         $s3, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x194640u;
    {
        const bool branch_taken_0x194640 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x194644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194640u;
        // 0x194644: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194640) {
            ctx->pc = 0x194630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194630;
        }
    }
    ctx->pc = 0x194648u;
    // 0x194648: 0x26510130  addiu       $s1, $s2, 0x130
    ctx->pc = 0x194648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
    // 0x19464c: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x19464cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x194650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194654: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x194654u;
    SET_GPR_U32(ctx, 31, 0x19465Cu);
    ctx->pc = 0x194658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194654u;
    // 0x194658: 0x26109970  addiu       $s0, $s0, -0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x194654u, 0x19465Cu)) {
        return;
    }
    ctx->pc = 0x19465Cu;
label_19465c:
    // 0x19465c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19465cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194660: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x194660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x194664: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x194664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x194668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19466c: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x19466cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x194670: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x194670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x194674: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x194674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x194678: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x194678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x19467c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x19467Cu;
    SET_GPR_U32(ctx, 31, 0x194684u);
    ctx->pc = 0x194680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19467Cu;
    // 0x194680: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x19467Cu, 0x194684u)) {
        return;
    }
    ctx->pc = 0x194684u;
label_194684:
    // 0x194684: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x194684u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x194688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19468c: 0x24c69960  addiu       $a2, $a2, -0x66A0
    ctx->pc = 0x19468cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941024));
    // 0x194690: 0x264500a0  addiu       $a1, $s2, 0xA0
    ctx->pc = 0x194690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x194694: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x194694u;
    SET_GPR_U32(ctx, 31, 0x19469Cu);
    ctx->pc = 0x194698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194694u;
    // 0x194698: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x194694u, 0x19469Cu)) {
        return;
    }
    ctx->pc = 0x19469Cu;
label_19469c:
    // 0x19469c: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x19469cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1946a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1946a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946a4: 0x24c69980  addiu       $a2, $a2, -0x6680
    ctx->pc = 0x1946a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941056));
    // 0x1946a8: 0x264500a8  addiu       $a1, $s2, 0xA8
    ctx->pc = 0x1946a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
    // 0x1946ac: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x1946ACu;
    SET_GPR_U32(ctx, 31, 0x1946B4u);
    ctx->pc = 0x1946B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1946ACu;
    // 0x1946b0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x1946ACu, 0x1946B4u)) {
        return;
    }
    ctx->pc = 0x1946B4u;
label_1946b4:
    // 0x1946b4: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1946b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1946b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1946b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946bc: 0x24c69990  addiu       $a2, $a2, -0x6670
    ctx->pc = 0x1946bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941072));
    // 0x1946c0: 0x264500b0  addiu       $a1, $s2, 0xB0
    ctx->pc = 0x1946c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x1946c4: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x1946C4u;
    SET_GPR_U32(ctx, 31, 0x1946CCu);
    ctx->pc = 0x1946C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1946C4u;
    // 0x1946c8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x1946C4u, 0x1946CCu)) {
        return;
    }
    ctx->pc = 0x1946CCu;
label_1946cc:
    // 0x1946cc: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1946ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1946d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1946d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946d4: 0x24c699a0  addiu       $a2, $a2, -0x6660
    ctx->pc = 0x1946d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941088));
    // 0x1946d8: 0x264500b8  addiu       $a1, $s2, 0xB8
    ctx->pc = 0x1946d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
    // 0x1946dc: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x1946DCu;
    SET_GPR_U32(ctx, 31, 0x1946E4u);
    ctx->pc = 0x1946E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1946DCu;
    // 0x1946e0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x1946DCu, 0x1946E4u)) {
        return;
    }
    ctx->pc = 0x1946E4u;
label_1946e4:
    // 0x1946e4: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1946e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1946e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1946e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946ec: 0x24c699b0  addiu       $a2, $a2, -0x6650
    ctx->pc = 0x1946ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941104));
    // 0x1946f0: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x1946f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1946f4: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x1946F4u;
    SET_GPR_U32(ctx, 31, 0x1946FCu);
    ctx->pc = 0x1946F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1946F4u;
    // 0x1946f8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x1946F4u, 0x1946FCu)) {
        return;
    }
    ctx->pc = 0x1946FCu;
label_1946fc:
    // 0x1946fc: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1946fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x194700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194704: 0x24c699c0  addiu       $a2, $a2, -0x6640
    ctx->pc = 0x194704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941120));
    // 0x194708: 0x264500c8  addiu       $a1, $s2, 0xC8
    ctx->pc = 0x194708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
    // 0x19470c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x19470Cu;
    SET_GPR_U32(ctx, 31, 0x194714u);
    ctx->pc = 0x194710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19470Cu;
    // 0x194710: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x19470Cu, 0x194714u)) {
        return;
    }
    ctx->pc = 0x194714u;
label_194714:
    // 0x194714: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x194714u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x194718: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19471c: 0x24c699d0  addiu       $a2, $a2, -0x6630
    ctx->pc = 0x19471cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941136));
    // 0x194720: 0x26450100  addiu       $a1, $s2, 0x100
    ctx->pc = 0x194720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x194724: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x194724u;
    SET_GPR_U32(ctx, 31, 0x19472Cu);
    ctx->pc = 0x194728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194724u;
    // 0x194728: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x194724u, 0x19472Cu)) {
        return;
    }
    ctx->pc = 0x19472Cu;
label_19472c:
    // 0x19472c: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x19472cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x194730: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194734: 0x24c699e0  addiu       $a2, $a2, -0x6620
    ctx->pc = 0x194734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941152));
    // 0x194738: 0x26450108  addiu       $a1, $s2, 0x108
    ctx->pc = 0x194738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x19473c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x19473Cu;
    SET_GPR_U32(ctx, 31, 0x194744u);
    ctx->pc = 0x194740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19473Cu;
    // 0x194740: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x19473Cu, 0x194744u)) {
        return;
    }
    ctx->pc = 0x194744u;
label_194744:
    // 0x194744: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x194744u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x194748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19474c: 0x24c699f0  addiu       $a2, $a2, -0x6610
    ctx->pc = 0x19474cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941168));
    // 0x194750: 0x26450110  addiu       $a1, $s2, 0x110
    ctx->pc = 0x194750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x194754: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x194754u;
    SET_GPR_U32(ctx, 31, 0x19475Cu);
    ctx->pc = 0x194758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194754u;
    // 0x194758: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x194754u, 0x19475Cu)) {
        return;
    }
    ctx->pc = 0x19475Cu;
label_19475c:
    // 0x19475c: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x19475cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x194760: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x194760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194764: 0x24c69a00  addiu       $a2, $a2, -0x6600
    ctx->pc = 0x194764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941184));
    // 0x194768: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19476c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x19476Cu;
    SET_GPR_U32(ctx, 31, 0x194774u);
    ctx->pc = 0x194770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19476Cu;
    // 0x194770: 0x26450118  addiu       $a1, $s2, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x19476Cu, 0x194774u)) {
        return;
    }
    ctx->pc = 0x194774u;
label_194774:
    // 0x194774: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x194774u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x194778: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x194778u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x19477c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19477cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194784: 0x24c69a10  addiu       $a2, $a2, -0x65F0
    ctx->pc = 0x194784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941200));
    // 0x194788: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x194788u;
    SET_GPR_U32(ctx, 31, 0x194790u);
    ctx->pc = 0x19478Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194788u;
    // 0x19478c: 0x24e79a28  addiu       $a3, $a3, -0x65D8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x194788u, 0x194790u)) {
        return;
    }
    ctx->pc = 0x194790u;
label_194790:
    // 0x194790: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x194790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194794: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x194794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194798: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x194798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19479c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19479cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1947a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1947a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1947a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1947a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1947a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1947A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1947ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947A8u;
        // 0x1947ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1947A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1947B0u;
}
