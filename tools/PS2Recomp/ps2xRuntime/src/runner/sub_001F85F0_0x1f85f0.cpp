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

// Function: sub_001F85F0
// Address: 0x1f85f0 - 0x1f8810
void sub_001F85F0_0x1f85f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F85F0_0x1f85f0");
#endif

    switch (ctx->pc) {
        case 0x1f85f0u: goto label_1f85f0;
        case 0x1f85f4u: goto label_1f85f4;
        case 0x1f85f8u: goto label_1f85f8;
        case 0x1f85fcu: goto label_1f85fc;
        case 0x1f8600u: goto label_1f8600;
        case 0x1f8604u: goto label_1f8604;
        case 0x1f8608u: goto label_1f8608;
        case 0x1f860cu: goto label_1f860c;
        case 0x1f8610u: goto label_1f8610;
        case 0x1f8614u: goto label_1f8614;
        case 0x1f8618u: goto label_1f8618;
        case 0x1f861cu: goto label_1f861c;
        case 0x1f8620u: goto label_1f8620;
        case 0x1f8624u: goto label_1f8624;
        case 0x1f8628u: goto label_1f8628;
        case 0x1f862cu: goto label_1f862c;
        case 0x1f8630u: goto label_1f8630;
        case 0x1f8634u: goto label_1f8634;
        case 0x1f8638u: goto label_1f8638;
        case 0x1f863cu: goto label_1f863c;
        case 0x1f8640u: goto label_1f8640;
        case 0x1f8644u: goto label_1f8644;
        case 0x1f8648u: goto label_1f8648;
        case 0x1f864cu: goto label_1f864c;
        case 0x1f8650u: goto label_1f8650;
        case 0x1f8654u: goto label_1f8654;
        case 0x1f8658u: goto label_1f8658;
        case 0x1f865cu: goto label_1f865c;
        case 0x1f8660u: goto label_1f8660;
        case 0x1f8664u: goto label_1f8664;
        case 0x1f8668u: goto label_1f8668;
        case 0x1f866cu: goto label_1f866c;
        case 0x1f8670u: goto label_1f8670;
        case 0x1f8674u: goto label_1f8674;
        case 0x1f8678u: goto label_1f8678;
        case 0x1f867cu: goto label_1f867c;
        case 0x1f8680u: goto label_1f8680;
        case 0x1f8684u: goto label_1f8684;
        case 0x1f8688u: goto label_1f8688;
        case 0x1f868cu: goto label_1f868c;
        case 0x1f8690u: goto label_1f8690;
        case 0x1f8694u: goto label_1f8694;
        case 0x1f8698u: goto label_1f8698;
        case 0x1f869cu: goto label_1f869c;
        case 0x1f86a0u: goto label_1f86a0;
        case 0x1f86a4u: goto label_1f86a4;
        case 0x1f86a8u: goto label_1f86a8;
        case 0x1f86acu: goto label_1f86ac;
        case 0x1f86b0u: goto label_1f86b0;
        case 0x1f86b4u: goto label_1f86b4;
        case 0x1f86b8u: goto label_1f86b8;
        case 0x1f86bcu: goto label_1f86bc;
        case 0x1f86c0u: goto label_1f86c0;
        case 0x1f86c4u: goto label_1f86c4;
        case 0x1f86c8u: goto label_1f86c8;
        case 0x1f86ccu: goto label_1f86cc;
        case 0x1f86d0u: goto label_1f86d0;
        case 0x1f86d4u: goto label_1f86d4;
        case 0x1f86d8u: goto label_1f86d8;
        case 0x1f86dcu: goto label_1f86dc;
        case 0x1f86e0u: goto label_1f86e0;
        case 0x1f86e4u: goto label_1f86e4;
        case 0x1f86e8u: goto label_1f86e8;
        case 0x1f86ecu: goto label_1f86ec;
        case 0x1f86f0u: goto label_1f86f0;
        case 0x1f86f4u: goto label_1f86f4;
        case 0x1f86f8u: goto label_1f86f8;
        case 0x1f86fcu: goto label_1f86fc;
        case 0x1f8700u: goto label_1f8700;
        case 0x1f8704u: goto label_1f8704;
        case 0x1f8708u: goto label_1f8708;
        case 0x1f870cu: goto label_1f870c;
        case 0x1f8710u: goto label_1f8710;
        case 0x1f8714u: goto label_1f8714;
        case 0x1f8718u: goto label_1f8718;
        case 0x1f871cu: goto label_1f871c;
        case 0x1f8720u: goto label_1f8720;
        case 0x1f8724u: goto label_1f8724;
        case 0x1f8728u: goto label_1f8728;
        case 0x1f872cu: goto label_1f872c;
        case 0x1f8730u: goto label_1f8730;
        case 0x1f8734u: goto label_1f8734;
        case 0x1f8738u: goto label_1f8738;
        case 0x1f873cu: goto label_1f873c;
        case 0x1f8740u: goto label_1f8740;
        case 0x1f8744u: goto label_1f8744;
        case 0x1f8748u: goto label_1f8748;
        case 0x1f874cu: goto label_1f874c;
        case 0x1f8750u: goto label_1f8750;
        case 0x1f8754u: goto label_1f8754;
        case 0x1f8758u: goto label_1f8758;
        case 0x1f875cu: goto label_1f875c;
        case 0x1f8760u: goto label_1f8760;
        case 0x1f8764u: goto label_1f8764;
        case 0x1f8768u: goto label_1f8768;
        case 0x1f876cu: goto label_1f876c;
        case 0x1f8770u: goto label_1f8770;
        case 0x1f8774u: goto label_1f8774;
        case 0x1f8778u: goto label_1f8778;
        case 0x1f877cu: goto label_1f877c;
        case 0x1f8780u: goto label_1f8780;
        case 0x1f8784u: goto label_1f8784;
        case 0x1f8788u: goto label_1f8788;
        case 0x1f878cu: goto label_1f878c;
        case 0x1f8790u: goto label_1f8790;
        case 0x1f8794u: goto label_1f8794;
        case 0x1f8798u: goto label_1f8798;
        case 0x1f879cu: goto label_1f879c;
        case 0x1f87a0u: goto label_1f87a0;
        case 0x1f87a4u: goto label_1f87a4;
        case 0x1f87a8u: goto label_1f87a8;
        case 0x1f87acu: goto label_1f87ac;
        case 0x1f87b0u: goto label_1f87b0;
        case 0x1f87b4u: goto label_1f87b4;
        case 0x1f87b8u: goto label_1f87b8;
        case 0x1f87bcu: goto label_1f87bc;
        case 0x1f87c0u: goto label_1f87c0;
        case 0x1f87c4u: goto label_1f87c4;
        case 0x1f87c8u: goto label_1f87c8;
        case 0x1f87ccu: goto label_1f87cc;
        case 0x1f87d0u: goto label_1f87d0;
        case 0x1f87d4u: goto label_1f87d4;
        case 0x1f87d8u: goto label_1f87d8;
        case 0x1f87dcu: goto label_1f87dc;
        case 0x1f87e0u: goto label_1f87e0;
        case 0x1f87e4u: goto label_1f87e4;
        case 0x1f87e8u: goto label_1f87e8;
        case 0x1f87ecu: goto label_1f87ec;
        case 0x1f87f0u: goto label_1f87f0;
        case 0x1f87f4u: goto label_1f87f4;
        case 0x1f87f8u: goto label_1f87f8;
        case 0x1f87fcu: goto label_1f87fc;
        case 0x1f8800u: goto label_1f8800;
        case 0x1f8804u: goto label_1f8804;
        case 0x1f8808u: goto label_1f8808;
        case 0x1f880cu: goto label_1f880c;
        default: break;
    }

    ctx->pc = 0x1f85f0u;

