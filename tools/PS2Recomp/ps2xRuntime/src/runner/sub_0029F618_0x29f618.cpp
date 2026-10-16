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

// Function: sub_0029F618
// Address: 0x29f618 - 0x29f7f0
void sub_0029F618_0x29f618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F618_0x29f618");
#endif

    switch (ctx->pc) {
        case 0x29f658u: goto label_29f658;
        case 0x29f698u: goto label_29f698;
        case 0x29f6e0u: goto label_29f6e0;
        case 0x29f714u: goto label_29f714;
        case 0x29f75cu: goto label_29f75c;
        case 0x29f794u: goto label_29f794;
        default: break;
    }

    ctx->pc = 0x29f618u;

    // 0x29f618: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x29f618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x29f61c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f620: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x29f620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x29f624: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29f624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f628: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x29f628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x29f62c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x29f62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x29f630: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x29f630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x29f634: 0x3c140068  lui         $s4, 0x68
    ctx->pc = 0x29f634u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)104 << 16));
    // 0x29f638: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x29f638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x29f63c: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x29f63cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x29f640: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x29f640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x29f644: 0x3c120068  lui         $s2, 0x68
    ctx->pc = 0x29f644u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)104 << 16));
    // 0x29f648: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x29f648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x29f64c: 0x3c150068  lui         $s5, 0x68
    ctx->pc = 0x29f64cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)104 << 16));
    // 0x29f650: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x29F650u;
    SET_GPR_U32(ctx, 31, 0x29F658u);
    ctx->pc = 0x29F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F650u;
    // 0x29f654: 0xffb00060  sd          $s0, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x29F650u, 0x29F658u)) {
        return;
    }
    ctx->pc = 0x29F658u;
label_29f658:
    // 0x29f658: 0x3c03fbad  lui         $v1, 0xFBAD
    ctx->pc = 0x29f658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64429 << 16));
    // 0x29f65c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x29f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x29f660: 0x24422a98  addiu       $v0, $v0, 0x2A98
    ctx->pc = 0x29f660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10904));
    // 0x29f664: 0x3463208a  ori         $v1, $v1, 0x208A
    ctx->pc = 0x29f664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8330);
    // 0x29f668: 0x2664e1e8  addiu       $a0, $s3, -0x1E18
    ctx->pc = 0x29f668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959592));
    // 0x29f66c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x29f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x29f670: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x29f670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x29f674: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x29f674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29f678: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x29f678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x29f67c: 0x26422af0  addiu       $v0, $s2, 0x2AF0
    ctx->pc = 0x29f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10992));
    // 0x29f680: 0x8e836ccc  lw          $v1, 0x6CCC($s4)
    ctx->pc = 0x29f680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27852)));
    // 0x29f684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f688: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29f688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f68c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29f68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f690: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x29f690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29f694: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x29f694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_29f698:
    // 0x29f698: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x29f698u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f69c: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x29f69cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29f6a0: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x29f6a0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29f6a4: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x29f6a4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x29f6a8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x29f6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x29f6ac: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x29f6acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x29f6b0: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x29f6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x29f6b4: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x29f6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x29f6b8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x29f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x29f6bc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x29f6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x29f6c0: 0x0  nop
    ctx->pc = 0x29f6c0u;
    // NOP
    // 0x29f6c4: 0x1486fff4  bne         $a0, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x29F6C4u;
    {
        const bool branch_taken_0x29f6c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x29f6c4) {
            ctx->pc = 0x29F698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f698;
        }
    }
    ctx->pc = 0x29F6CCu;
    // 0x29f6cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29f6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6d4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x29f6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x29f6d8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x29F6D8u;
    SET_GPR_U32(ctx, 31, 0x29F6E0u);
    ctx->pc = 0x29F6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6D8u;
    // 0x29f6dc: 0x26b02b50  addiu       $s0, $s5, 0x2B50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 11088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x29F6D8u, 0x29F6E0u)) {
        return;
    }
    ctx->pc = 0x29F6E0u;
