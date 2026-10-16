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

// Function: sub_001E4198
// Address: 0x1e4198 - 0x1e4230
void sub_001E4198_0x1e4198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4198_0x1e4198");
#endif

    switch (ctx->pc) {
        case 0x1e41d8u: goto label_1e41d8;
        default: break;
    }

    ctx->pc = 0x1e4198u;

    // 0x1e4198: 0x3c01423c  lui         $at, 0x423C
    ctx->pc = 0x1e4198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16956 << 16));
    // 0x1e419c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e419cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e41a0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1e41a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1e41a4: 0xc480e714  lwc1        $f0, -0x18EC($a0)
    ctx->pc = 0x1e41a4u;
    { uint32_t bits = FAST_READ32(0x33E714u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e41a8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1e41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1e41ac: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1e41acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1e41b0: 0x244b9a80  addiu       $t3, $v0, -0x6580
    ctx->pc = 0x1e41b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941312));
    // 0x1e41b4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1e41b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1e41b8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1e41b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1e41bc: 0x24479680  addiu       $a3, $v0, -0x6980
    ctx->pc = 0x1e41bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940288));
    // 0x1e41c0: 0x24689b80  addiu       $t0, $v1, -0x6480
    ctx->pc = 0x1e41c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941568));
    // 0x1e41c4: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1e41c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1e41c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e41c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e41cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e41ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e41d0: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x1e41d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x1e41d4: 0xe480e714  swc1        $f0, -0x18EC($a0)
    ctx->pc = 0x1e41d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294960916), bits); }
label_1e41d8:
    // 0x1e41d8: 0x12a1021  addu        $v0, $t1, $t2
    ctx->pc = 0x1e41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1e41dc: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x1e41dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e41e0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1e41e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1e41e4: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x1e41e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1e41e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e41ec: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x1e41ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1e41f0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1e41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1e41f4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1e41f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1e41f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e41f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e41fc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1e41fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1e4200: 0x29220100  slti        $v0, $t1, 0x100
    ctx->pc = 0x1e4200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1e4204: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1e4204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e4208: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1e4208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e420c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e420cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e4210: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x1e4210u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e4214: 0xa1050001  sb          $a1, 0x1($t0)
    ctx->pc = 0x1e4214u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e4218: 0xa1040002  sb          $a0, 0x2($t0)
    ctx->pc = 0x1e4218u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e421c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1E421Cu;
    {
        const bool branch_taken_0x1e421c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E421Cu;
        // 0x1e4220: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e421c) {
            ctx->pc = 0x1E41D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e41d8;
        }
    }
    ctx->pc = 0x1E4224u;
    // 0x1e4224: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E422Cu;
    // 0x1e422c: 0x0  nop
    ctx->pc = 0x1e422cu;
    // NOP
    ctx->pc = 0x1e4230u;
}