label_1f85f0:
    // 0x1f85f0: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x1f85f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_1f85f4:
    // 0x1f85f4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f85f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
label_1f85f8:
    // 0x1f85f8: 0xffbe06d0  sd          $fp, 0x6D0($sp)
    ctx->pc = 0x1f85f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1744), GPR_U64(ctx, 30));
label_1f85fc:
    // 0x1f85fc: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x1f85fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_1f8600:
    // 0x1f8600: 0xffb706c0  sd          $s7, 0x6C0($sp)
    ctx->pc = 0x1f8600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1728), GPR_U64(ctx, 23));
label_1f8604:
    // 0x1f8604: 0xffb606b0  sd          $s6, 0x6B0($sp)
    ctx->pc = 0x1f8604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1712), GPR_U64(ctx, 22));
label_1f8608:
    // 0x1f8608: 0xffb506a0  sd          $s5, 0x6A0($sp)
    ctx->pc = 0x1f8608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 21));
label_1f860c:
    // 0x1f860c: 0xffb40690  sd          $s4, 0x690($sp)
    ctx->pc = 0x1f860cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 20));
label_1f8610:
    // 0x1f8610: 0xffb30680  sd          $s3, 0x680($sp)
    ctx->pc = 0x1f8610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 19));
label_1f8614:
    // 0x1f8614: 0xffb20670  sd          $s2, 0x670($sp)
    ctx->pc = 0x1f8614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 18));