label_29f6e0:
    // 0x29f6e0: 0x26422af0  addiu       $v0, $s2, 0x2AF0
    ctx->pc = 0x29f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10992));
    // 0x29f6e4: 0x3c03fbad  lui         $v1, 0xFBAD
    ctx->pc = 0x29f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64429 << 16));
    // 0x29f6e8: 0x34632086  ori         $v1, $v1, 0x2086
    ctx->pc = 0x29f6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8326);
    // 0x29f6ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f6f0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x29f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x29f6f4: 0x2665e1e8  addiu       $a1, $s3, -0x1E18
    ctx->pc = 0x29f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959592));
    // 0x29f6f8: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x29f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x29f6fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x29f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x29f700: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29f700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f704: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x29f704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x29f708: 0x8e826ccc  lw          $v0, 0x6CCC($s4)
    ctx->pc = 0x29f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27852)));
    // 0x29f70c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x29f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29f710: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x29f710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_29f714:
    // 0x29f714: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x29f714u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f718: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x29f718u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29f71c: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x29f71cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29f720: 0xdc860018  ld          $a2, 0x18($a0)
    ctx->pc = 0x29f720u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x29f724: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29f724u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29f728: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x29f728u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x29f72c: 0xfe050010  sd          $a1, 0x10($s0)
    ctx->pc = 0x29f72cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 5));
    // 0x29f730: 0xfe060018  sd          $a2, 0x18($s0)
    ctx->pc = 0x29f730u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 6));
    // 0x29f734: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x29f734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x29f738: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x29f738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x29f73c: 0x0  nop
    ctx->pc = 0x29f73cu;
    // NOP
    // 0x29f740: 0x1491fff4  bne         $a0, $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x29F740u;
    {
        const bool branch_taken_0x29f740 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x29f740) {
            ctx->pc = 0x29F714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f714;
        }
    }
    ctx->pc = 0x29F748u;
    // 0x29f748: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29f748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f74c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f750: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x29f750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x29f754: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x29F754u;
    SET_GPR_U32(ctx, 31, 0x29F75Cu);
    ctx->pc = 0x29F758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F754u;
    // 0x29f758: 0x3c100068  lui         $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x29F754u, 0x29F75Cu)) {
        return;
    }
    ctx->pc = 0x29F75Cu;
label_29f75c:
    // 0x29f75c: 0x26102bb0  addiu       $s0, $s0, 0x2BB0
    ctx->pc = 0x29f75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11184));
    // 0x29f760: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29f764: 0x3c03fbad  lui         $v1, 0xFBAD
    ctx->pc = 0x29f764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64429 << 16));
    // 0x29f768: 0x26a42b50  addiu       $a0, $s5, 0x2B50
    ctx->pc = 0x29f768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11088));
    // 0x29f76c: 0x34632086  ori         $v1, $v1, 0x2086
    ctx->pc = 0x29f76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8326);
    // 0x29f770: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x29f770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x29f774: 0x2665e1e8  addiu       $a1, $s3, -0x1E18
    ctx->pc = 0x29f774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959592));
    // 0x29f778: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x29f778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x29f77c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x29f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x29f780: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29f780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f784: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x29f784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x29f788: 0x8e826ccc  lw          $v0, 0x6CCC($s4)
    ctx->pc = 0x29f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27852)));
    // 0x29f78c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x29f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29f790: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x29f790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_29f794:
    // 0x29f794: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x29f794u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f798: 0xdc880008  ld          $t0, 0x8($a0)
    ctx->pc = 0x29f798u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29f79c: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x29f79cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29f7a0: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x29f7a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x29f7a4: 0xfe070000  sd          $a3, 0x0($s0)
    ctx->pc = 0x29f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 7));
    // 0x29f7a8: 0xfe080008  sd          $t0, 0x8($s0)
    ctx->pc = 0x29f7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 8));
    // 0x29f7ac: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x29f7acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x29f7b0: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x29f7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x29f7b4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x29f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x29f7b8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x29f7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x29f7bc: 0x0  nop
    ctx->pc = 0x29f7bcu;
    // NOP
    // 0x29f7c0: 0x1491fff4  bne         $a0, $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x29F7C0u;
    {
        const bool branch_taken_0x29f7c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x29f7c0) {
            ctx->pc = 0x29F794u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f794;
        }
    }
    ctx->pc = 0x29F7C8u;
    // 0x29f7c8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x29f7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29f7cc: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x29f7ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29f7d0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x29f7d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29f7d4: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x29f7d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29f7d8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x29f7d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29f7dc: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x29f7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29f7e0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x29f7e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29f7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x29F7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7E4u;
        // 0x29f7e8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F7ECu;
    // 0x29f7ec: 0x0  nop
    ctx->pc = 0x29f7ecu;
    // NOP
    ctx->pc = 0x29f7f0u;
}
