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

// Function: sub_00202220
// Address: 0x202220 - 0x2022e0
void sub_00202220_0x202220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202220_0x202220");
#endif

    switch (ctx->pc) {
        case 0x202254u: goto label_202254;
        case 0x202280u: goto label_202280;
        case 0x202294u: goto label_202294;
        case 0x20229cu: goto label_20229c;
        case 0x2022a4u: goto label_2022a4;
        case 0x2022c8u: goto label_2022c8;
        default: break;
    }

    ctx->pc = 0x202220u;

    // 0x202220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202224: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x202224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x202228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20222c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20222cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202230: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x202230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x202234: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x202234u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0270u));
    // 0x202238: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x202238u;
    {
        const bool branch_taken_0x202238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202238u;
        // 0x20223c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202238) {
            ctx->pc = 0x202260u;
            goto label_202260;
        }
    }
    ctx->pc = 0x202240u;
    // 0x202240: 0x2e220041  sltiu       $v0, $s1, 0x41
    ctx->pc = 0x202240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x202244: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x202244u;
    {
        const bool branch_taken_0x202244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202244u;
        // 0x202248: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202244) {
            ctx->pc = 0x202264u;
            goto label_202264;
        }
    }
    ctx->pc = 0x20224Cu;
    // 0x20224c: 0xc080aac  jal         func_202AB0
    ctx->pc = 0x20224Cu;
    SET_GPR_U32(ctx, 31, 0x202254u);
    ctx->pc = 0x202250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20224Cu;
    // 0x202250: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202AB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202AB0u, 0x20224Cu, 0x202254u)) {
        return;
    }
    ctx->pc = 0x202254u;
label_202254:
    // 0x202254: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x202254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202258: 0x1600001c  bnez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x202258u;
    {
        const bool branch_taken_0x202258 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202258u;
        // 0x20225c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202258) {
            ctx->pc = 0x2022CCu;
            goto label_2022cc;
        }
    }
    ctx->pc = 0x202260u;
label_202260:
    // 0x202260: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x202260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_202264:
    // 0x202264: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x202264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x202268: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202268u;
    {
        const bool branch_taken_0x202268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202268u;
        // 0x20226c: 0x2e220401  sltiu       $v0, $s1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202268) {
            ctx->pc = 0x20228Cu;
            goto label_20228c;
        }
    }
    ctx->pc = 0x202270u;
    // 0x202270: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202270u;
    {
        const bool branch_taken_0x202270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202270) {
            ctx->pc = 0x20228Cu;
            goto label_20228c;
        }
    }
    ctx->pc = 0x202278u;
    // 0x202278: 0xc080b60  jal         func_202D80
    ctx->pc = 0x202278u;
    SET_GPR_U32(ctx, 31, 0x202280u);
    ctx->pc = 0x20227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202278u;
    // 0x20227c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202D80u, 0x202278u, 0x202280u)) {
        return;
    }
    ctx->pc = 0x202280u;
label_202280:
    // 0x202280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x202280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202284: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x202284u;
    {
        const bool branch_taken_0x202284 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x202288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202284u;
        // 0x202288: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202284) {
            ctx->pc = 0x2022CCu;
            goto label_2022cc;
        }
    }
    ctx->pc = 0x20228Cu;
label_20228c:
    // 0x20228c: 0xc0807e4  jal         func_201F90
    ctx->pc = 0x20228Cu;
    SET_GPR_U32(ctx, 31, 0x202294u);
    ctx->pc = 0x201F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201F90u, 0x20228Cu, 0x202294u)) {
        return;
    }
    ctx->pc = 0x202294u;
label_202294:
    // 0x202294: 0xc08083a  jal         func_2020E8
    ctx->pc = 0x202294u;
    SET_GPR_U32(ctx, 31, 0x20229Cu);
    ctx->pc = 0x2020E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2020E8u, 0x202294u, 0x20229Cu)) {
        return;
    }
    ctx->pc = 0x20229Cu;
label_20229c:
    // 0x20229c: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x20229Cu;
    SET_GPR_U32(ctx, 31, 0x2022A4u);
    ctx->pc = 0x2022A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20229Cu;
    // 0x2022a0: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x20229Cu, 0x2022A4u)) {
        return;
    }
    ctx->pc = 0x2022A4u;
label_2022a4:
    // 0x2022a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2022a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022a8: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2022A8u;
    {
        const bool branch_taken_0x2022a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2022ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022A8u;
        // 0x2022ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022a8) {
            ctx->pc = 0x2022CCu;
            goto label_2022cc;
        }
    }
    ctx->pc = 0x2022B0u;
    // 0x2022b0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2022b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2022b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2022b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022b8: 0x24843c18  addiu       $a0, $a0, 0x3C18
    ctx->pc = 0x2022b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15384));
    // 0x2022bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2022bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022c0: 0xc0c4f0a  jal         func_313C28
    ctx->pc = 0x2022C0u;
    SET_GPR_U32(ctx, 31, 0x2022C8u);
    ctx->pc = 0x2022C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022C0u;
    // 0x2022c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313C28u, 0x2022C0u, 0x2022C8u)) {
        return;
    }
    ctx->pc = 0x2022C8u;
label_2022c8:
    // 0x2022c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2022c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2022cc:
    // 0x2022cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2022ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2022d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2022d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2022d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2022d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2022d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2022D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2022DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022D8u;
        // 0x2022dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2022D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2022E0u;
}