label_1f8618:
    // 0x1f8618: 0xffb10660  sd          $s1, 0x660($sp)
    ctx->pc = 0x1f8618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 17));
label_1f861c:
    // 0x1f861c: 0xffb00650  sd          $s0, 0x650($sp)
    ctx->pc = 0x1f861cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 16));
label_1f8620:
    // 0x1f8620: 0xe7bf0748  swc1        $f31, 0x748($sp)
    ctx->pc = 0x1f8620u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1864), bits); }
label_1f8624:
    // 0x1f8624: 0xe7be0740  swc1        $f30, 0x740($sp)
    ctx->pc = 0x1f8624u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_1f8628:
    // 0x1f8628: 0xe7bd0738  swc1        $f29, 0x738($sp)
    ctx->pc = 0x1f8628u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_1f862c:
    // 0x1f862c: 0xe7bc0730  swc1        $f28, 0x730($sp)
    ctx->pc = 0x1f862cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_1f8630:
    // 0x1f8630: 0xe7bb0728  swc1        $f27, 0x728($sp)
    ctx->pc = 0x1f8630u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_1f8634:
    // 0x1f8634: 0xe7ba0720  swc1        $f26, 0x720($sp)
    ctx->pc = 0x1f8634u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_1f8638:
    // 0x1f8638: 0xe7b90718  swc1        $f25, 0x718($sp)
    ctx->pc = 0x1f8638u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_1f863c:
    // 0x1f863c: 0xe7b80710  swc1        $f24, 0x710($sp)
    ctx->pc = 0x1f863cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_1f8640:
    // 0x1f8640: 0xe7b70708  swc1        $f23, 0x708($sp)
    ctx->pc = 0x1f8640u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_1f8644:
    // 0x1f8644: 0xe7b60700  swc1        $f22, 0x700($sp)
    ctx->pc = 0x1f8644u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_1f8648:
    // 0x1f8648: 0xe7b506f8  swc1        $f21, 0x6F8($sp)
    ctx->pc = 0x1f8648u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_1f864c:
    // 0x1f864c: 0xe7b406f0  swc1        $f20, 0x6F0($sp)
    ctx->pc = 0x1f864cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_1f8650:
    // 0x1f8650: 0x8c62ec54  lw          $v0, -0x13AC($v1)
    ctx->pc = 0x1f8650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962260)));
label_1f8654:
    // 0x1f8654: 0x40f809  jalr        $v0
label_1f8658:
    if (ctx->pc == 0x1F8658u) {
        ctx->pc = 0x1F8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8654u;
        // 0x1f8658: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F865Cu;
        goto label_1f865c;
    }
    ctx->pc = 0x1F8654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F865Cu);
        ctx->pc = 0x1F8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8654u;
        // 0x1f8658: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8654u, 0x1F865Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F865Cu;
label_1f865c:
    // 0x1f865c: 0xafc20640  sw          $v0, 0x640($fp)
    ctx->pc = 0x1f865cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1600), GPR_U32(ctx, 2));
