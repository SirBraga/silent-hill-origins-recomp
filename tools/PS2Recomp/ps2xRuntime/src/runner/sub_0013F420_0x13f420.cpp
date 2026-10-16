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

// Function: sub_0013F420
// Address: 0x13f420 - 0x13f508
void sub_0013F420_0x13f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F420_0x13f420");
#endif

    switch (ctx->pc) {
        case 0x13f498u: goto label_13f498;
        case 0x13f4a4u: goto label_13f4a4;
        case 0x13f4acu: goto label_13f4ac;
        case 0x13f4d4u: goto label_13f4d4;
        case 0x13f4e4u: goto label_13f4e4;
        case 0x13f4f0u: goto label_13f4f0;
        default: break;
    }

    ctx->pc = 0x13f420u;

    // 0x13f420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13f420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13f424: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13f424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13f428: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13f428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13f42c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13f430: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13f430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13f434: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f438: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13f438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13f43c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x13f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x13f440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f444: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13f444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13f448: 0x24420248  addiu       $v0, $v0, 0x248
    ctx->pc = 0x13f448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 584));
    // 0x13f44c: 0x24630128  addiu       $v1, $v1, 0x128
    ctx->pc = 0x13f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 296));
    // 0x13f450: 0x248400e8  addiu       $a0, $a0, 0xE8
    ctx->pc = 0x13f450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x13f454: 0x24c60268  addiu       $a2, $a2, 0x268
    ctx->pc = 0x13f454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 616));
    // 0x13f458: 0x8e270380  lw          $a3, 0x380($s1)
    ctx->pc = 0x13f458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x13f45c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13f45cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f460: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x13f460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x13f464: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x13f464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x13f468: 0xae240084  sw          $a0, 0x84($s1)
    ctx->pc = 0x13f468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 4));
    // 0x13f46c: 0x10e00014  beqz        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x13F46Cu;
    {
        const bool branch_taken_0x13f46c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F46Cu;
        // 0x13f470: 0xae260034  sw          $a2, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f46c) {
            ctx->pc = 0x13F4C0u;
            goto label_13f4c0;
        }
    }
    ctx->pc = 0x13F474u;
    // 0x13f474: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13f474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x13f478: 0x8e25032c  lw          $a1, 0x32C($s1)
    ctx->pc = 0x13f478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x13f47c: 0x8c508bc4  lw          $s0, -0x743C($v0)
    ctx->pc = 0x13f47cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x338BC4u));
    // 0x13f480: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F480u;
    {
        const bool branch_taken_0x13f480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F480u;
        // 0x13f484: 0x8ca20024  lw          $v0, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f480) {
            ctx->pc = 0x13F4A4u;
            goto label_13f4a4;
        }
    }
    ctx->pc = 0x13F488u;
    // 0x13f488: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F488u;
    {
        const bool branch_taken_0x13f488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f488) {
            ctx->pc = 0x13F4A4u;
            goto label_13f4a4;
        }
    }
    ctx->pc = 0x13F490u;
    // 0x13f490: 0xc066512  jal         func_199448
    ctx->pc = 0x13F490u;
    SET_GPR_U32(ctx, 31, 0x13F498u);
    ctx->pc = 0x13F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F490u;
    // 0x13f494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199448u, 0x13F490u, 0x13F498u)) {
        return;
    }
    ctx->pc = 0x13F498u;
label_13f498:
    // 0x13f498: 0x8e25032c  lw          $a1, 0x32C($s1)
    ctx->pc = 0x13f498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x13f49c: 0xc06640a  jal         func_199028
    ctx->pc = 0x13F49Cu;
    SET_GPR_U32(ctx, 31, 0x13F4A4u);
    ctx->pc = 0x13F4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F49Cu;
    // 0x13f4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199028u, 0x13F49Cu, 0x13F4A4u)) {
        return;
    }
    ctx->pc = 0x13F4A4u;
label_13f4a4:
    // 0x13f4a4: 0xc0b5b86  jal         func_2D6E18
    ctx->pc = 0x13F4A4u;
    SET_GPR_U32(ctx, 31, 0x13F4ACu);
    ctx->pc = 0x13F4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F4A4u;
    // 0x13f4a8: 0x8e240328  lw          $a0, 0x328($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6E18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6E18u, 0x13F4A4u, 0x13F4ACu)) {
        return;
    }
    ctx->pc = 0x13F4ACu;
label_13f4ac:
    // 0x13f4ac: 0xae200320  sw          $zero, 0x320($s1)
    ctx->pc = 0x13f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 0));
    // 0x13f4b0: 0xae200324  sw          $zero, 0x324($s1)
    ctx->pc = 0x13f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 804), GPR_U32(ctx, 0));
    // 0x13f4b4: 0xae200328  sw          $zero, 0x328($s1)
    ctx->pc = 0x13f4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
    // 0x13f4b8: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x13f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
    // 0x13f4bc: 0xae200380  sw          $zero, 0x380($s1)
    ctx->pc = 0x13f4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 0));
label_13f4c0:
    // 0x13f4c0: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x13f4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13f4c4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13f4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13f4c8: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x13f4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x13f4cc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13F4CCu;
    SET_GPR_U32(ctx, 31, 0x13F4D4u);
    ctx->pc = 0x13F4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F4CCu;
    // 0x13f4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13F4CCu, 0x13F4D4u)) {
        return;
    }
    ctx->pc = 0x13F4D4u;
label_13f4d4:
    // 0x13f4d4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13f4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4dc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13F4DCu;
    SET_GPR_U32(ctx, 31, 0x13F4E4u);
    ctx->pc = 0x13F4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F4DCu;
    // 0x13f4e0: 0x24a5f888  addiu       $a1, $a1, -0x778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13F4DCu, 0x13F4E4u)) {
        return;
    }
    ctx->pc = 0x13F4E4u;
label_13f4e4:
    // 0x13f4e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4e8: 0xc0400d0  jal         func_100340
    ctx->pc = 0x13F4E8u;
    SET_GPR_U32(ctx, 31, 0x13F4F0u);
    ctx->pc = 0x13F4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F4E8u;
    // 0x13f4ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x100340u, 0x13F4E8u, 0x13F4F0u)) {
        return;
    }
    ctx->pc = 0x13F4F0u;
label_13f4f0:
    // 0x13f4f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13f4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f4f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13f4f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f4f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13f4f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f500: 0x3e00008  jr          $ra
    ctx->pc = 0x13F500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F500u;
        // 0x13f504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F508u;
}