label_1f8660:
    // 0x1f8660: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f8660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f8664:
    // 0x1f8664: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f8664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1f8668:
    // 0x1f8668: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x1f8668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1f866c:
    // 0x1f866c: 0xafc20644  sw          $v0, 0x644($fp)
    ctx->pc = 0x1f866cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1604), GPR_U32(ctx, 2));
label_1f8670:
    // 0x1f8670: 0xafc50648  sw          $a1, 0x648($fp)
    ctx->pc = 0x1f8670u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1608), GPR_U32(ctx, 5));
label_1f8674:
    // 0x1f8674: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f8674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f8678:
    // 0x1f8678: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1f867c:
    if (ctx->pc == 0x1F867Cu) {
        ctx->pc = 0x1F867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8678u;
        // 0x1f867c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8680u;
        goto label_1f8680;
    }
    ctx->pc = 0x1F8678u;
    {
        const bool branch_taken_0x1f8678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8678u;
        // 0x1f867c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8678) {
            ctx->pc = 0x1F8718u;
            goto label_1f8718;
        }
    }
    ctx->pc = 0x1F8680u;
label_1f8680:
    // 0x1f8680: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x1f8680u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_1f8684:
    // 0x1f8684: 0x244286a8  addiu       $v0, $v0, -0x7958
    ctx->pc = 0x1f8684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936232));
label_1f8688:
    // 0x1f8688: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x1f8688u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_1f868c:
    // 0x1f868c: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x1f868cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_1f8690:
    // 0x1f8690: 0xafde0008  sw          $fp, 0x8($fp)
    ctx->pc = 0x1f8690u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 30));
label_1f8694:
    // 0x1f8694: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f8694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f8698:
    // 0x1f8698: 0xafde064c  sw          $fp, 0x64C($fp)
    ctx->pc = 0x1f8698u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1612), GPR_U32(ctx, 30));
label_1f869c:
    // 0x1f869c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f869cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f86a0:
    // 0x1f86a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f86a4:
    if (ctx->pc == 0x1F86A4u) {
        ctx->pc = 0x1F86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86A0u;
        // 0x1f86a4: 0xac7d0008  sw          $sp, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F86A8u;
        goto label_1f86a8;
    }
    ctx->pc = 0x1F86A0u;
    {
        const bool branch_taken_0x1f86a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86A0u;
        // 0x1f86a4: 0xac7d0008  sw          $sp, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86a0) {
            ctx->pc = 0x1F86ACu;
            goto label_1f86ac;
        }
    }
    ctx->pc = 0x1F86A8u;
label_1f86a8:
    // 0x1f86a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f86ac:
    // 0x1f86ac: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1f86b0:
    if (ctx->pc == 0x1F86B0u) {
        ctx->pc = 0x1F86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86ACu;
        // 0x1f86b0: 0x8fc2064c  lw          $v0, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F86B4u;
        goto label_1f86b4;
    }
    ctx->pc = 0x1F86ACu;
    {
        const bool branch_taken_0x1f86ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86ACu;
        // 0x1f86b0: 0x8fc2064c  lw          $v0, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86ac) {
            ctx->pc = 0x1F8710u;
            goto label_1f8710;
        }
    }
    ctx->pc = 0x1F86B4u;
label_1f86b4:
    // 0x1f86b4: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x1f86b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_1f86b8:
    // 0x1f86b8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f86b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1f86bc:
    // 0x1f86bc: 0x8fc50648  lw          $a1, 0x648($fp)
    ctx->pc = 0x1f86bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_1f86c0:
    // 0x1f86c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f86c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f86c4:
    // 0x1f86c4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1f86c8:
    if (ctx->pc == 0x1F86C8u) {
        ctx->pc = 0x1F86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86C4u;
        // 0x1f86c8: 0x8fc5064c  lw          $a1, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F86CCu;
        goto label_1f86cc;
    }
    ctx->pc = 0x1F86C4u;
    {
        const bool branch_taken_0x1f86c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86C4u;
        // 0x1f86c8: 0x8fc5064c  lw          $a1, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86c4) {
            ctx->pc = 0x1F8700u;
            goto label_1f8700;
        }
    }
    ctx->pc = 0x1F86CCu;
label_1f86cc:
    // 0x1f86cc: 0x0  nop
    ctx->pc = 0x1f86ccu;
    // NOP
label_1f86d0:
    // 0x1f86d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f86d4:
    // 0x1f86d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f86d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f86d8:
    // 0x1f86d8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1f86d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1f86dc:
    // 0x1f86dc: 0x8fc60648  lw          $a2, 0x648($fp)
    ctx->pc = 0x1f86dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_1f86e0:
    // 0x1f86e0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1f86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f86e4:
    // 0x1f86e4: 0x60f809  jalr        $v1
label_1f86e8:
    if (ctx->pc == 0x1F86E8u) {
        ctx->pc = 0x1F86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86E4u;
        // 0x1f86e8: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F86ECu;
        goto label_1f86ec;
    }
    ctx->pc = 0x1F86E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F86ECu);
        ctx->pc = 0x1F86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86E4u;
        // 0x1f86e8: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F86E4u, 0x1F86ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F86ECu;
label_1f86ec:
    // 0x1f86ec: 0x8fc30648  lw          $v1, 0x648($fp)
    ctx->pc = 0x1f86ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_1f86f0:
    // 0x1f86f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f86f4:
    // 0x1f86f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1f86f8:
    if (ctx->pc == 0x1F86F8u) {
        ctx->pc = 0x1F86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86F4u;
        // 0x1f86f8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F86FCu;
        goto label_1f86fc;
    }
    ctx->pc = 0x1F86F4u;
    {
        const bool branch_taken_0x1f86f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86F4u;
        // 0x1f86f8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86f4) {
            ctx->pc = 0x1F86D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f86d0;
        }
    }
    ctx->pc = 0x1F86FCu;
label_1f86fc:
    // 0x1f86fc: 0x8fc5064c  lw          $a1, 0x64C($fp)
    ctx->pc = 0x1f86fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
label_1f8700:
    // 0x1f8700: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x1f8700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_1f8704:
    // 0x1f8704: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f8704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8708:
    // 0x1f8708: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f870c:
    if (ctx->pc == 0x1F870Cu) {
        ctx->pc = 0x1F870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8708u;
        // 0x1f870c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8710u;
        goto label_1f8710;
    }
    ctx->pc = 0x1F8708u;
    {
        const bool branch_taken_0x1f8708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8708u;
        // 0x1f870c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8708) {
            ctx->pc = 0x1F8718u;
            goto label_1f8718;
        }
    }
    ctx->pc = 0x1F8710u;
label_1f8710:
    // 0x1f8710: 0xc07e10c  jal         func_1F8430
label_1f8714:
    if (ctx->pc == 0x1F8714u) {
        ctx->pc = 0x1F8718u;
        goto label_1f8718;
    }
    ctx->pc = 0x1F8710u;
    SET_GPR_U32(ctx, 31, 0x1F8718u);
    ctx->pc = 0x1F8430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8430u, 0x1F8710u, 0x1F8718u)) {
        return;
    }
    ctx->pc = 0x1F8718u;
label_1f8718:
    // 0x1f8718: 0x8fc30640  lw          $v1, 0x640($fp)
    ctx->pc = 0x1f8718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1600)));
label_1f871c:
    // 0x1f871c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1f8720:
    // 0x1f8720: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f8724:
    if (ctx->pc == 0x1F8724u) {
        ctx->pc = 0x1F8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8720u;
        // 0x1f8724: 0x8fc50644  lw          $a1, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8728u;
        goto label_1f8728;
    }
    ctx->pc = 0x1F8720u;
    {
        const bool branch_taken_0x1f8720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8720u;
        // 0x1f8724: 0x8fc50644  lw          $a1, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8720) {
            ctx->pc = 0x1F8738u;
            goto label_1f8738;
        }
    }
    ctx->pc = 0x1F8728u;
label_1f8728:
    // 0x1f8728: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1f8728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f872c:
    // 0x1f872c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f8730:
    // 0x1f8730: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1f8734:
    if (ctx->pc == 0x1F8734u) {
        ctx->pc = 0x1F8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8730u;
        // 0x1f8734: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8738u;
        goto label_1f8738;
    }
    ctx->pc = 0x1F8730u;
    {
        const bool branch_taken_0x1f8730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8730u;
        // 0x1f8734: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8730) {
            ctx->pc = 0x1F8754u;
            goto label_1f8754;
        }
    }
    ctx->pc = 0x1F8738u;
label_1f8738:
    // 0x1f8738: 0xc07e10c  jal         func_1F8430
label_1f873c:
    if (ctx->pc == 0x1F873Cu) {
        ctx->pc = 0x1F8740u;
        goto label_1f8740;
    }
    ctx->pc = 0x1F8738u;
    SET_GPR_U32(ctx, 31, 0x1F8740u);
    ctx->pc = 0x1F8430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8430u, 0x1F8738u, 0x1F8740u)) {
        return;
    }
    ctx->pc = 0x1F8740u;
label_1f8740:
    // 0x1f8740: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x1f8740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_1f8744:
    // 0x1f8744: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1f8744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f8748:
    // 0x1f8748: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f8748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f874c:
    // 0x1f874c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x1f874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1f8750:
    // 0x1f8750: 0x8fc50644  lw          $a1, 0x644($fp)
    ctx->pc = 0x1f8750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_1f8754:
    // 0x1f8754: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1f8754u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1f8758:
    // 0x1f8758: 0x8c9e0008  lw          $fp, 0x8($a0)
    ctx->pc = 0x1f8758u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1f875c:
    // 0x1f875c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f8760:
    // 0x1f8760: 0x400008  jr          $v0
label_1f8764:
    if (ctx->pc == 0x1F8764u) {
        ctx->pc = 0x1F8764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8760u;
        // 0x1f8764: 0x8c7d0008  lw          $sp, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8768u;
        goto label_1f8768;
    }
    ctx->pc = 0x1F8760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x1F8764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8760u;
        // 0x1f8764: 0x8c7d0008  lw          $sp, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8760u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F8768u;
label_1f8768:
    // 0x1f8768: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f8768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
label_1f876c:
    // 0x1f876c: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x1f876cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_1f8770:
    // 0x1f8770: 0x8c62ec54  lw          $v0, -0x13AC($v1)
    ctx->pc = 0x1f8770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962260)));
label_1f8774:
    // 0x1f8774: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x1f8774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_1f8778:
    // 0x1f8778: 0xffbe06d0  sd          $fp, 0x6D0($sp)
    ctx->pc = 0x1f8778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1744), GPR_U64(ctx, 30));
label_1f877c:
    // 0x1f877c: 0xffb706c0  sd          $s7, 0x6C0($sp)
    ctx->pc = 0x1f877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1728), GPR_U64(ctx, 23));
label_1f8780:
    // 0x1f8780: 0xffb606b0  sd          $s6, 0x6B0($sp)
    ctx->pc = 0x1f8780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1712), GPR_U64(ctx, 22));
label_1f8784:
    // 0x1f8784: 0xffb506a0  sd          $s5, 0x6A0($sp)
    ctx->pc = 0x1f8784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 21));
label_1f8788:
    // 0x1f8788: 0xffb40690  sd          $s4, 0x690($sp)
    ctx->pc = 0x1f8788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 20));
label_1f878c:
    // 0x1f878c: 0xffb30680  sd          $s3, 0x680($sp)
    ctx->pc = 0x1f878cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 19));
label_1f8790:
    // 0x1f8790: 0xffb20670  sd          $s2, 0x670($sp)
    ctx->pc = 0x1f8790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 18));
label_1f8794:
    // 0x1f8794: 0xffb10660  sd          $s1, 0x660($sp)
    ctx->pc = 0x1f8794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 17));
label_1f8798:
    // 0x1f8798: 0xffb00650  sd          $s0, 0x650($sp)
    ctx->pc = 0x1f8798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 16));
label_1f879c:
    // 0x1f879c: 0xe7bf0748  swc1        $f31, 0x748($sp)
    ctx->pc = 0x1f879cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1864), bits); }
label_1f87a0:
    // 0x1f87a0: 0xe7be0740  swc1        $f30, 0x740($sp)
    ctx->pc = 0x1f87a0u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_1f87a4:
    // 0x1f87a4: 0xe7bd0738  swc1        $f29, 0x738($sp)
    ctx->pc = 0x1f87a4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_1f87a8:
    // 0x1f87a8: 0xe7bc0730  swc1        $f28, 0x730($sp)
    ctx->pc = 0x1f87a8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_1f87ac:
    // 0x1f87ac: 0xe7bb0728  swc1        $f27, 0x728($sp)
    ctx->pc = 0x1f87acu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_1f87b0:
    // 0x1f87b0: 0xe7ba0720  swc1        $f26, 0x720($sp)
    ctx->pc = 0x1f87b0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_1f87b4:
    // 0x1f87b4: 0xe7b90718  swc1        $f25, 0x718($sp)
    ctx->pc = 0x1f87b4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_1f87b8:
    // 0x1f87b8: 0xe7b80710  swc1        $f24, 0x710($sp)
    ctx->pc = 0x1f87b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_1f87bc:
    // 0x1f87bc: 0xe7b70708  swc1        $f23, 0x708($sp)
    ctx->pc = 0x1f87bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_1f87c0:
    // 0x1f87c0: 0xe7b60700  swc1        $f22, 0x700($sp)
    ctx->pc = 0x1f87c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_1f87c4:
    // 0x1f87c4: 0xe7b506f8  swc1        $f21, 0x6F8($sp)
    ctx->pc = 0x1f87c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_1f87c8:
    // 0x1f87c8: 0x40f809  jalr        $v0
label_1f87cc:
    if (ctx->pc == 0x1F87CCu) {
        ctx->pc = 0x1F87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87C8u;
        // 0x1f87cc: 0xe7b406f0  swc1        $f20, 0x6F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F87D0u;
        goto label_1f87d0;
    }
    ctx->pc = 0x1F87C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F87D0u);
        ctx->pc = 0x1F87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87C8u;
        // 0x1f87cc: 0xe7b406f0  swc1        $f20, 0x6F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F87C8u, 0x1F87D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F87D0u;
label_1f87d0:
    // 0x1f87d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f87d4:
    // 0x1f87d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f87d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1f87d8:
    // 0x1f87d8: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x1f87d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_1f87dc:
    // 0x1f87dc: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1f87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1f87e0:
    // 0x1f87e0: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x1f87e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_1f87e4:
    // 0x1f87e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f87e8:
    // 0x1f87e8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1f87ec:
    if (ctx->pc == 0x1F87ECu) {
        ctx->pc = 0x1F87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87E8u;
        // 0x1f87ec: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F87F0u;
        goto label_1f87f0;
    }
    ctx->pc = 0x1F87E8u;
    {
        const bool branch_taken_0x1f87e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87E8u;
        // 0x1f87ec: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f87e8) {
            ctx->pc = 0x1F886Cu;
            return;
        }
    }
    ctx->pc = 0x1F87F0u;
label_1f87f0:
    // 0x1f87f0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f87f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1f87f4:
    // 0x1f87f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f87f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1f87f8:
    // 0x1f87f8: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1f87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1f87fc:
    // 0x1f87fc: 0xafbd0008  sw          $sp, 0x8($sp)
    ctx->pc = 0x1f87fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 29));
label_1f8800:
    // 0x1f8800: 0x24428810  addiu       $v0, $v0, -0x77F0
    ctx->pc = 0x1f8800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936592));
label_1f8804:
    // 0x1f8804: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f8804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f8808:
    // 0x1f8808: 0xafbd0648  sw          $sp, 0x648($sp)
    ctx->pc = 0x1f8808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1608), GPR_U32(ctx, 29));
label_1f880c:
    // 0x1f880c: 0xac7d0008  sw          $sp, 0x8($v1)
    ctx->pc = 0x1f880cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
    ctx->pc = 0x1f8810u;
}
